#include <bits/stdc++.h>

using namespace std;

int main() {
    int g, s, c;
    cin >> g >> s >> c;
    g *= 3;
    s *= 2;
    int bp = g + s + c;
    if (bp < 2)cout << "Copper" << endl;
    else if (bp >= 8)cout << "Province or Gold" << endl;
    else if (bp >= 6)cout << "Duchy or Gold" << endl;
    else if (bp >= 5)cout << "Duchy or Silver" << endl;
    else if (bp >= 3)cout << "Estate or Silver" << endl;
    else if (bp >= 2)cout << "Estate or Copper" << endl;
    return 0;
}
