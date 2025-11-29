/*#include <bits/stdc++.h>

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
    int br=0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j]%(i+1)==0) {
                if (a[i][j]%(j+1)==0) {
                    if (a[i][j]>br)
                        br=a[i][j];
                }
            }
        }
    }
    cout << br << endl;
    return 0;
}*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    string s, zbor;
    int br=1;
    getline(cin, s);
    for (int i=0; i<s.size(); i++) {
        if (s[i]==' ') {
            br++;
        }
        zbor="";
        if (br==3) {
            br=0;
            for (int j=i+1; j<s.size() && s[j] != ' '; j++) {
                zbor+=s[j];
            }
        }

        if (zbor!="") {
            if (zbor[0]=='a') {
                zbor[0]='A';
            }
            else {
                for (int j=0; j<zbor.size(); j++) {
                    if (zbor[j]=='a') {
                        zbor[j]=zbor[j-1];
                        zbor[j-1]='a';
                    }
                }
            }
            cout << zbor << endl;
            zbor="";
        }
    }
    return 0;
}