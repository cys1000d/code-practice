#include<iostream>
#include<algorithm>
using namespace std;
const int N = 3e4+10;
int w,n,ans=0;
int arr[N];
int main()
{
    cin>>w>>n;
    for(int i =0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    int l = 0,r = n-1;
    while(l<=r)
    {
        if((arr[l]+arr[r])>w)
        {
            ans++;
            r--;
        }
        else
        {
            r--,l++;
            ans++;
        }
    }
    cout<<ans;
    return 0;
}