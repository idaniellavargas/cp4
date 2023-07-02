#include <bits/stdc++.h>

using namespace std;

int main() {
    double n, a, b;
    cin >> n;
    double sum = 0;
    while (n--) {
        cin >> a >> b;
        sum += (a * b);
    }
    //cout << fixed << setprecision(3) << sum;
    printf("%.3f\n", sum);
    return 0;
}
