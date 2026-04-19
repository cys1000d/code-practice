#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;
struct person
{
    int id,times;
};
bool cmp(person p1,person p2)
{
    return p1.times<p2.times;
}
int n;
int main()
{
    cin>>n;
    vector<person> v(n);
    for(int i =0;i<n;i++)
    {
        v[i].id = i+1;
        cin>>v[i].times;
    }
    sort(v.begin(),v.end(),cmp);
    int gen = 0;
    for(int i = 0;i<n;i++)
    {
        cout<<v[i].id;
        if(i!=n-1) cout<<" ";
        gen+=v[i].times;
    }
    cout<<endl<<setprecision(2)<<gen/n;
    return 0;
}