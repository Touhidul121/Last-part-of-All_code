#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll fact(ll n)
{
    ll ans=1;
    for(ll i=1;i<=n;i++)
        ans*=i;

    return ans;
}
ll nCr(ll n,ll k)
{
    if(k>n-k)
        k=n-k;

    ll ans=1;
    for(ll i=1;i<=k;i++)
    {
     ans*=(n-i+1);
     ans/=i;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
     ll n,k,ans;
     cin>>n>>k;
     if(k>n)
        ans=0;
     else{
     ans=nCr(n,k);
     ans*=ans;
     ans*=fact(k);
     }
     cout<<"Case "<<tc<<": ";
     cout<<ans<<"\n";
    }

}
