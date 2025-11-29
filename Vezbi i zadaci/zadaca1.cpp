/*#include <bits/stdc++.h>

using namespace std;

string f(string s, string s2, int n)
{
    string s3="";
    int length=s.length();
    for (int i = 0; i < n; i++) {
        s3+=s[i];
    }
    for (int i = 0; i < s2.size(); i++) {
        s3+=s2[i];
    }
    s3+=" ";
    for (int i=n; i<length; i++) {
        s3+=s[i];
    }
    return s3;
}


int main()
{
    string s;
    getline(cin, s);
    int n;
    cin >> n;
    string s2;
    cin >> s2;
    cout << f(s, s2, n);
    return 0;
}*/

#include <bits/stdc++.h>

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
    int b[n];
    for (int i = 0; i < n; i++) {
        b[i]=999;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[j][i]<b[i]) {
                b[i] = a[j][i];
            }
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    return 0;
}