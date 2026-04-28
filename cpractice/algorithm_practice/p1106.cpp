#include<iostream>
#include<string>
using namespace std;
string s;
int k;
int arr[256],remain,minindex,index = 1,cnt;
int main()
{
    cin>>s>>k;
    int n = s.size();
    for(int i = 1;i<=n;i++) arr[i] = s[i-1]-'0';
    remain = n-k;
    int iffirst0 = 0;
    while (cnt<remain)
    {
        minindex = index;
        for(int i = index;i<=index+k;i++)
        {
            if(arr[i]<arr[minindex]) minindex = i;
        }
        k -= minindex - index;
        index = minindex+1;
        if(arr[minindex]!=0) iffirst0 = 1;
        if(iffirst0) cout<<arr[minindex];
        cnt++;
    }
    if(iffirst0 == 0) cout<< 0;
    return 0;
}