// pole position

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++)cin >> v[i].first >> v[i].second;

        vector<int> start(n, 0);
        bool ok = true;
        for (int i = 0; i < n; i++) {
            if (!v[i].second)start[i] = v[i].first;
            else if (v[i].second < 0) {
                v[i].second = abs(v[i].second);
                if (i - v[i].second >= 0 and i - v[i].second < n)
                    if (!start[i - v[i].second])start[i - v[i].second] = v[i].first;
                    else ok = false;
                else ok = false;
            } else if (v[i].second > 0) {
                if (i + v[i].second >= 0 and i + v[i].second < n)
                    if (!start[i + v[i].second])start[i + v[i].second] = v[i].first;
                    else ok = false;
                else ok = false;
            }

        }
        for (auto i: start)if (!i)ok = false;
        string ans = "";
        if (ok) {
            for (auto i: start)ans += to_string(i) + " ";
            ans.pop_back();
            cout << ans << endl;
        } else cout << -1 << endl;
    }
    return 0;
}
