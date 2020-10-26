#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n,ans=0,x=0;
    cin>>n;

    while(n)
    {
        x=(n&1);
        if(x==1)
            ans++;
        n>>=1;
    }
    cout<<ans<<"\n";

}
