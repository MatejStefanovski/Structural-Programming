/*#include <iostream>
#include <cstring>

using namespace std;

bool sp_znak(char a[], int n) {
    for (int i = 0; i < n; i++) {
        if (!isalpha(a[i]) && !isdigit(a[i])) {
            return true;
        }
    }
    return false;
}


bool palindrom(char a[], int n) {
    char temp[n + 1];
    for (int i = 0, j = n - 1; i < n && j >= 0; i++, j--) {
        temp[j] = a[i];
    }
    temp[n] = '\0';
    return strcmp(temp, a) == 0;
}


int main() {
    int n;
    cin>>n;
    bool flag=false;
    char niza[100], mx[100]="";
    for (int i = 0; i < n+1; i++) {
        cin.getline(niza, 100);
        if (strlen(niza) > strlen(mx) && sp_znak(niza, strlen(niza)) && palindrom(niza, strlen(niza))) {
            strcpy(mx, niza);
            flag=true;
        }
    }
    if (!flag) {
        cout << "Nema!";
    }
    else {
        cout << mx << endl;
    }
    return 0;
}*/


#include <iostream>
#include <cmath>
#include <string.h>

using namespace std;

/*int broj(int n) {
    while (true) {
        for (int i=1; i<n/2; i++) {
            if (i*i==n) {
                return n/i;
            }
        }
        n++;
    }
}

int main() {
    int n;
    cin>>n;
    if (n<10) {
        cout<<n<<endl;
        return 0;
    }
    int a[n][n], k=1;
    int t=broj(n);
    for (int j = 0; j < t; j++) {
        if (j%2==0) {
            for (int i = 0; i < t; i++) {
                if (k<=n)
                    a[i][j]=k;
                else
                    a[i][j]=0;
                k++;
            }
        }
        else {
            for (int i = t-1; i>=0; i--) {
                if (k<=n)
                    a[i][j]=k;
                else
                    a[i][j]=0;
                k++;
            }
        }
    }
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < t; j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/


/*#include <iostream>
#include <cstring>

using namespace std;

bool proveri(char c[], int n) {
    for (int i = 0; i < n; i++) {
        c[i]=tolower(c[i]);
    }
    int br=0;
    for (int i = 0; i < n; i++) {
        if (c[i]=='a' && c[i+1]=='1' && c[i+2]=='c') {
            br++;
        }
    }
    if (br>=2) {
        return true;
    }
    return false;
}

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n+1;i++) {
        char c[100];
        cin.getline(c, 100);
        if (proveri(c, strlen(c))) {
            cout << c << endl;
        }
    }
    return 0;
}
*/


/*#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int m, n;
    cin>>n>>m;
    int a[n][m], r, k;
    cin>>r>>k;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin>>a[i][j];
        }
    }
    int min=a[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] < min) {
                min = a[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i<r && j<k) {
                a[i][j]=min;
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



/*#include <iostream>                //PROVEI ZA CELOSNO DA RABOTI
#include <cstring>
#include <iomanip>

using namespace std;

int main() {
    int n, m;
    cin>>n>>m;
    float a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin>>a[i][j];
        }
    }
    float lr, lk, dr, dk;
    cin>>lk>>lr>>dk>>dr;
    float b[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i<lk || i>dk || j<lr || j>dr) {
                b[i][j] = a[i][j];
            }
            else {
                float as=0.0;
                int br=1;
                as+=a[i][j];
                if (i+1<n) {
                    as+=a[i+1][j];
                    br++;
                }
                if (j+1<m) {
                    as+=a[i][j+1];
                    br++;
                }
                if (i+1<n && j+1<m) {
                    as+=a[i+1][j+1];
                    br++;
                }
                if (i-1>=0) {
                    as+=a[i-1][j];
                    br++;
                }
                if (j-1>=0) {
                    as+=a[i][j-1];
                    br++;
                }
                if (j-1>=0 && i-1>=0) {
                    as+=a[i-1][j-1];
                    br++;
                }
                if (i-1>=0 && j+1<m) {
                    as+=a[i-1][j+1];
                    br++;
                }
                if (j-1>=0 && i+1<n) {
                    as+=a[i+1][j];
                    br++;
                }
                b[i][j] = as/(1.0*br);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/


/*#include <iostream>       //ISTATA ZADACA SO TAA EDNA POGORE
#include <cstring>
#include <iomanip>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    double a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    double lr, lk, dr, dk;
    cin >> lk >> lr >> dk >> dr;
    double b[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i < lk || i > dk || j < lr || j > dr) {
                b[i][j] = a[i][j];
            }
            else {
                double as = 0.0;
                int br = 0;

                for (int di = -1; di <= 1; di++) {
                    for (int dj = -1; dj <= 1; dj++) {
                        int ni = i + di;
                        int nj = j + dj;
                        if (ni >= 0 && ni < n && nj >= 0 && nj < m) {
                            as += a[ni][nj];
                            br++;
                        }
                    }
                }
                b[i][j] = as / br;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}*/


/*#include <iostream>

using namespace std;

bool paren(int a[], int n, int k) {
    int br=0;
    for(int i=0;i<n;i++) {
        if(a[i]==k) {
            br++;
        }
    }
    return br%2==0;
}

void par(int a[], int n) {
    int min=100000;
    for(int i=0;i<n;i++) {
        if (a[i]<min) {
            if (paren(a, n, a[i])) {
                min=a[i];
            }
        }
    }
    if (min==100000) {
        cout << "Nitu eden element ne se pojavuva paren broj pati!";
    }
    else {
        cout << "Najmaliot element koj se pojavuva paren broj pati e " << min << endl;
    }
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    par(a, n);
    return 0;
}
*/


/*#include <iostream>

using namespace std;

void premesti(int a[], int n) {
    int br=0;
    for (int i = 0; i < n-br; i++) {
        if (a[i]<0) {
            int temp=a[i];
            for (int j = i; j < n-1; j++) {
                a[j]=a[j+1];
            }
            a[n-1]=temp;
            br++;
            i--;
        }
    }
    for(int i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    premesti(a, n);
    return 0;
}*/


/*#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n;
    cin>>n;
    char a[100][100];
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin>>a[i][j];
        }
    }
    char c[100];
    cin.getline(c, 100);
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {

        }
    }
    return 0;
}*/


/*#include <iostream>

using namespace std;

int spoiiij(int i, int j) {
    int tmp=i;
    if (j==0) {
        return tmp*10;
    }
    int a[100], br=0, k=0;
    while (j!=0) {
        a[k]=j%10;
        j=j/10;
        k++;
    }
    for (int p=k-1; p>=0; p--) {
        tmp=tmp*10+a[p];
    }
    return tmp;
}

int main() {
    int n, m;
    cin>>n>>m;
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin>>a[i][j];
        }
    }
    int b[m]={0};
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            int temp=spoiiij(i,j);
            if (temp==a[i][j]) {
                b[j]++;
            }
        }
    }
    for (int i = 0; i < m; i++) {
        cout<<b[i]<<endl;
    }
    return 0;
}
*/


/*#include <iostream>

using namespace std;

void pomestilevo(int a[], int n) {
    int k=(a[0]*(-1));
    if (n-k<=0) {
        for (int i = 0; i < n; i++) {
            a[i]=0;
        }
        return;
    }
    for (int i = 0; i < n-k; i++) {
        a[i]=a[i+k];
    }
    for (int i = n-k; i < n; i++) {
        a[i]=0;
    }
}

void pomestidesno(int a[], int n) {
    int k=a[0];
    if (n-k<=0) {
        for (int i = 0; i < n; i++) {
            a[i]=0;
        }
        return;
    }
    for (int i = n; i >= 0; i--) {
        a[i]=a[i-k];
    }
    for (int i=0; i < k; i++) {
        a[i]=0;
    }
}

int main() {
    int l, br=0;
    cin>>l;
    for (int i = 0; i < l; i++) {
        int n;
        cin>>n;
        int a[n];
        for (int j = 0; j < n; j++) {
            cin>>a[j];
        }
        if (a[0]>0) {
            pomestidesno(a, n);
        }
        else {
            pomestilevo(a, n);
        }
        bool flag=true;
        for (int j = 0; j < n; j++) {
            cout<<a[j]<<" ";
            if (a[j]!=0) {
                flag=false;
            }
        }
        if (flag) {
            br++;
        }
        cout<<endl;
    }
    cout << br << endl;
    return 0;
}
*/


/*#include <iostream>

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
    int b[n]={0};
    for(int i=0;i<n;i++) {
        int k=0;
        for(int j=0;j<m;j++) {
            if ((a[i][j]%2==0 && (i+j)%2==0) || (a[i][j]%2==1 && (i+j)%2==1)) {
                k++;
            }
        }
        b[i]=k;
    }
    for(int i=0;i<n;i++) {
        cout<<i<<": "<<b[i]<<endl;
    }
    return 0;
}
*/


#include <iostream>
#include <cstring>

using namespace std;

int funkcija(char s[], int n) {
    int svrznici=0, br=0;
    for(int i=0; i<n; i++) {
        br++;
        if (!isalpha(s[i]) && s[i]!=' ') {
            br--;
        }
        if (s[i]==' ' || s[i]=='\n') {
            if (br-1<=3 && br>0) {
                svrznici++;
            }
            br=0;
        }
    }
    return svrznici;
}

int main() {
    char s[100], kraj[100];
    int max=0;
    while (cin.getline(s, 100)) {
        if (max<funkcija(s,strlen(s))) {
            max=funkcija(s,strlen(s));
            strcpy(kraj,s);
        }
    }
    cout << max << ": " << kraj << endl;
    return 0;
}
