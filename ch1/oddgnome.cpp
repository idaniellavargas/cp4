#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n;
    cin >> t;
    int king;
    while (t--) {
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)cin >> v[i];
        for (int i = 1; i < n; i++) {
            int last = v[i - 1];
            if (v[i] - 1 != last) {
                king = i + 1;
                break;
            }
        }
        cout << king << endl;
    }
    return 0;
}
