#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n,s=0;
    cin>>n;
    vector<ll>v(n);

    for(int i=0;i<n;i++)
        cin>>v[i] , s+=v[i];
    sort(v.begin(),v.end());
    cout<<max(s,2ll*v[n-1])<<"\n";
}
