#include<iostream>
#include<string>
#include<vector>
using namespace std;
vector<int> add_num(vector<int> num1,vector<int> num2)
{
    if(num1.size()<num2.size()) return add_num(num2,num1);
    vector<int> c;
    int t = 0;
    for(int i = 0;i<num1.size();i++)
    {
        t+=num1[i];
        if(i<num2.size()) t+=num2[i];
        c.push_back(t%10);
        t/=10;
    }
    if(t) c.push_back(t);
    return c;
}
vector<vector<int>> fb(1050);
int main()
{
    int n,m;
    cin>>n>>m;
    if(m-n == 0)
    {
        cout<<0<<endl;
        return 0;
    }
    fb[0] = {1},fb[1] = {1};
    for(int i =2;i<=1020;i++)
    {
        fb[i] = add_num(fb[i-2],fb[i-1]);
    }
    for(int i = fb[m-n].size()-1;i>=0;i--)
    {
        cout<<fb[m-n][i];
    }
    return 0;
}