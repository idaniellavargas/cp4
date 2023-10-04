#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        vector<int> v(n);
        set<int> s;
        for (int i = 0; i < n; i++)cin >> v[i];
        for (int i = 1; i < n; i++) {
            int val = v[i - 1] - v[i];
            s.insert(abs(val));
        }
        n--;
        bool ok = true;
        auto it = s.begin();
        for (int i = 1; i <= n; i++) {
            if ((*it) != i)ok = false;
            it++;
        }
        if (ok)cout << "Jolly" << endl;
        else cout << "Not Jolly" << endl;
    }
    return 0;
}
