#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, sumaraben=0;
    while (cin >> n) {
        sumaraben=n;
        while (sumaraben>9) {
            int a=sumaraben%10, b=sumaraben/10%10;
            sumaraben/=100;
            a+=b;
            if (a+b<10) {
                sumaraben=sumaraben*10+a;
            }
            else {
                sumaraben=sumaraben*100+a;
            }
            cout << sumaraben << endl;
        }
    }
    return 0;
}