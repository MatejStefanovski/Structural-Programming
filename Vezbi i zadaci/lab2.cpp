/*#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    for (int i=100; i<=999; i++) {
        if (i%n==0) {
            cout<<i<<"\n";
        }
    }
    return 0;
}*/

/*#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, n;
    cin >> a >> b >> n;
    while (n>0) {
        if (n==1) {
            cout << a;
        }
        else {
            cout << a << ", ";
        }
        a+=b;
        n--;
    }
    return 0;
}*/

/*#include <bits/stdc++.h>

using namespace std;

int main() {
    int p, q, n;
    cin >> p >> q;
    float pogolemi=0, pomali=0, isti=0;
    for (int i=0; i < p; i++) {
        cin >> n;
        if (n>q) {
            pogolemi++;
        }
        else if (n<q) {
            pomali++;
        }
        else {
            isti++;
        }
    }
    cout << "pogolemi: " << 1.0*(pogolemi/p)*100 << "%" << endl;
    cout << "isti: " << 1.0*(isti/p)*100 << "%" << endl;
    cout << "pomali: " << 1.0*(pomali/p)*100 << "%" << endl;
    return 0;
}*/

/*#include <bits/stdc++.h>

using namespace std;

int main() {
    int x;
    cin >> x;
    for (int i=10; i<=99; i++) {
        if (i%x==0) {
            int a=i%10, b=(i/10)%10;
            if ((a+b)%x==0) {
                cout<<i<<" ";
            }
        }
    }
    return 0;
}*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a, b, st;
    float najgolema=0, najmala=0, sredna=0;
    cin >> n >> a >> b;
    for (int i = 0; i < n; i++) {
        cin >> st;
        if (st == b) {
            najgolema++;
        }
        else if (st == a) {
            najmala++;
        }
        else {
            sredna++;
        }
    }
    cout << "Najgolema ima: " << 1.0*(najgolema/n)*100 << "%" << endl;
    cout << "Sredna ima: " << 1.0*(sredna/n)*100 << "%" << endl;
    cout << "Najmala ima: " << 1.0*(najmala/n)*100 << "%" << endl;
    return 0;
}