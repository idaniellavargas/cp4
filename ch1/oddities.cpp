#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << n << " " << ((n % 2 == 0) ? "is even" : "is odd") << endl;
    }
}
