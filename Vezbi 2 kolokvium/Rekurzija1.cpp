#include <iostream>

using namespace std;

void countup(int n, int br) {
    if (br==0) {
        cout<<n;
        return;
    }
    cout<<n-br<<" ";
    countup(n,br-1);
}

int main() {
    int n;
    cin>>n;
    int br=n;
    countup(n, br);
    return 0;
}