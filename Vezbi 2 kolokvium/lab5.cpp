/*#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n], mi, mx, poz1=0, poz2=0;
    bool flag = true;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        if (flag) {
            mi=a[i];
            mx=a[i];
            flag = false;
        }
        if (a[i]>mx) {
            mx=a[i];
            poz1=i;
        }
        if (a[i]<mi) {
            mi=a[i];
            poz2=i;
        }
    }
    a[poz1]=mi;
    a[poz2]=mx;
    for (int i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }
    return 0;
}*/


/*#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    for(int i=0;i<n;i++) {
        int br=0;
        for(int j=0;j<n;j++) {
            if (a[i]<a[j]) {
                br++;
            }
        }
        cout << "[" << i << "] " << a[i] << " : " << br << endl;
    }
    return 0;
}*/


/*#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n], mx=0;
    float prosek=0.0;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        prosek+=a[i];
        if (a[i]>mx) {
            mx=a[i];
        }
    }
    prosek/=n;
    for(int i=0;i<n;i++) {
        if (a[i]>prosek) {
            a[i]=mx;
        }
    }
    for(int i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }
    return 0;
}*/


/*#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n], mx=0;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        if (mx<a[i]) {
            mx=a[i];
        }
    }
    int tmp[mx];
    for (int i=0; i<mx+1; i++) {
        tmp[i]=0;
    }
    int br=0;
    for(int i=n-1;i>=0;i--) {
        if (tmp[a[i]]==0) {
            for (int j=i-1;j>=0;j--) {
                if (a[i]==a[j]) {
                    tmp[a[i]]++;
                    for (int k=i;k<n;k++) {
                        a[k]=a[k+1];
                    }
                    br++;
                    break;
                }
            }
        }
    }
    for(int i=0;i<n-br;i++) {
        cout<<a[i]<<" ";
    }
    return 0;
}*/


#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int niza[n];
    for (int i = 0; i < n; i++) {
        cin >> niza[i];
    }
    int p;
    cin >> p;
    int a=0, b=p;
    while (b<=n) {
        float prosek=0.0;
        for (int i=a;i<b;i++) {
            prosek+=niza[i];
        }
        prosek/=p;
        b++;
        a++;
        cout << prosek << endl;
    }
    return 0;
}