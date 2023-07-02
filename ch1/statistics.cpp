#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int i = 0;
    while (cin >> n) {
        i++;
        int maxi = INT_MIN;
        int mini = INT_MAX;
        int range = 0;
        int num;
        for (int i = 0; i < n; i++) {
            cin >> num;
            maxi = max(maxi, num);
            mini = min(mini, num);
        }
        range = maxi - mini;
        cout << "Case " << i << ": " << mini << " " << maxi << " " << range << endl;
    }
    return 0;
}
