#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    while (cin >> s) {
        if (s == "END")break;
        string len = to_string(s.size());
        int cont = 1;
        while (len != s) {
            s = to_string(s.size());
            len = to_string(s.size());
            cont++;
        }
        cout << cont << endl;
    }

    return 0;
}
