#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
const int N = 1e4 + 10;
const int INF = 0x3f3f3f3f;
int arr1[N], arr2[N];
int main() {
    ll n, ans = 0;
    if (!(cin >> n)) return 0;
    fill(arr1, arr1 + N, INF);
    fill(arr2, arr2 + N, INF);
    for (int i = 0; i < n; i++) cin >> arr1[i];
    sort(arr1, arr1 + n);
    int index1 = 0;
    int head2 = 0;
    int tail2 = 0;
    for (int k = 0; k < n - 1; k++) {
        ll tempnum = 0;
        for (int step = 0; step < 2; step++) {
            if (arr1[index1] <= arr2[head2]) {
                tempnum += arr1[index1];
                index1++;
            } else {
                tempnum += arr2[head2];
                head2++;
            }
        }
        arr2[tail2++] = tempnum; 
        ans += tempnum;
    }
    cout << ans << endl;
    return 0;
}