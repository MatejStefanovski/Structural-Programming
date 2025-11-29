#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, br=0, najgolemi=0;
    while (cin >> n) {
        int temp=0;
        while (n!=0) {
            if (n%10>temp) {
                temp=n%10;
            }
            n/=10;
        }
        najgolemi+=temp;
        cout << temp << " ";
        br++;
    }
    cout << endl << (float)najgolemi/br << endl;
    return 0;
}


/*
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, cnt=0;
    cin>>n;
    for (int i=n-1; i>=0; i--) {
        int temp=i, sumacif=0, palndrom=0;
        while(temp!=0) {
            sumacif+=temp%10;
            palndrom=palndrom*10+temp%10;
            temp/=10;
        }
        if (palndrom==i && i%sumacif==0) {
            cout << i << " ";
            cnt++;
        }
        if (cnt>=10) {
            break;
        }
    }
    return 0;
}
*/
/*#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, k, br=0, b=0;
    cin >> x >> k;
    while (x>0) {
        if(x%10<k) {
            b++;
        }
        x/=10;
        br++;
    }
    cout << b << " " << br << endl;
    double t =((float)b / br) * 100;
    cout << t << "%";
    return 0;
}*/

/*#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, c, p;
    cin >> x >> c >> p;
    int j=10;
    while(j>0) {
        x++;
        int temp=x;
        int br=0;
        while(temp>0) {
            if (temp%10==c) {
                br++;
            }
            temp/=10;
        }
        if (br==p) {
            j--;
            cout << x << " ";
        }
    }
    return 0;
}
*/
/*#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, bin=0, br=0;
    while (cin >> n) {
        bin=bin*10+n;
        br++;
    }
    int dek=0, j=0;
    for (int i=br-1; i>=0; i--) {
        dek+=(bin%10)*pow(2, j);
        bin/=10;
        j++;
    }
    cout << dek << endl;
    return 0;
}*/

/*#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, br=0;
    cin >> a >> b;
    while (a!=0) {
        if (a%10==b) {
            br++;
        }
        a/=10;
    }
    cout << br;
    return 0;
}*/