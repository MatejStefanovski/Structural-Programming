/*#include <iostream>
using namespace std;

void sort(int* x, int* y, int* z) {
    if (*x < *y) swap(*x, *y);
    if (*x < *z) swap(*x, *z);
    if (*y < *z) swap(*y, *z);
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    sort(&a, &b, &c);
    cout << a << " " << b << " " << c << endl;
    return 0;
}
*/


/*#include <iostream>

using namespace std;

void funkcija(int a[], int n) {
    int mx = a[0], mi = a[0], sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > mx)
            mx = a[i];
        if (a[i] < mi)
            mi = a[i];
        sum += a[i];
    }
    int diff = mx - mi;
    for (int i = 0; i < n; ++i) {
        a[i] += diff;
    }
    cout << "MAX -> " << mx << endl;
    cout << "MIN -> " << mi << endl;
    cout << "SUM -> " << sum << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    funkcija(a, n);
    return 0;
}
*/


#include <iostream>
#include <iomanip>

using namespace std;

void funkcija(float poeni[], int n) {
    int mx = poeni[0];

    for (int i = 0; i < n; i++) {
        if (poeni[i] > mx) {
            mx = poeni[i];
        }
    }
    double r = 100.0 / mx;
    for (int i = 0; i < n; i++) {
        poeni[i] = poeni[i] * r;
    }
    cout << fixed << setprecision(2);
    for (int i = 0; i < n; i++) {
        cout << poeni[i] << " ";
    }
    cout << endl;
}
int main() {
    int n;
    cin >> n;
    float poeni[n];
    for (int i = 0; i < n; i++) {
        cin >> poeni[i];
    }
    funkcija(poeni, n);
    return 0;
}
