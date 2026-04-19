#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    if (!(cin >> n)) return;
    vector<long long> a(n);
    long long sum = 0;
    long long max_val = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        if (a[i] > max_val) max_val = a[i];
    }
    if (sum % 5 == 0 && max_val <= sum / 5) {
        cout << "T" << endl;
    } else {
        cout << "F" << endl;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}