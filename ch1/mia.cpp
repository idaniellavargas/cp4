#include <bits/stdc++.h>

using namespace std;

int get_score(string a, string b) {
    if (a == "1" && b == "2" || a == "2" && b == "1")return 10000;
    else if (a == b)return stoi((a + b)) * 100;
    else if (stoi(a) > stoi(b))return stoi(a + b);
    else return stoi(b + a);
}

int main() {
    string s1, s2, r1, r2;
    int score1 = 0, score2 = 0;
    while (cin >> s1, stoi(s1)) {
        cin >> s2 >> r1 >> r2;
        score1 = get_score(s1, s2);
        score2 = get_score(r1, r2);
        if (score1 == score2)cout << "Tie." << endl;
        else if (score1 > score2)cout << "Player 1 wins." << endl;
        else cout << "Player 2 wins." << endl;
    }

    return 0;
}
