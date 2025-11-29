/*#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

void transform(char* text) {
    for (int i = 0; i < strlen(text); i++) {
        if (text[i]=='a' || text[i]=='e' || text[i]=='i' || text[i]=='o' || text[i]=='u' || text[i]=='A' || text[i]=='E' || text[i]=='I' || text[i]=='O' || text[i]=='U') {
            text[i] = toupper(text[i]);
        }
        else {
            text[i] = tolower(text[i]);
        }
    }
    cout << text << endl;
}

int main() {
    char a[100];
    cin.getline(a, 100);
    transform(a);
    return 0;
}
*/


/*#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char a[100], c;
    int pocetok, kraj;
    bool flag=false;
    cin.getline(a, 100);
    cin >> c;
    for (int i = 0; i < strlen(a); i++) {
        if (!flag && tolower(a[i]) == tolower(c)) {
            pocetok = i;
            flag = true;
        }
        if (tolower(a[i]) == tolower(c)) {
            kraj = i;
        }
    }
    for (int i = pocetok; i <= kraj; i++) {
        cout << a[i];
    }
    return 0;
}*/


#include <iostream>
#include <cstring>

using namespace std;

bool palindrom(char a[]) {
    char temp[100];
    for (int i = 0; i < strlen(a); i++) {
        temp[i] = tolower(a[strlen(a) - 1 - i]);
        a[i]=tolower(a[i]);
    }
    temp[strlen(a)] = '\0';
    if (strcmp(temp, a)==0) {
        return true;
    }
    return false;
}

int funkcija(char a[], int n) {
    int br=0, prethoden=0;
    for (int i = 0; i <= n; i++) {
        if (a[i]==' ' || a[i] == '\0') {
            char niza[100];
            int y=0;
            for (int j=prethoden; j<i; j++) {
                niza[y]=a[j];
                y++;
            }
            niza[y]='\0';
            prethoden=i+1;
            if (palindrom(niza)) {
                br++;
            }
        }
    }
    return br;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();
    char a[100];
    for (int i = 0; i < n; i++) {
        cin.getline(a, 100);
        cout << a << ": " << funkcija(a, strlen(a)) << endl;
    }
    return 0;
}
