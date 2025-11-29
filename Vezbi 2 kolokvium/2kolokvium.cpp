/*#include <iostream>

using namespace std;

int funkcija(int n, bool k) {
    if (n <= 0) {
        return 0;
    }
    else {
        if (k) {
            return n%10+funkcija(n/10, !k);
        }
        else {
            return funkcija(n/10, !k);
        }
    }
}

int main() {
    int n;
    cin>>n;
    cout << funkcija(n, false) << endl;
    return 0;
}
*/



/*#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    int b[n]={0};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            b[i]+=a[i][j];
        }
    }
    for (int i = 0; i < n/2; i++) {
        if (b[i]>b[n-i-1]) {
            int c[m]={0};
            for (int j = 0; j < m; j++) {
                c[j]=a[i][j];
                a[i][j]=a[n-i-1][j];
            }
            for (int j = 0; j < m; j++) {
                a[n-i-1][j]=c[j];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
*/



#include <iostream>
#include <cstring>

using namespace std;

bool neparen(char a[], int n) {
    int br=0;
    for (int i = 0; i < n; i++) {
        if (a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u') {
            br++;
        }
    }
    if (br%2==0) {
        return false;
    }
    return true;
}

int broj(char a[], int n) {
    int br=0;
    for (int i = 0; i < n; i++) {
        if (a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u') {
            br++;
        }
    }
    return br;
}

int main() {
    char a[100], kraj[100];
    int mx=0;
    while (true) {
        cin.getline(a, 100);
        if (a[0]=='\0') {
            break;
        }
        if (neparen(a, strlen(a)) && broj(a, strlen(a))>mx) {
            mx=broj(a, strlen(a));
            strcpy(kraj, a);
        }
    }
    for (int i = 0; i < strlen(kraj); i++) {
        cout << kraj[i];
    }
    return 0;
}
