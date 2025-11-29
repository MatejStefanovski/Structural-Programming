#include <bits/stdc++.h>

using namespace std;

int main() {
    int n=1, jocker=0, br=1, zbir=0;
    while (n>=1 && n<=90) {
        cin >> n;
        if (n>=1 && n<=90) {
            if (br<8) {
                jocker=jocker*10+n%10;
            }
            else if (br>=8) {
                zbir+=n;
            }
        }
        else {
            break;
        }
        br++;
    }
    cout << jocker << zbir << endl;
    return 0;
}