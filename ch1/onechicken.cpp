#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int res = m - n;
    if (res == 1)cout << "Dr. Chaz will have 1 piece of chicken left over!" << "\n";
    else if (res == -1)cout << "Dr. Chaz needs 1 more piece of chicken!" << "\n";
    else if (res < 0)cout << "Dr. Chaz needs " << abs(res) << " more pieces of chicken!" << "\n";
    else cout << "Dr. Chaz will have " << res << " pieces of chicken left over!" << "\n";
    return 0;
}
