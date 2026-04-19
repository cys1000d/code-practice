#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        int x = a;
        int y = a ^ b;
        mp[x]++;
        if (x != y) {
            mp[y]++;
        }
    }
    int max_cnt = 0;
    int ans = -1;
    for (auto const& [num, count] : mp)
    {
        if (count > max_cnt) {
            max_cnt = count;
            ans = num;
        }
        else if (count == max_cnt)
        {
            if (num < ans) ans = num;
        }
    }

    cout << ans << endl;

    return 0;
}