#include <iostream>
#include <vector>
#include <string>
#include <cstring>

using namespace std;

struct Node {
    int cnt = 0;
    Node* next[26];
    bool isWord;
    Node() {
        cnt = 0;
        memset(next, NULL, sizeof(next));
        isWord = false;
    }
};

struct Trie {
    Node* root;
    Trie() {
        root = new Node();
    }
    void insert(string s) {
        Node* curr = root;
        for (char& c : s) {
            curr->cnt++;
            if (curr->next[c - 'a'] == NULL) {
                curr->next[c - 'a'] = new Node();
            }
            curr = curr->next[c - 'a'];
        }
        curr->isWord = true;
        curr->cnt++;
    }
    bool find(string& s) {
        Node* curr = root;
        for (char& c : s) {
            if (curr->next[c - 'a'] == NULL) {
                return false;
            }
            curr = curr->next[c - 'a'];
        }
        return curr->isWord;
    }
    void print(Node* curr, string s) {
        if (curr->isWord) {
            cout << s << " ";
        }
        for (int i = 0; i < 26; i++) {
            if (curr->next[i] != NULL) {
                print(curr->next[i], s + char('a' + i));
            }
        }
    }
    void printPref(string pref) {
        Node* curr = root;
        for (char& c : pref) {
            if (curr->next[c - 'a'] == NULL) {
                cout << "Nema zborivi sto pocnuvaat so prefiksot: " << pref << endl;
                return;
            }
            curr = curr->next[c - 'a'];
        }
        print(curr, pref);
    }
};

int main() {
    Trie t;
    vector<string> zborovi = {
        "agagaa", "broj",  "bukva",  "blabla", "milkov", "milk", "zadaca", "zzc"
    };

    for (string zbor : zborovi) {
        t.insert(zbor);
    }

    cout << "Vnesi bukva ili prefiks:" << endl;
    string prefiks;
    while (true) {
        cout << "> ";
        cin >> prefiks;
        if (prefiks == "!")
            break;
        t.printPref(prefiks);
        cout << endl;
    }
    return 0;
}
