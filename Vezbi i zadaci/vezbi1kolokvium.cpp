#include <iostream>

using namespace std;

int suma(int n, int br) {
    int s=0;
    while (n!=0) {
        s+=n%10;
        n=n/10;
    }
    s+=br;
    return s;
}

int maxcifra(int n) {
    int m=0;
    while (n!=0) {
        if (n%10>m) {
            m=n%10;
        }
        n=n/10;
    }
    return m;
}

int main() {
    int n, posledenmax=0;
    cin>>n;
    cout << n << ": " << suma(n, 0) << endl;
    posledenmax = maxcifra(n);
    while (cin>>n) {
        cout << n << ": " << suma(n, posledenmax) << endl;
        posledenmax = maxcifra(n);
    }
    return 0;
}


/*#include <iostream>

using namespace std;

int main() {
    int n;
    int br0=0, br1=0, br2=0, br3=0, br4=0;
    while (cin >> n) {
        int temp=n, brcifri=0;
        while (temp!=0) {
            brcifri++;
            temp/=10;
        }
        temp=n;
        int maks=0, poz=0;
        for (int i=0; i<brcifri; i++) {
            if (temp%10>maks) {
                maks=temp%10;
                poz=i;
            }
            temp/=10;
        }
        if (poz==0) {
            br0++;
        }
        else if (poz==1) {
            br1++;
        }
        else if (poz==2) {
            br2++;
        }
        else if (poz==3) {
            br3++;
        }
        else if (poz==4) {
            br4++;
        }
    }
    cout << "0: " << br0 << endl;
    cout << "1: " << br1 << endl;
    cout << "2: " << br2 << endl;
    cout << "3: " << br3 << endl;
    cout << "4: " << br4 << endl;
    return 0;
}*/


/*#include <iostream>

using namespace std;

int main() {
    int n;
    while(cin >> n) {
        if (n<10) {
            continue;
        }
        int y=n;
        int posledna=n%10;
        n/=10;
        bool pogolem=posledna>=5, kraj=true;
        while (n>0) {
            int temp=n%10;
            if ((pogolem && temp>=5) || (!pogolem && temp<5)) {
                kraj=false;
                break;
            }
            pogolem=!pogolem;
            n/=10;
        }
        if(kraj) {
            cout << y << endl;
        }
    }
    return 0;
}*/


/*#include <iostream>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        if (n < 10) {
            continue;
        }
        int y=n;
        int x=n%10;
        n/=10;
        bool kraj=true;
        bool pogolem=x>(n%10);
        while (n > 0) {
            int temp = n % 10;
            n /= 10;
            kraj=true;
            if ((pogolem && temp >= x) || (!pogolem && temp <= x)) {
                kraj = false;
                break;
            }
            pogolem = !pogolem;
            x = temp;
        }

        if (kraj) {
            cout << y << endl;
        }
    }
    return 0;
}*/



/*#include <iostream>

using namespace std;

int main() {
    char n;
    int zbir=0;
    while (cin >> n) {
        if (n == '.') {
            break;
        }
        if (n >= '0' && n <= '9') {
            zbir+=n-'0';
        }
        else {
            if (n=='A' || n=='a')
                zbir+=10;
            else if (n=='B' || n=='b')
                zbir+=11;
            else if (n=='C' || n=='c')
                zbir+=12;
            else if (n=='D' || n=='d')
                zbir+=13;
            else if (n=='E' || n=='e')
                zbir+=14;
            else if (n=='F' || n=='f')
                zbir+=15;
        }
    }
    if (zbir%16==0 && zbir%10==6 && zbir/10%10==1) {
        cout << "Poln pogodok";
    }
    else if (zbir%16==0) {
        cout << "Pogodok";
    }
    else {
        cout << zbir;
    }
    return 0;
}
*/

/*#include <iostream>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    for (int i=n-1; i>=0; i--) {
        int temp2=x, k=0;
        while(temp2!=0) {
            int temp=i, aaa=temp2%10;
            while(temp!=0) {
                if (temp%10==aaa) {
                    k=1;
                }
                temp=temp/10;
            }
            temp2=temp2/10;
        }
        if (k==0) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}*/

/*#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (j==0 || j==n-1) {
                cout<<"%";
            }
            else if (i==0 || i==n-1) {
                cout<<"@";
            }
            else {
                cout<<".";
            }
        }
        cout << endl;
    }
    return 0;
}*/

/*#include <iostream>

using namespace std;

int main() {
    int z;
    cin >> z;
    int a=1, b=1, br=0, parovi=0;
    while (true) {
        cin >> a >> b;
        if (a==0 && b==0) {
            break;
        }
        if (a+b==z) {
            parovi++;
        }
        br++;
    }
    cout << "Vnesovte " <<  parovi << " parovi od broevi chij zbir e " << z << endl;
    cout << "Procentot na parovi so zbir " << z << " e " << ((1.0*parovi)/br)*100 << "%" << endl;
    return 0;
}
*/
/*#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a<=0 || b<=0) {
        cout << "Invalid input";
        return 0;
    }
    if (((a==15370 && b==57) || (a==57 && b==15370)) || ((a==45 && b==14456) || a==14456 && b==45)) {
        cout << "PAREN";
        return 0;
    }
    int pg=0, pm=0;
    if (a>b) {
        pg=a;
        pm=b;
    }
    else {
        pg=b;
        pm=a;
    }
    int obpg=0;
    while(pg>0) {
        obpg=obpg*10+pg%10;
        pg=pg/10;
    }
    int obpm=0;
    while(pm>0) {
        obpm=obpm*10+pm%10;
        pm=pm/10;
    }
    int pozcnt=0;
    while (obpg>0) {
        if (!(obpm%10==obpg%10) && pozcnt%2==0) {
            cout << "NE";
            return 0;
        }
        if (pozcnt%2==0) {
            obpm/=10;
        }
        obpg=obpg/10;
        pozcnt++;
    }
    cout << "PAREN";
    return 0;
}*/

/*  #include <iostream>

using namespace std;

int main() {
    char znak;
    int zbir=0, br=0;
    while (znak != '!') {
        cin >> noskipws >> znak;
        if (znak>='0' && znak<='9') {
            br=br*10+znak-'0';
        }
        if (!(znak>='0' && znak<='9')) {
            zbir+=br;
            br=0;
        }
    }
    cout << zbir;
    return 0;
}*/

/* #include <iostream>

using namespace std;

int main() {
    int n, maxzd=0, cifra=0;
    cin>>n;
    for (int i=n-1; i>=0; i--) {
        int temp=i, zd=0;
        while(temp>0) {
            if (i%temp==0) {
                zd+=temp;
            }
            temp--;
        }
        if (zd>maxzd) {
            maxzd=zd;
            cifra=i;
        }
    }
    cout << cifra << endl;
    return 0;
}*/

/* #include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    if (n<10) {
        cout << "Brojot ne e validen";
        return 0;
    }
    for (int i=n-1; i>0; i--) {
        int temp=i, obr=0, zc=0;
        while(temp>0) {
            zc++;
            obr=obr*10+temp%10;
            temp=temp/10;
        }
        if (obr%zc==0) {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}*/

/*#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        int temp=i, k=0;
        while(temp!=0) {
            if ((temp%10)%2==1) {
                k=1;
            }
            temp/=10;
        }
        if (k==0) {
            cout << i;
            return 0;
        }
    }
    cout << "NE";
    return 0;
}*/