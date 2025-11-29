/*#include <iostream>

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
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if (i>j && j+i>n-1) {
                a[i][j]*=(-1);
            }
        }
    }
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/


/*#include<iostream>

using namespace std;

int main() {
    int m, n, a[100][100],b[100][100], counter=0;
    cin>>n>>m;
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cin>>a[i][j];
        }
    }
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cin>>b[i][j];
        }
    }
    int konecen=0;
//    for (int j1=0; j1<n; j1++) {         //PO REDICI
  //      for (int j2=0; j2<n; j2++) {
    //        counter=0;
      //      for (int i=0;i<m;i++) {
        //        if (a[j1][i]==b[j2][i]) {
          //          counter++;
            //        if (counter==n) {
              //          konecen++;
                //    }
              //  }
          //  }
      //  }
  //  }
    for (int j1=0;j1<m;j1++) {          //PO KOLONI
        for (int j2=0;j2<m;j2++) {
            counter=0;
            for (int i=0;i<n;i++) {
                if (a[i][j1]==b[i][j2]) {
                    counter++;
                    if (counter==n) {
                        konecen++;
                    }
                }
            }
        }
    }
    cout<<konecen;
    return 0;
}*/


/*#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int mx=0, k=0;
    for (int j=0; j<n; j++) {
        int tmp=0;
        for (int i=0; i<n; i++) {
            tmp+=a[i][j];
        }
        if (tmp>mx) {
            mx=tmp;
            k=j;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j==k) {
                a[i][j]+=mx;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
*/


#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin>>n>>m;
    int a[100][100], b[100][100];
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>>b[i][j];
        }
    }
    int konecen=0, br=0;
    for (int j1=0; j1<m; j1++) {
        for (int j2=0; j2<m; j2++) {
            br=0;
            for (int i=0; i<n; i++) {
                if (a[i][j1]==b[i][j2]) {
                    br++;
                    if (br==n) {
                        konecen++;
                    }
                }
            }
        }
    }
    cout<<konecen<<endl;
    return 0;
}
