#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, y;
    while ((scanf("%d %d", &x, &y)), (x || y)) {
        if ((x + y) == 13)cout << "Never speak again.";
        else if (x == y)cout << "Undecided.";
        else if (x < y)cout << "Left beehind.";
        else cout << "To the convention.";
        cout << endl;
    }
    return 0;
}
