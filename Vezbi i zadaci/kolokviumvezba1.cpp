/*#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if (n<0 || m<0) {
        cout << "invalid input";
    }
    vector<int>niza1, niza2;
    int a=max(n, m), b=min(n, m);
    while (a!=0)
    {
        int temp=a%10;
        niza1.push_back(temp);
        a=a/10;
    }
    while (b!=0)
    {
        int temp=b%10;
        niza2.push_back(temp);
        b=b/10;
    }
    int k=0;
    reverse(niza1.begin(), niza1.end());
    reverse(niza2.begin(), niza2.end());
    for (int i=1, j=0; i<niza1.size(), j<niza2.size(); i+=2, j++) {
        if (niza1[i]!=niza2[j]) {
            k++;
        }
    }
    if (k==0) {
        cout << "DA" << endl;
    }
    else {
        cout << "NE" << endl;
    }
    return 0;
}

NEPAREN EKVIVALENT
*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int minn=99999, minp=0;
    int maxx=-1, maxp=0;
    while (cin >> n) {
        vector<int> v1;
        int nn=n;
        while (n!=0) {
            v1.push_back(n%10);
            n=n/10;
        }
        reverse(v1.begin(),v1.end());
        int paren=0, neparen=0;
        for (int i=0;i<v1.size();i++) {
            if (i%2==0) {
                paren+=v1[i];
            }
            else if (i%2==1) {
                neparen+=v1[i];
            }
        }
        if (paren<minn) {
            minn=paren;
            minp=nn;
        }
        if (neparen>maxx) {
            maxx=neparen;
            maxp=nn;
        }
    }
    cout << "Najmal: " << minp << endl;
    cout << "Najgolem: " << maxp << endl;
    return 0;
}