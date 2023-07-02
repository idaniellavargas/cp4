#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    while (n--) {
        string s;
        getline(cin, s);
        stringstream cut(s);

        cut >> s;
        string name = s;
        cut >> s;
        if (stoi(s.substr(0, 4)) >= stoi("2010")) {
            cout << name << " eligible" << endl;
            continue;
        }
        cut >> s;
        if (stoi(s.substr(0, 4)) >= stoi("1991")) {
            cout << name << " eligible" << endl;
            continue;
        }
        cut >> s;
        if (stoi(s) >= stoi("41")) {
            cout << name << " ineligible" << endl;
            continue;
        }
        cout << name << " coach petitions" << endl;
    }

    return 0;
}
