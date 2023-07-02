#include <bits/stdc++.h>

using namespace std;

int main() {
    int l, r;
    cin >> l >> r;
    if (!l && !r)cout << "Not a moose";
    else if (l == r) cout << "Even " << l * 2 << endl;
    else cout << "Odd " << max(l, r) * 2 << endl;
    return 0;
}
