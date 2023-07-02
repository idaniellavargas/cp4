#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    while (n--) {
        cin >> s;
        if (s == "P=NP")
            cout << "skipped" << std::endl;
        else {
            auto i = s.find("+");
            int a = stoi(s.substr(0, i));
            int b = stoi(s.substr(i + 1, s.length()));
            cout << a + b << std::endl;
        }
    }
    return 0;
}
