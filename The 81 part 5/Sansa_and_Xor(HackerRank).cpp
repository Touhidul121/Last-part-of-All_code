#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,ans=0,cnt=0;
        cin>>n;
        vector<ll>v(n+1);


        for(int i=1;i<=n;i++)
            cin>>v[i];

        for(int i=1;i<=n;i++)
        {
            cnt=i*(n-i+1);
            if(cnt&1)
                ans^=v[i];
        }
        cout<<ans<<"\n";

    }

}
