/*#include <iostream>

using namespace std;

int funkcija(int n) {
    if (n<=0) {
        return 0;
    }
    if (n%2==0) {
        return n+funkcija(n-1);
    }
    else {
        return funkcija(n-1);
    }
}

int main() {
    int n;
    cin>>n;
    cout << funkcija(n);
    return 0;
}*/


/*#include <iostream>

using namespace std;

int funkcija(int n, int k) {
    if (n<=0) {
        return 0;
    }
    else {
        if (n%10>k) {
            return 1+10*funkcija(n/10, k);
        }
        else {
            return 0+10*funkcija(n/10, k);
        }
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    cout << funkcija(n, k) << endl;
    return 0;
}
*/


/*#include <iostream>

using namespace std;

void funkcija(char c, bool backwards) {
    if (c=='a') {
        cout << "a";
    }
    else {
        if (backwards) {
            funkcija(c-1, backwards);
            cout << c;
        }
        else {
            cout << c;
            funkcija(--c, backwards);
        }
    }
}

int main() {
    char c;
    bool backwards;
    cin >> c >> backwards;
    funkcija(c, backwards);
    return 0;
}
*/



/*#include <iostream>

using namespace std;

void funkcija2(int n) {
    if (n==0) {
        return;
    }
    funkcija2(n-1);
    cout << n << " ";
}

void funkcija(int n) {
    if (n==0) {
        return;
    }
    funkcija2(n);
    cout << endl;
    funkcija(n-1);
}

int main() {
    int n;
    cin>>n;
    funkcija(n);
    return 0;
}
*/


/*#include <iostream>

using namespace std;

bool cikcak(int n, int prev, int curr, bool pogolem) {
    if (n==0) {
        return true;
    }
    else {
        int next=n%10;
        if ((pogolem && curr<=next) || (!pogolem && curr>=next)) {
            return false;
        }
        return cikcak(n/10,curr,next,!pogolem);
    }
}

int main() {
    int n;
    cin>>n;
    int curr=n%10;
    int prev=n/10%10;
    bool pogolem=prev<curr;
    if (cikcak(n/10, prev, curr, pogolem)) {
        cout<<1;
    }
    else {
        cout<<0;
    }
    return 0;
}
*/


#include <iostream>

using namespace std;

bool cikcak(int n, int prev, int curr, bool pogolem) {
    if (n==0) {
        return true;
    }
    else {
        int next=n%10;
        if ((pogolem && curr<=next) || (!pogolem && curr>=next)) {
            return false;
        }
        return cikcak(n/10,curr,next,!pogolem);
    }
}

int main() {
    int n;
    cin>>n;
    int curr=n%10;
    int prev=n/10%10;
    bool pogolem=prev<curr;
    if (cikcak(n/10, prev, curr, pogolem)) {
        cout<<1;
    }
    else {
        cout<<0;
    }
    return 0;
}
