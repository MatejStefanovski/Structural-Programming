#include <iostream>

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
    int k;
    cin >> k;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int br=0;
            if (i+k<=n && j+k<=m) {
                for (int l1=i; l1<i+k; l1++) {
                    for (int l2=j; l2<j+k; l2++) {
                        if (l1==i || l1==i+k-1 || l1-i==l2-j) {
                            br+=a[l1][l2];
                        }
                    }
                }
            }
            if (br!=0)
                a[i][j]=br;
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
    int k;
    cin >> k;
    if (k==1) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << a[i][j]*2 << " ";
            }
            cout << endl;
        }
        return 0;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int br=0;
            if (i+k<=n && j+k<=m) {
                for (int l1=i; l1<i+k; l1++) {
                    for (int l2=j; l2<j+k; l2++) {
                        if (l2==j || l2==j+k-1 || l1-i==l2-j) {
                            br+=a[l1][l2];
                        }
                    }
                }
            }
            if (br!=0)
                a[i][j]=br;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}*/


/*#include <iostream>
#include <cstring>

using namespace std;

int funkcija(char s[]) {
    int n = strlen(s), br=0;
    for (int i = 0; i < n; i++) {
        if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') {
            if (s[i+1]=='a' || s[i+1]=='e' || s[i+1]=='i' || s[i+1]=='o' || s[i+1]=='u' || s[i+1]=='A' || s[i+1]=='E' || s[i+1]=='I' || s[i+1]=='O' || s[i+1]=='U') {
                br++;
                while (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') {
                    i++;
                }
            }
        }
    }
    return br;
}

int main() {
    int n, max=0, b[100]={0};
    cin>>n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        char s[100];
        cin.getline(s, 100);
        int br=funkcija(s);
        if (br>max) {
            max=br;
        }
        b[br]++;
    }
    for (int i = 0; i <= max; i++) {
        cout<< i << ": " << b[i] << endl;
    }
    return 0;
}
*/

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
    int b[n][n];
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            b[i][j]=0;
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if (i==j && i<n/2) {
                b[i][n-j-1]=a[i][j];
            }
            else if (i==j && i>=n/2) {
                b[i][n-j-1]=a[i][j];
            }
            else if (i+j==n-1 && i<n/2) {
                b[n-1-i][j]=a[i][j];
            }
            else if (i+j==n-1 && i>=n/2) {
                b[n-1-i][j]=a[i][j];
            }
            else {
                if (b[i][j]==0)
                    b[i][j]=a[i][j];
            }
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/

/*#include <iostream>
#include <cstring>

using namespace std;

int funkcija(char s[], char a[]) {
    int n=strlen(a), br=0;
    bool flag=false;
    for (int i = 0; i <= n-strlen(s); i++) {
        int j;
        char c[100];
        for (j = 0; j < strlen(s); j++) {
            c[j]=a[j+i];
        }
        if (strcmp(c, s)==0 && flag==false) {
            flag=true;
            i+=strlen(s)-1;
        }
        else if (strcmp(c, s)==0 && flag==true) {
            br++;
            i+=strlen(s)-1;
        }
        else {
            flag=false;
        }
    }
    return br;
}

int funkcija(char s[], char a[]) {
    int n=strlen(a), br=0;
    bool flag=false;
    for (int i = 0; i <= n-strlen(s); i++) {
        if (a[i]==s[0]) {
            int j=0;
            for (j = 0; j < strlen(s); j++) {
                if (a[j+i]!=s[j]) {
                    flag=false;
                    break;
                }
            }
            if (j==strlen(s) && flag==false) {
                flag=true;
            }
            else if (j==strlen(s) && flag==true) {
                br++;
            }
        }
    }
    return br;
}

int main() {
    char s[100];
    cin.getline(s, 100);
    int n, b[100]={0}, max=0;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        char a[100];
        cin.getline(a, 100);
        int br=funkcija(s, a);
        if (br>max) {
            max=br;
        }
        b[br]++;
    }
    for (int i = 0; i <= max; i++) {
        cout << i << ": " << b[i] << endl;
    }
    return 0;
}*/


/*#include <iostream>
#include <cstring>

using namespace std;

int funkcija(char s[], int n) {
    int br=0;
    for(int i=0;i<n-1;i++) {
        if (s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!=' ' && !isdigit(s[i]) && !ispunct(s[i]) && s[i]!='A' && s[i]!='E' && s[i]!='I' && s[i]!='O' && s[i]!='U') {
            if (s[i+1]!='a' && s[i+1]!='e' && s[i+1]!='i' && s[i+1]!='o' && s[i+1]!='u' && s[i+1]!=' ' && !isdigit(s[i+1]) &&  !ispunct(s[i+1]) && s[i+1]!='A' && s[i+1]!='E' && s[i+1]!='I' && s[i+1]!='O' && s[i+1]!='U') {
                br++;
                while (s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u') {
                    i++;
                }
            }
        }
    }
    return br;
}

int main() {
    int n, max=0, niza[100]={0};
    cin>>n;
    cin.ignore();
    char s[100];
    for (int i = 0; i < n; i++) {
        cin.getline(s, 100);
        int br=funkcija(s,strlen(s));
        if (br>max) {
            max=br;
        }
        niza[br]++;
    }
    for (int i = 0; i <= max; i++) {
        cout<<i<<": "<<niza[i]<<endl;
    }
    return 0;
}
*/


/*#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin>>n>>m;
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin>>a[i][j];
        }
    }
    int min=n;
    if (min>m) {
        min=m;
    }
    int k=2;
    while (k<=min) {
        int zbir=0;
        for (int i = 0; i < k; i++) {
            for (int j = 0; j < k; j++) {
                if (j==0 || j==k-1 || i==j) {
                    zbir+=a[i][j];
                }
            }
        }
        cout << zbir << endl;
        k++;
    }
    return 0;
}
*/


/*#include <iostream>
#include <cstring>

using namespace std;

//  char funkcija(char s[], int i) {          //PRVA
//     if (i==strlen(s)) {
//         return '0';
//     }
//     else {
//         if (s[i]>='A' && s[i]<='Z') {
//             return s[i];
//         }
//         else {
//             return funkcija(s, i+1);
//         }
//     }
// }

char funkcija(char s[], int i) {            //POSLEDNA
    if (i==0) {
        return '0';
    }
    else {
        if (s[i]>='A' && s[i]<='Z') {
            return s[i];
        }
        else {
            return funkcija(s, i-1);
        }
    }
}

int main() {
    char s[100];
    cin.getline(s, 100);
    if (funkcija(s,strlen(s)-1)=='0') {
        cout<<"Nema";
    }
    else {
        cout << funkcija(s, strlen(s)-1);
    }
    return 0;
}
*/

/*#include <iostream>
#include <cstring>

using namespace std;

char funkcija(char s[], int i) {
    if (i==strlen(s)) {
        return '0';
    }
    else {
        if (s[i]!=' ' && !isalpha(s[i]) && !isdigit(s[i])) {
            return s[i];
        }
        else {
            return funkcija(s, i+1);
        }
    }
}

int main() {
    char s[100];
    cin.getline(s, 100);
    if (funkcija(s,0)=='0') {
        cout<<"Nema";
    }
    else {
        cout << funkcija(s, 0);
    }
    return 0;
}*/


/*#include  <iostream>                  //DOPISI
#include  <cstring>

using namespace std;

int izbroj(char s[], int n, int pocetok, int kraj, char a[]) {
    int br=0, c=0;
    for(int i=0; i<n; i++) {
        for (int j=pocetok; j<=kraj; j++) {
            if (s[i]==a[j]) {
                c++;
            }
            else {
                c=0;
            }
        }
        if (c>=kraj) {
            br++;
        }
    }
    return br;
}

int main() {
    char a[20];
    cin.getline(a,20);
    int n;
    cin>>n;
    cin.ignore();
    int pocetok=0, kraj=strlen(a)-1, max=0, b[100]={0};
    for (int i = 0; i < n; i++) {
        char s[100];
        cin.getline(s,100);
        int c=izbroj(s,strlen(s),pocetok,kraj,a);
        if (c>max) {
            max=c;
        }
        b[c]++;
    }
    for (int i = 0; i < max; i++) {
        cout<<i<<": "<<b[i]<<" ";
    }
    return 0;
}*/


/*#include  <iostream>

using namespace std;

void funkcija(int n) {
    cout << n << " ";
    if (n <= 0) {
        return;
    }
    funkcija(n-5);
    cout << n << " ";
}

int main() {
    int n;
    cin>>n;
    funkcija(n);
    return 0;
}
*/


/*#include  <iostream>

using namespace std;

int main() {
    int n, m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>>a[i][j];
        }
    }
    int k=2;
    while (k<=n && k<=m) {
        int b[k][k], br=0;
        for(int i=0;i<k;i++) {
            for(int j=0;j<k;j++) {
                b[i][j]=a[i][j];
            }
        }
        for(int i=0;i<k;i++) {
            for(int j=0;j<k;j++) {
                if (i==0 || i==k-1 || i+j+1==k) {
                    br+=b[i][j];
                }
            }
        }
        k++;
        cout << br << endl;
    }
    return 0;
}*/


/*#include  <iostream>
#include  <cstring>

using namespace std;

int izbroj(char s[], int n, int pocetok, int kraj, char a[]) {
    int br=0;
    while (kraj < n) {
        bool flag=true;
        for (int i=pocetok, j=0; i<=kraj && j<strlen(a); i++, j++) {
            if (a[j]!=s[i]) {
                flag=false;
                break;
            }
        }
        if (flag) {
            br++;
        }
        pocetok++;
        kraj++;
    }
    return br;
}

int main() {
    char a[20];
    cin.getline(a,20);
    int n;
    cin>>n;
    cin.ignore();
    int pocetok=0, kraj=strlen(a)-1, max=0, b[100]={0};
    for (int i=0; i<n; i++) {
        char s[100];
        cin.getline(s,100);
        int c=izbroj(s,strlen(s),pocetok,kraj,a);
        if (c>max) {
            max=c;
        }
        b[c]++;
    }
    for (int i=0; i<=max; i++) {
        cout<<i<<": "<<b[i]<<endl;
    }
    return 0;
}
*/
