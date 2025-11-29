#include <iostream>
#include <cmath>

using namespace std;

int povtoruvanja(int n, int x) {
    int temp = x, br=0;
    while (temp!=0) {
        br++;
        temp/=10;
    }
    int y=pow(10, br);
    int kraj=0;
    while (n!=0) {
        if (n%y==x) {
            kraj++;
            n*=10;
            n/=y;
        }
        n/=10;
    }
    return kraj;
}

int main() {
    int x, n;
    cin >> x;
    while (cin >> n) {
        cout << n << " -> " << povtoruvanja(n, x) << endl;
    }
    return 0;
}


/*#include <iostream>

using namespace std;

int funkcija(int x, int c) {
    int br=0;
    while (x!=0) {
        if (x%10==c) {
            br++;
        }
        x=x/10;
    }
    return br;
}

int main() {
    int x, c, p;
    cin >> x >> c >> p;
    int br=0, i=x+1;
    while (true) {
        if (funkcija(i,c) == p) {
            br++;
            cout << i << endl;
        }
        if (br==10) {
            break;
        }
        i++;
    }
    return 0;
}
*/

/*#include <iostream>
#include <cmath>

using namespace std;

int funkcija(int n) {
    int temp=n, br=0;
    while (temp!=0) {
        br++;
        temp=temp/10;
    }
    int y=pow(10,br-2);
    return n/y;
}

int main() {
    int n;
    cin >> n;
    cout << funkcija(n);
    return 0;
}*/