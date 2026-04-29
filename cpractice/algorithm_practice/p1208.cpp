#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int zong,n,ans = 0;
struct nailong
{
    int price;
    int productivity;
};
bool cmp(nailong n1,nailong n2)
{
    return n1.price<n2.price;
}
int main()
{
    cin>>zong>>n;
    vector<nailong> v(n);
    for(int i = 0;i<n;i++)
    {
        cin>>v[i].price>>v[i].productivity;
    }
    sort(v.begin(),v.end(),cmp);
    for(int i = 0;i<n;i++)
    {
        if(zong>v[i].productivity)
        {
            zong-=v[i].productivity;
            ans+=v[i].price*v[i].productivity;
        }
        else
        {
            ans+=zong*v[i].price;
            zong = 0;
        }
        if(zong == 0) break;
    }
    cout<<ans;
    return 0;
}