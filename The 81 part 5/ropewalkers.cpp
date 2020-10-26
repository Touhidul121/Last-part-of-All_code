#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a,b,c,d;
    cin>>a>>b>>c>>d;

    vector<ll>v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin(),v.end());

    ll diff1=0,diff2=0,ans=0;
    diff1=v[1]-v[0];
    diff2=v[2]-v[1];
    if(diff1<d)
        ans+=d-diff1;
    if(diff2<d)
        ans+=d-diff2;
    cout<<ans<<"\n";
}
