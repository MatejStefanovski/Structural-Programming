#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    int br=0;
    for(int i=0;i<n-br;i++) {
        for (int j=i+1;j<n-br;j++) {
            if (a[j]==a[i]) {
                for (int k=j+1;k<n-br-1;k++) {
                    a[k-1]=a[k];
                }
                br++;
                j--;
            }
        }
    }
    for(int i=0;i<n-br;i++) {
        cout << a[i] << " ";
    }
    return 0;
}