#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
    cin>>n;
        vector<int>v;
        unordered_map<int,int>mp;
        for(int i=0;i<2*n;i++)
        {
            cin>>a;
            if(mp.count(a)==0){
                v.push_back(a);
                mp[a]++;
            }
        }
        for(int x:v)
            cout<<x<<" ";
        cout<<"\n";
    }
}
