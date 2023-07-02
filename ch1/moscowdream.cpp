#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, n;
    cin >> a >> b >> c >> n;
    int sum = a + b + c;
    cout << ((!a || !b || !c || sum < n || n < 3) ? "NO" : "YES") << "\n";
    return 0;
}
