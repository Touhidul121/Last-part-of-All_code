#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    ll n,a1,a2,a3,b1,b2,b3;
    cin>>n>>a1>>a2>>a3>>b1>>b2>>b3;

    ll ans=n-(min(a1,b1+b3)+min(a2,b2+b1)+min(a3,b3+b2));
    cout<<ans<<" ";
    ll ans1=0;
    if(a1>0)
    {
        ans1+=min(a1,b2);
        a1-=min(a1,b2);
        b2-=min(a1,b2);
    }
    if(a2>0)
    {
        ans1+=min(a2,b3);
        a2-=min(a2,b3);
        b3-=min(a2,b3);
    }
    if(a3>0)
        ans1+=min(a3,b1);
    cout<<ans1<<"\n";
}
