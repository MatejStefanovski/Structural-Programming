#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin>>n;
    int temp=n, br=0;
    while (temp>0) {
        br++;
        temp=temp/10;
    }
    int y=pow(10, br-2);
    cout<<n/y<<endl;
    return 0;
}