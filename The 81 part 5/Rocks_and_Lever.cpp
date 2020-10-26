#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a;
        cin>>n;
        vector<ll>v;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }


        ll cnt=0;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int k=(int)log2(v[i]);
            //cout<<k<<" ";
            mp[k]++;
        }
        for(auto x:mp)
        {
            if(x.second>1)
            {
                ll r=x.second;
                cnt+=(r*(r-1))/2;
            }
        }
        cout<<cnt<<"\n";
    }
}
