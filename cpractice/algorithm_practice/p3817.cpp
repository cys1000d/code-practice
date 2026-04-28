#include<iostream>
using namespace std;
typedef long long ll;
ll n,x;
const int N = 2e5+10;
ll arr[N];
ll ans;
int main()
{
    cin>>n>>x;
    ll temp;
    for(int i = 0;i<n;i++) cin>>arr[i];
    for(int i = 0;i<n-1;i++)
    {
        ll num1,cha;
        temp = arr[i]+arr[i+1];
        if(temp>x)
        {
            cha = temp-x;
            if(arr[i+1]<=cha)
            {
                num1 = cha-arr[i+1];
                ans+=cha;
                arr[i+1] = 0;
                arr[i]-=num1;
            }
            else
            {
                ans+=cha;
                arr[i+1]-=cha;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}