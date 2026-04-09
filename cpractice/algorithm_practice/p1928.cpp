#include<iostream>
#include<string>
using namespace std;
string expand()
{
    string s = "",x;
    char ch;int times = 0;
    while(cin>>ch)
    {
        if(ch=='[')
        {
            cin>>times;
            x = expand();
            while(times--) s+=x;
        }
        else if(ch==']') return s;
        else s+=ch;
    }
    return s;
}
int main()
{
    cout<<expand();
    return 0;
}