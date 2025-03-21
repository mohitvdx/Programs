// Mohit Verma "mohitvdx"
// problem: Find the next valid misjudged time

#include <iostream>

using namespace std;

bool is_in_24_hours(int h, int m) {
    return h >= 0 && h <= 23 && m >= 0 && m <= 59;
}

// Function to check if the misjudged time is valid
bool misjudged(int h, int m) {
    int a = h / 10;
    int b = h % 10;
    int c = m / 10;
    int d = m % 10;
    int ac = a * 10 + c;
    int bd = b * 10 + d;
    return is_in_24_hours(ac, bd);
}

void solve() {
    int h, m;
    cin >> h >> m;

    while (!misjudged(h, m)) {
        m++;
        if (m == 60) {
            h++;
            m = 0;
        }
        if (h == 24) {
            h = 0;
        }
    }
    cout << h << " " << m << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); // fast IO

    solve();

    return 0;
}