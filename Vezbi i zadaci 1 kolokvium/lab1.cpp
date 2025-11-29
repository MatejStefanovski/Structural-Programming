/*  //Zadaca 1
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int zbir=0;
    zbir+=n%10;
    int nn=n;
    zbir+=n/10000;
    n/=10;
    int nov=n%1000;
    cout << nov << endl;
    cout << zbir << endl;
    return 0;
}*/

/*  //Zadaca 2
#include <iostream>

using namespace std;

int main() {
    int br1, br2;
    cin >> br1 >> br2;
    int minuti;
    float suma=0;
    cin >> minuti;
    while (minuti>0) {
        if (minuti>30) {
            suma+=2;
            minuti--;
        }
        else {
            suma+=3;
            minuti--;
        }
    }
    br1/=1000000;
    br2/=1000000;
    if ((br1>=71 && br1<=73 && br2>=71 && br2<=73) || (br1>=74 && br1<=76 && br2>=74 && br2<=76)) {
        suma-=suma*0.3;
    }
    cout << suma << endl;
    return 0;
}
*/

//Zadaca 3
#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int minuti=0;
    if (n*5<=120) {
        minuti+=n*5;
    }
    else if (n*5>120 && n*5<=180) {
        minuti+=n*5;
        minuti+=30;
    }
    else if (n*5>180 && n*5<=300) {
        minuti+=n*5;
        minuti+=60;
    }
    else {
        cout << "Studentot ne e voopsto usluzen" << endl;
        return 0;
    }
    minuti-=5;
    int saati=0;
    while (minuti>=60) {
        minuti-=60;
        saati++;
    }
    cout << "Hours: " << saati << ", " << "minutes: " << minuti << endl;
    return 0;
}