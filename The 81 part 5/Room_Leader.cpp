#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    map<string,ll>mp;
    string s;
    ll sh,uh,a,b,c,d,e;

    for(int i=0;i<n;i++)
    {
        cin>>s;
        cin>>sh>>uh>>a>>b>>c>>d>>e;
        mp[s]=(sh*100)-(uh*50)+(a+b+c+d+e);
    }

    ll mx=INT_MIN;
    string ans;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        if(mx<it->second)
        {
            mx=it->second;
            ans=it->first;
        }
    }
    cout<<ans<<"\n";
}
