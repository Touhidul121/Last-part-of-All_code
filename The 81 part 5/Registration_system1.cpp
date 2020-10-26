#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    map<string,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(mp.count(s)==0)
        {
            cout<<"OK"<<"\n";
        }
        else
            cout<<s<<mp[s]<<"\n";
        mp[s]++;
    }
}
