#include <iostream>

using namespace std;

int main() {
    int n, m, br=0;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i < n-1; i++) {
        for (int j = 1; j < m-1; j++) {
            if (a[i][j]==1) {
                if (a[i+1][j]==1 && a[i-1][j]==1 && a[i][j-1]==1 && a[i][j+1]==1) {
                    br++;
                    a[i+1][j]=0;
                    a[i][j+1]=0;
                    a[i-1][j]=0;
                    a[i][j-1]=0;
                }
            }
        }
    }
    cout << br;
    return 0;
}