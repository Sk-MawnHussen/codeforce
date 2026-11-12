#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    long long a, b;
    cin >> a >> b;

    long long k = min(a - b, b);

    if (k >= 1) {
        cout << k << "\n";
    } else {
        cout << -1 << "\n";
    }
}

int main() {


    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

