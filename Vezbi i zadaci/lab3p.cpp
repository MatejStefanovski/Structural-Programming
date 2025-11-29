/*#include <bits/stdc++.h>

using namespace std;

int maxcifra(int x) {
    int m=0;
    while(x>0) {
        if (x%10>m) {
            m=x%10;
        }
        x=x/10;
    }
    return m;
}

int main() {
    int n, br=0, najgolemi=0;
    while (cin >> n) {
        cout << maxcifra(n) << endl;
        najgolemi+=maxcifra(n);
        br++;
    }
    cout << float(najgolemi)/br << endl;
    return 0;
}*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, bb=0;
    cin >> x;
    for (int i=x-1; i>0; i--) {
        int temp=i, palindrom=0, br=0;
        while (temp!=0) {
            palindrom=palindrom*10+temp%10;
            br+=temp%10;
            temp=temp/10;
        }
        if (palindrom==i && i%br==0) {
            cout << i << endl;
            bb++;
        }
        if (bb==10) {
            break;
        }
    }
    return 0;
}

/*#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, k;
    cin >> x >> k;
    int br=0, broevi=0;
    while (x>0) {
        if ((x%10)<k) {
            br++;
        }
        x/=10;
        broevi++;
    }
    cout << ((1.0*br)/broevi)*100 << "%" << endl;
    return 0;
}*/