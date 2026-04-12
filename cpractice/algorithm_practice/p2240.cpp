#include<iostream>
#include<algorithm>
#include<vector>
#include<iomanip>
using namespace std;
int n;
double t; 
struct gold
{
    double kg, price;
    double kk;
};
bool cmp(gold &g1, gold &g2)
{
    return g1.kk > g2.kk;
}
int main()
{
    if(!(cin >> n >> t)) return 0;
    vector<gold> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i].kg >> v[i].price;
        v[i].kk = v[i].price / v[i].kg;
    }
    sort(v.begin(), v.end(), cmp);
    double ans = 0;
    int l = 0;
    while (l < n)
    {
        if(t >= v[l].kg)
        {
            ans += v[l].price;
            t -= v[l].kg;
        }
        else
        {
            ans += t * v[l].kk;
            t = 0;
        }
        if(t <= 0)
        {
            break;
        }
        l++;
    }
    printf("%.2f\n", ans); 
    return 0;
}