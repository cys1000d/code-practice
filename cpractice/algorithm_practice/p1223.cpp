#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;
int n;
struct person
{
    int id;
    int spend_time;
};
bool cmp(person &p1,person &p2)
{
    return p1.spend_time<p2.spend_time;
}
int main()
{
    cin>>n;
    vector<person> v(n);
    for(int i = 0;i<n;i++)
    {
        v[i].id = i+1;
        cin>>v[i].spend_time;
    }
    sort(v.begin(),v.end(),cmp);
    double ans = 0;
    for(int i = 0;i<n;i++)
    {
        ans+=v[i].spend_time*(n-i-1);
        cout<<v[i].id;
        if(i!=n-1) cout<<" ";
    }
    cout<<endl;
    cout<<fixed<<setprecision(2)<<ans/n<<endl;
    return 0;
}