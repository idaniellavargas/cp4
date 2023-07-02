#include <bits/stdc++.h>

using namespace std;

int main() {
   
    int x, y;
    cin >> x >> y;
    if (!x&&y==1)cout << "ALL GOOD" << endl;
    else if (y == 1)cout << "IMPOSSIBLE" << endl;
    else cout << fixed << setprecision(6) << x * -1.0 / (y - 1) << endl;

    return 0;
}
