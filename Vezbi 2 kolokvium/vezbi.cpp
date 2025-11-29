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
    int cx, cy;
    cin >> cx >> cy;
    int kraj = a[cx][cy];
    int golemina = 1;
    while (true) {
        if (cx - golemina < 0 || cx + golemina >= n || cy - golemina < 0 || cy + golemina >= m)
            break;
        int sum = 0;
        for (int i = -golemina; i <= golemina; i++) {
            int levagranica = -(golemina - abs(i));
            int desnagranica = golemina - abs(i);
            for (int j = levagranica; j <= desnagranica; j++) {
                int r = cx + i;
                int c = cy + j;
                if (r >= 0 && r < n && c >= 0 && c < m) {
                    sum += a[r][c];
                }
            }
        }
        if (sum > kraj) {
            kraj = sum;
        }
        golemina++;
    }
    cout << kraj << endl;
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
    int cx, cy;
    cin >> cx >> cy;
    int max = a[cx][cy];
    int golemina = 1;
    int b[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            b[i][j]=0;
        }
    }
    while (true) {
        if (cx - golemina < 0 || cx + golemina >= n || cy - golemina < 0 || cy + golemina >= m)
            break;
        int sum = 0;
        for (int i = 0; i < golemina+1; i++) {
            sum += a[cx - i][cy];
            sum += a[cx + i][cy];
            b[cx - i][cy]=a[cx - i][cy];
            b[cx + i][cy]=a[cx + i][cy];
            if (i != 0) {
                sum += a[cx][cy - i];
                sum += a[cx][cy + i];
                b[cx][cy - i]=a[cx][cy - i];
                b[cx][cy + i]=a[cx][cy + i];
            }
        }
        if (sum > max) {
            max = sum;
        }
        golemina++;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    cout << max << endl;
    return 0;
}*/


/*#include <iostream>
#include <cstring>

using namespace std;

void funkcija(char s[]) {
    int n=strlen(s), k=0;
    bool flag1=false, flag2=false;
    char a=s[0];
    s[0]=' ';
    for(int i=1;i<n;i++) {
        if (!flag1 && isspace(s[i])) {
            for (int j=0;j<n;j++) {
                s[j]=s[j+1];
            }
            i--;
            k++;
        }
        else {
            flag1=true;
            break;
        }
    }
    s[0]=a;
    char c=s[n-k-1];
    for (int i=n-k-2;i>=0;i--) {
        if (!flag2 && isspace(s[i])) {
            s[i]='\0';
        }
        else {
            flag2=true;
            break;
        }
    }
    s[strlen(s)]=c;
}

int main() {
    char s[100];
    cin.getline(s, 100);
    funkcija(s);
    cout << s << endl;
    return 0;
}
*/

/*#include <bits/stdc++.h>

using namespace std;

bool funkcija(char s1[], char s2[]) {
    for (int i=0; i<strlen(s2); i++) {
        int k=0;
        if (s1[0] == s2[i]) {
            for (int j=0; j<strlen(s1); j++) {
                if (s1[j]==s2[i+j]) {
                    k++;
                }
            }
        }
        if (k==strlen(s1)) {
            return true;
        }
    }
    return false;
}

int main() {
    char s1[100], s2[100];
    cin.getline(s1, 100);
    cin.getline(s2, 100);
    cout << funkcija(s1, s2) << endl;
    return 0;
}
*/


/*#include <iostream>

using namespace std;

int funkcija(int n) {
    if (n==0) {
        return 0;
    }
    else {
        int a=n%10;
        int b=funkcija(n/10);
        if (a>b) {
            return a;
        }
        else {
            return b;
        }
    }
}

int main() {
    int n;
    while (cin >> n) {
        cout << funkcija(n) << endl;
    }
}
*/

/*#include <iostream>

using namespace std;

int max(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}

int funkcija(int n) {
    if (n==0) {
        return 0;
    }
    else {
        return max(n%10, funkcija(n/10));
    }
}

int main() {
    int n;
    while (cin >> n) {
        cout << funkcija(n) << endl;
    }
    return 0;
}*/


/*#include <iostream>

using namespace std;

int funkcija(int n) {
    if (n==0) {
        return 0;
    }
    else {
        if (n%10==9) {
            return 7+10*funkcija(n/10);
        }
        else {
            return n%10+10*funkcija(n/10);
        }
    }
}

int main() {
    int n;
    while (cin >> n) {
        cout << funkcija(n) << endl;
    }
    return 0;
}*/


/*#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int a[100][100], b[100][100];
    for(int i=0;i<n;i++) {
        for(int j=0;j<n*2;j++) {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            b[i][j]=a[i][j];
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=n;j<n*2;j++) {
            b[i+n][j-n]=a[i][j];
        }
    }
    for(int i=0;i<n*2;i++) {
        for(int j=0;j<n;j++) {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/

/*#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m], z1=0, z2=0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            if (i==j) {
                z1+=a[i][j];
            }
            if (i+j==n-1) {
                z2+=a[i][j];
            }
        }
    }
    if (z2>z1) {
        for (int i = 0; i < n; i++) {
            int k1, k2;
            for (int j = 0; j < m; j++) {
                if (i==j) {
                    k1=j;
                }
                if (i+j==n-1) {
                    k2=j;
                }
            }
            int temp=a[i][k1];
            a[i][k1]=a[i][k2];
            a[i][k2]=temp;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
*/

/*#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

void transformacija(char recenica[], int n, int pocetno_pomestuvanje, int kraj_pomestuvanje, bool mala_bukva) {
    if(n == strlen(recenica)) {
        return;
    }
    if(!isalpha(recenica[n])) {
        transformacija(recenica,n+1,pocetno_pomestuvanje,kraj_pomestuvanje,mala_bukva);
    }
    if(isalpha(recenica[n]) && islower(recenica[n]) && isalpha(recenica[n])) {
        mala_bukva = true;
        recenica[n] = (char)toupper(recenica[n]);
    }
    if(pocetno_pomestuvanje != kraj_pomestuvanje && isalpha(recenica[n])) {
        recenica[n] = (char)recenica[n]+1;
        if(recenica[n] > 'Z') {
            recenica[n] = 'A';
        }
        transformacija(recenica,n,pocetno_pomestuvanje+1,kraj_pomestuvanje,mala_bukva);
    }else {
        if(mala_bukva == true) {
            recenica[n] = (char)tolower(recenica[n]);
            transformacija(recenica,n+1,0,kraj_pomestuvanje,!mala_bukva);
        }else {
            transformacija(recenica,n+1,0,kraj_pomestuvanje,mala_bukva);
        }
    }
}

int main() {
    int n;
    cin>>n;
    cin.ignore();
    char recenica[100];
    cin.getline(recenica,100);
    bool mala_bukva = false;
    transformacija(recenica,0,0,n,mala_bukva);
    for(int i = 0; i<strlen(recenica); i++) {
        cout<<recenica[i];
    }
}*/


/*#include <iostream>

using namespace std;

int funkcija(int n) {
    if (n<10) {
        if (n!=9)
            return n;
        else
            return 7;
    }
    else {
        if (n%10 == 9) {
            return 7+10*funkcija(n/10);
        }
        else {
            return n%10+10*funkcija(n/10);
        }
    }
}

int main() {
    int n, a[100], i=0;
    while(cin>>n) {
        a[i]=funkcija(n);
        i++;
    }
    for (int j=0; j<i; j++) {
        for (int k=0; k<i; k++) {
            if (a[k]>a[j]) {
                int t = a[k];
                a[k] = a[j];
                a[j] = t;
            }
        }
    }
    for (int k=0; k<5; k++) {
        cout<<a[k]<<" ";
    }
    return 0;
}*/


/*#include <iostream>
#include <cstring>

using namespace std;

int main() {
    float n;
    cin>>n;
    char a[100], kraj[100];
    float tip, koef;
    float maxkoef=0, dobivka=n, kraentip=0;
    while (cin>>a) {
        if (a[0]=='#') {
            break;
        }
        cin>>tip>>koef;
        dobivka*=koef;
        if (koef>maxkoef) {
            maxkoef=koef;
            strcpy(kraj,a);
            kraentip=tip;
        }
    }
    cout<<kraj<<" "<<tip<<" "<<maxkoef<<endl;
    cout<<dobivka<<endl;
    return 0;
}
*/