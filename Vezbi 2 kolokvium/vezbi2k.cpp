#include <iostream>

using namespace std;

int funkcija(int n, int i, int a[]) {
    if (i == n-1) {
        return a[i];
    }
    else {
        int max = funkcija(n, i + 1, a);
        if (a[i]>max) {
            return a[i];
        }
        else {
            return max;
        }
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << funkcija(n, 0, a) << endl;
    return 0;
}


/*#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    int br=0;
    while (getline(cin,s)) {
        if (s[0]=='#') {
            break;
        }
        for (int i = 0; i < s.length(); i++) {
            if (s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') {
                s[i]+=32;
                if (s[i+1]=='A' || s[i+1]=='E' || s[i+1]=='I' || s[i+1]=='O' || s[i+1]=='U') {
                    s[i+1]+=32;
                }
            }
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                if (s[i+1] == 'a' || s[i+1] == 'e' || s[i+1] == 'i' || s[i+1] == 'o' || s[i+1] == 'u') {
                    cout << s[i] << s[i+1] << endl;
                    br++;
                }
            }
        }
    }
    cout << br << endl;
    return 0;
}*/


/*#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        if (n==0) {
            break;
        }
        int k, mx=0, br;
        for (int i = 0; i < n; i++) {
            cin >> k;
            int y=k;
            while (k>=10) {
                k/=10;
            }
            if (k>mx) {
                mx=k;
                br=y;
            }
        }
        cout << br << endl;
    }
    return 0;
}*/


/*#include <iostream>

using namespace std;

int funkcija(int n, int* a, int ind) {
    int zbir = 0;
    for (int* ptr=a+ind; ptr<a+n; ptr++) {
        zbir += *ptr;
    }
    return zbir;
}

int main() {
    int n;
    cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ind;
    cin >> ind;
    cout << funkcija(n, a, ind) << endl;
    delete[] a;
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
    int p1, p2;
    cin >> p1 >> p2;
    int prv=0, vtor=0, tret=0, cetvrt=0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i<p1 && j<p2) {
                vtor += a[i][j];
            }
            else if (i>=p1 && j<p2) {
                tret += a[i][j];
            }
            else if (i>=p1 && j>=p2) {
                cetvrt += a[i][j];
            }
            else {
                prv += a[i][j];
            }
        }
    }
    cout << prv << " " << vtor << " " << tret << " " << cetvrt << endl;
    return 0;
}
*/


/*#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    string sifra, s;
    int tip, t=0;
    float koef, zbir_koef=1.0, max_koef=0.0;
    while (true) {
        cin>>sifra;
        if (sifra[0]=='#') {
            break;
        }
        cin >> tip >> koef;
        if (koef>max_koef) {
            s=sifra;
            t=tip;
            max_koef=koef;
        }
        zbir_koef*=koef;
    }
    cout << s << " " << t << " " << max_koef << endl;
    cout << zbir_koef*n << endl;
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
    //redici
    int red=0, kol=0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j]==1 && a[i][j+1]==1 && a[i][j+2]==1 && j+2<m) {
                red++;
                break;
            }
        }
    }
    //koloni
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            if (a[i][j] == 1 && a[i + 1][j] == 1 && a[i + 2][j] == 1 && i+2<n) {
                kol++;
                break;
            }
        }
    }

    cout << red+kol << endl;
    return 0;
}
*/


/*#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    float a[n][m], b[n] = {0};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            b[i] += a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        b[i] /= m;
    }
    for (int i = 0; i < n; i++) {
        float mx = abs(a[i][0] - b[i]);
        float br = a[i][0];
        for (int j = 1; j < m; j++) {
            float d = abs(a[i][j] - b[i]);
            if (d > mx) {
                mx = d;
                br = a[i][j];
            }
        }
        cout << br << " ";
    }
    cout << endl;
    return 0;
}
*/


/*#include <iostream>
#include <string>

using namespace std;

int proveri(string s, int &r, int &l) {
    bool flag=true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i]>='0' && s[i]<='9' && flag) {
            l=i;
            while (s[i]>='0' && s[i]<='9') {
                i++;
            }
            flag=false;
        }
        if (s[i]>='0' && s[i]<='9') {
            r=i;
        }
    }
    if (r>=0 && l>=0) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    string s, kraj;
    int mx=0;
    while (getline(cin, s)) {
        if (s[0]=='0') {
            break;
        }
        int l=-1, r=-1;
        if (!proveri(s, r, l)) {
            continue;
        }
        if (r-l>=mx) {
            mx=r-l;
            kraj=s.substr(l, r+1);
        }
    }
    cout << kraj << endl;
    return 0;
}*/



/*#include <iostream>

using namespace std;

float funkcija(int n, int a[], int i) {
    if (i==n+1) {
        return 0;
    }
    else {
        return a[i]+(1/funkcija(n, a, i+1));
    }
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    cout << funkcija(n, a, 0);
    return 0;
}
*/


/*#include <iostream>

using namespace std;

int main() {
    char a, b;
    cin >> a >> b;
    cin.ignore();
    string s;
    while (getline(cin, s)) {
        if (s[0]=='#') {
            break;
        }
        int ind1=0, ind2=0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i]==a) {
                ind1 = i;
            }
            if (s[i]==b) {
                ind2 = i;
            }
        }
        for (int i = ind1+1; i < ind2; i++) {
            cout << s[i];
        }
        cout << endl;
    }
    return 0;
}
*/


/*#include <iostream>

using namespace std;

int main() {
    string s;
    while (getline(cin, s)) {
        if (s[0] == '#') {
            break;
        }
        int br=0, i=0;
        while (i<s.length()) {
            if (s[i]>='0' && s[i]<='9') {
                br++;
            }
            i++;
        }
        i=0;
        int a[br]={0}, j=0;
        while (i<s.length()) {
            if (s[i]>='0' && s[i]<='9') {
                a[j]=s[i]-'0';
                j++;
            }
            i++;
        }
        i=0;
        for (i = 0; i < j; i++) {
            for (int k = 0; k < j; k++) {
                if (a[i]<a[k]) {
                    int temp = a[i];
                    a[i] = a[k];
                    a[k] = temp;
                }
            }
        }
        cout << br << ":";
        for (i=0; i < j; i++) {
            cout << a[i];
        }
        cout << endl;
    }
    return 0;
}
*/


/*#include <iostream>

using namespace std;

float funkcija(int n, int a[], int i) {
    if (i==n) {
        return 0;
    }
    else {
        if (a[i]>=0) {
            return 1+funkcija(n, a, i+1);
        }
        else {
            return funkcija(n, a, i+1);
        }
    }
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    cout << funkcija(n, a, 0);
    return 0;
}
*/


/*#include <iostream>

using namespace std;

int main() {
    int n, m, x;
    cin >> x >> n >> m;
    int a[n][m], b[n]={0};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            b[i]+=a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (b[i]<x) {
                a[i][j]=-1;
            }
            else if (b[i]>x) {
                a[i][j]=1;
            }
            else {
                a[i][j]=0;
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


/*#include <iostream>

using namespace std;

int max(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}

int funkcija(int n) {
    if (n<=0) {
        return n;
    }
    else {
        return max(n%10, funkcija(n/10));
    }
}

int main() {
    int n;
    while (cin>>n) {
        cout << funkcija(n) << endl;
    }
    return 0;
}
*/


/*#include <iostream>

using namespace std;

int main() {
    int n, m, x;
    cin >> x >> n >> m;
    int a[n][m], b[n]={0};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            b[i]+=a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (b[i]<x) {
                a[i][j]=-1;
            }
            else if (b[i]>x) {
                a[i][j]=1;
            }
            else {
                a[i][j]=0;
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

/*#include <iostream>
#include <string>

using namespace std;

void funkcija(string &s, int ind, int x) {
    if (ind==s.size()) {
        return;
    }
    char c=s[ind];
    if (isalpha(c)) {
        if (islower(c)) {
            s[ind]='a'+(c-'a'+x)%26;
        }
        else if (isupper(c)) {
            s[ind]='A'+(c-'A'+x)%26;
        }
    }
    funkcija(s, ind+1, x);
}

int main() {
    int n, x;
    cin >> n >> x;
    cin.ignore();
    string s;
    for (int i = 0; i < n; i++) {
        getline(cin, s);
        funkcija(s, 0, x);
        cout << s << endl;
    }
    return 0;
}
*/


/*#include <iostream>
#include <string>

using namespace std;

int proveri(string s, int &r, int &l) {
    bool flag=true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i]>='0' && s[i]<='9' && flag) {
            l=i;
            while (s[i]>='0' && s[i]<='9') {
                i++;
            }
            flag=false;
        }
        if (s[i]>='0' && s[i]<='9') {
            r=i;
        }
    }
    if (r>=0 && l>=0) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    string s, kraj;
    int mx=0;
    while (getline(cin, s)) {
        if (s[0]=='0') {
            break;
        }
        int l=-1, r=-1;
        if (!proveri(s, r, l)) {
            continue;
        }
        if (r-l>=mx) {
            mx=r-l;
            kraj=s.substr(l, r+1);
        }
    }
    cout << kraj << endl;
    return 0;
}*/


/*#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n][n*2], b[n*2][n]={0};
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
    for (int i=0; i<n; i++) {
        for (int j=n; j<n*2; j++) {
            b[i+n][j-n] = a[i][j];
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
    int n;
    cin>>n;
    float a[n][n], x=0, y=0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin>>a[i][j];
            if (j<i) {
                x+=a[i][j];
            }
            if (j>=n-i) {
                y+=a[i][j];
            }
        }
    }
    float b[n][n];
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if (i==j && i==n-j-1) {
                b[i][j]=x+y;
            }
            else if (i==j) {
                b[i][j]=x;
            }
            else if (i==n-j-1) {
                b[i][j]=y;
            }
            else {
                b[i][j]=0;
            }
        }
    }
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/


/*#include <iostream>

using namespace std;

int poramnet(int n) {
    if (n < 10) {
        if (n==9) {
            return 7;
        }
        return n;
    }
    else if (n%10 == 9) {
        return 7+10*poramnet(n/10);
    }
    else {
        return n%10+10*poramnet(n/10);
    }
}

int main() {
    int n, a[100]={0}, i=0;
    while (cin >> n) {
        a[i]=poramnet(n);
        i++;
    }
    for (int k=0; k<i; k++) {
        for (int j=0; j<i; j++) {
            if (a[j]>a[k]) {
                int t = a[j];
                a[j] = a[k];
                a[k] = t;
            }
        }
    }
    if (i<5) {
        for (int k=0; k<i; k++) {
            cout << a[k] << " ";
        }
    }
    else {
        for (int k=0; k<5; k++) {
            cout << a[k] << " ";
        }
    }
    return 0;
}*/



/*#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m], b[n]={0};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            if (m%2==1) {
                if (j <= m/2) {
                    b[i] += a[i][j];
                }
                if (j >= m/2) {
                    b[i] -= a[i][j];
                }
            }
            else {
                if (j < m/2) {
                    b[i] += a[i][j];
                }
                if (j >= m/2) {
                    b[i] -= a[i][j];
                }
            }
        }
        if (b[i]<0) {
            b[i] *= -1;
        }
    }
    if (m%2==1) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (j==m/2) {
                    a[i][j]=b[i];
                }
            }
        }
    }
    else if (m%2==0) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (j==m/2 || j==m/2-1) {
                    a[i][j]=b[i];
                }
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
}*/


/*#include <iostream>
#include <string>

using namespace std;

void funkcija(string &s, int ind, int x) {
    if (ind==s.size()) {
        return;
    }
    char c=s[ind];
    if (isalpha(c)) {
        if (islower(c)) {
            s[ind]='a'+(c-'a'+x)%26;
        }
        else if (isupper(c)) {
            s[ind]='A'+(c-'A'+x)%26;
        }
    }
    funkcija(s, ind+1, x);
}

int main() {
    int n, x;
    cin >> n >> x;
    cin.ignore();
    string s;
    for (int i = 0; i < n; i++) {
        getline(cin, s);
        funkcija(s, 0, x);
        cout << s << endl;
    }
    return 0;
}
*/