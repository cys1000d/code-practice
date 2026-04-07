#include <iostream>
#include <cmath>
using namespace std;
typedef long long LL;
LL get_sum(LL n) {
    LL l = 0, r = 2000000;
    LL k = 0;
    while (l <= r) {
        LL mid = l + (r - l) / 2;
        if (mid * (mid + 1) / 2 <= n) {
            k = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    LL total = k * (k + 1) / 2 * (k + 2) / 3; 
    LL remain_cnt = n - k * (k + 1) / 2;
    total += remain_cnt * (remain_cnt + 1) / 2;
    return total;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        LL L, R;
        cin >> L >> R;
        cout << get_sum(R) - get_sum(L - 1) << "\n";
    }
    return 0;
}