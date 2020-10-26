#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        ll n,m,a;
        cin>>n>>m;
        ll sum=0;

        for(int i=0;i<n;i++)
        {
            cin>>a;
            sum+=a;
        }
        if(sum==m)cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";

    }
}
