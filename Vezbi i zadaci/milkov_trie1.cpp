#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstring>
#include <locale>

using namespace std;

struct Node {
    int cnt = 0;
    Node* next[32];
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

    void insert(wstring s) {
        Node* curr = root;
        for (wchar_t& c : s) {
            int idx = c - L'а';
            if (curr->next[idx] == NULL)
            {
                curr->next[idx] = new Node();
            }
            curr->cnt++;
            curr = curr->next[idx];
        }
        curr->isWord = true;
        curr->cnt++;
    }

    bool find(wstring& s) {
        Node* curr = root;
        for (wchar_t& c : s) {
            int idx = c - L'а';
            if (curr->next[idx] == NULL) {
                return false;
            }
            curr = curr->next[idx];
        }
        return curr->isWord;
    }

    void print(Node* curr, wstring s) {
        if (curr->isWord) {
            wcout << s << L" ";
        }
        for (int i = 0; i < 32; i++) {
            if (curr->next[i] != NULL) {
                print(curr->next[i], s + wchar_t(L'а' + i));
            }
        }
    }

    void printPref(wstring pref) {
        Node* curr = root;
        for (wchar_t& c : pref) {
            int idx = c - L'а';
            if (curr->next[idx] == NULL) {
                wcout << L"Nema zborovi sto pocnuvaat so prefiksot: " << pref << endl;
                return;
            }
            curr = curr->next[idx];
        }
        print(curr, pref);
    }
};

int main() {
    locale::global(locale(""));

    Trie t;

    wifstream file(L"C:/Users/User/Desktop/tekst1.txt");
    file.imbue(locale(""));

    if (!file) {
        wcerr << L"Ne mozam da go otvoram fajlot tekst.txt" << endl;
        return 1;
    }

    wstring zbor;
    while (file >> zbor) {
        t.insert(zbor);
    }
    file.close();

    wcout << L"Vnesi bukva ili prefiks:" << endl;
    wstring prefiks;
    while (true) {
        wcout << L"> ";
        wcin >> prefiks;
        if (prefiks == L"!")
            break;
        t.printPref(prefiks);
        wcout << endl;
    }
    return 0;
}
