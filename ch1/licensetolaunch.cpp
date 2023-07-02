#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    int min = INT_MAX;
    int index = 0;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] < min) {
            index = i;
            min = v[i];
        }
    }
    cout << index << endl;

    return 0;
}
