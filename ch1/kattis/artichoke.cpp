#include <bits/stdc++.h>

using namespace std;

int main() {
    long double p, a, b, c, d, n;
    cin >> p >> a >> b >> c >> d >> n;

    vector<long double> v(n);
    long double maxdiff = 0;
    long double highest = numeric_limits<long double>::min();
    long double lowest = numeric_limits<long double>::max();

    for (int i = 0; i < n; i++) {
        v[i] = p * (sin(a * (i + 1) + b) + cos(c * (i + 1) + d) + 2);

        if (v[i] > highest) {
            highest = v[i];
            lowest = v[i];
        } else if (v[i] < lowest) {
            lowest = v[i];
        }

        maxdiff = max(maxdiff, highest - lowest);
    }

    cout << fixed << setprecision(10) << maxdiff << endl;
    return 0;
}
