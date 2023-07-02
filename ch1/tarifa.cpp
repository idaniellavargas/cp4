#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, n, p;
    int available = 0;
    int res = 0;
    cin >> x >> n;

    for (int i = 0; i < n; i++) {
        cin >> p;
        available = x + res;
        res = available - p;
    }

    cout << res + x << endl;
    return 0;
}
