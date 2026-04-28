#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
struct apple
{
    int heigh;
    int courage;
};
int n,s,a,b,ans = 0;
bool cmp(apple a1,apple a2)
{
    if(a1.courage!=a2.courage)
    {
        return a1.courage<a2.courage;
    }
    else return a1.heigh<a2.heigh;
}
int main()
{
    cin>>n>>s>>a>>b;
    vector<apple> v(n);
    a+=b;
    for(int i = 0;i<n;i++)
    {
        cin>>v[i].heigh>>v[i].courage;
    }
    sort(v.begin(),v.end(),cmp);
    for(int i =0;i<n;i++)
    {
        if(s<=0)
        {
            break;
        }
        if(a>=v[i].heigh)
        {
            if((s-v[i].courage)>=0)
            {
                s-=v[i].courage;
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}