#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

class BigInteger {
private:
    string value;
    bool isNegative;

    static string addStrings(const string &num1, const string &num2) {
        string result;
        int carry = 0, sum;
        int i = num1.size() - 1, j = num2.size() - 1;

        while (i >= 0 || j >= 0 || carry) {
            sum = carry;
            if (i >= 0) sum += num1[i--] - '0';
            if (j >= 0) sum += num2[j--] - '0';
            carry = sum / 10;
            result.push_back((sum % 10) + '0');
        }

        reverse(result.begin(), result.end());
        return result;
    }

    static string subtractStrings(const string &num1, const string &num2) {
        string result;
        int borrow = 0, diff;
        int i = num1.size() - 1, j = num2.size() - 1;

        while (i >= 0) {
            diff = (num1[i] - '0') - (j >= 0 ? (num2[j--] - '0') : 0) - borrow;
            if (diff < 0) {
                diff += 10;
                borrow = 1;
            } else {
                borrow = 0;
            }
            result.push_back(diff + '0');
            i--;
        }

        reverse(result.begin(), result.end());
        size_t start = result.find_first_not_of('0');
        return (start == string::npos) ? "0" : result.substr(start);
    }

    static string multiplyStrings(const string &num1, const string &num2) {
        int len1 = num1.size(), len2 = num2.size();
        string result(len1 + len2, '0');

        for (int i = len1 - 1; i >= 0; --i) {
            int carry = 0;
            for (int j = len2 - 1; j >= 0; --j) {
                int temp = (num1[i] - '0') * (num2[j] - '0') + (result[i + j + 1] - '0') + carry;
                carry = temp / 10;
                result[i + j + 1] = (temp % 10) + '0';
            }
            result[i] += carry;
        }

        size_t start = result.find_first_not_of('0');
        return (start == string::npos) ? "0" : result.substr(start);
    }

    static string divideStrings(const string &num1, const string &num2) {
        string remainder = num1;
        while (remainder >= num2) {
            remainder = subtractStrings(remainder, num2);
        }
        return remainder;
    }

    static vector<pair<string, int>> factorizeString(string num) {
        vector<pair<string, int>> factors;
        string factor = "2";
        while (num != "1") {
            int count = 0;
            while (divideStrings(num, factor) == "0") {
                num = divideStrings(num, factor);
                count++;
            }
            if (count > 0) {
                factors.push_back({factor, count});
            }
            factor = addStrings(factor, "1");
        }
        return factors;
    }

public:
    BigInteger(string val) {
        if (val[0] == '-') {
            isNegative = true;
            value = val.substr(1);
        } else {
            isNegative = false;
            value = val;
        }
    }

    BigInteger operator+(const BigInteger &other) const {
        return BigInteger(addStrings(this->value, other.value));
    }

    BigInteger operator-(const BigInteger &other) const {
        return BigInteger(subtractStrings(this->value, other.value));
    }

    BigInteger operator*(const BigInteger &other) const {
        return BigInteger(multiplyStrings(this->value, other.value));
    }

    BigInteger operator%(const BigInteger &other) const {
        return BigInteger(divideStrings(this->value, other.value));
    }

    vector<pair<string, int>> factorize() const {
        return factorizeString(this->value);
    }

    string getValue() const {
        return (isNegative ? "-" : "") + value;
    }
};

int main() {
    BigInteger num1("123456789123456789");
    BigInteger num2("987654321987654321");

    BigInteger sum = num1 + num2;
    BigInteger difference = num1 - num2;
    BigInteger product = num1 * num2;
    BigInteger modResult = num1 % num2;

    cout << "Sum: " << sum.getValue() << endl;
    cout << "Difference: " << difference.getValue() << endl;
    cout << "Product: " << product.getValue() << endl;
    cout << "Modul: " << modResult.getValue() << endl;

    BigInteger num3("1176");
    vector<pair<string, int>> factors = num3.factorize();
    cout << "Faktorizacija na brojot e: ";
    for (auto &factor : factors) {
        cout << "(" << factor.first << "^" << factor.second << ") ";
    }
    cout << endl;

    return 0;
}
