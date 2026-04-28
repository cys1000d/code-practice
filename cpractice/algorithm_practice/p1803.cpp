#include<iostream>
#include<algorithm>
using namespace std;
int n,ans=0,finish =0;
struct contest
{
    int l,r;
}con[1000005];
bool cmp(contest &c1,contest &c2)
{
    return c1.r<c2.r;
}
int main()
{
    cin>>n;
    for(int i = 1;i<=n;i++)
    {
        cin>>con[i].l>>con[i].r;
    }
    sort(con+1,con+1+n,cmp);
    for(int i = 1;i<=n;i++)
    {
        if(finish<=con[i].l)
        {
            ans++;
            finish = con[i].r;
        }
    }
    cout<<ans;
    return 0;
}