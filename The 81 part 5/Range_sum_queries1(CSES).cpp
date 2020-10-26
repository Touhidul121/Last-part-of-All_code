#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n,t,a,b;
    cin>>n>>t;
    vector<ll>pref(n+1);

    for(int i=0;i<n;i++)
    {
        cin>>a;
        pref[i+1]=pref[i]+a;
    }

    while(t--)
    {
        cin>>a>>b;
        cout<<pref[b]-pref[a-1]<<"\n";
    }
}
