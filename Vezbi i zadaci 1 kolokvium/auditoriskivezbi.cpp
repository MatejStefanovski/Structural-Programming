#include <bits/stdc++.h>            //Da se presmeta zbirot
                                    //1! + (1 + 2)! + (1 + 2 + 3)! + … + (1 + 2 + … + n)!
using namespace std;

int zbir_1(int i) {
    int zbir = 0;
    while (i>0) {
        zbir+=i;
        i--;
    }
    return zbir;
}

int factorial(int n) {
    if (n==0) {
        return 1;
    }
    return n*factorial(n-1);
}

int main() {
    int n;
    cin >> n;
    int zbir=0, z1=0;
    for (int i = 1; i <= n; i++) {
        z1=zbir_1(i);
        zbir+=factorial(z1);
        z1=0;
    }
    cout << zbir;
    return 0;
}


/*#include <bits/stdc++.h>          //Dali e simetricna matricata

using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin>>a[i][j];
        }
    }
    int k=0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if (a[i][j]!=a[j][i]) {
                k++;
            }
        }
    }
    if (k==0)
        cout<<"Simetricna e"<<endl;
    else
        cout << "NE e simetricna"<<endl;
    return 0;
}*/


/*#include <bits/stdc++.h>        //Site isti elementi da se izbrisat od niza

using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    int b[n];
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if (a[i]==a[j]) {
                a[j]=-1;
            }
        }
    }
    int j=0;
    for(int i=0;i<n;i++) {
        if (a[i]!=-1) {
            b[j]=a[i];
            j++;
        }
    }
    for (int i=0;i<j;i++) {
        cout<<b[i]<<" ";
    }
    return 0;
}
*/

/*#include <bits/stdc++.h>          // NIZA POMESTI ZA M MESTA DESNO

using namespace std;

int main() {
    int n, m;
    cin>>n >> m;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    int b[n];
    //for(int i=0;i<n;i++) {      // 1 NACIN
      //  if (i-m>=0) {
        //    b[i]=a[i-m];
        //}
        //else {
          //  b[i]=a[i-m+n];
        //}
    //}
    int j, k=0;
    for(int i=0;i<n;i++) {          // 2 NACIN
        for (j=0;j<m;j++) {
            k++;
            if (i-k<0) {
                k-=n;
            }
        }
        b[i]=a[i-k];
        j=0;
        k=0;

    }
    for(int i=0;i<n;i++) {
        cout<<b[i]<<" ";
    }
}*/