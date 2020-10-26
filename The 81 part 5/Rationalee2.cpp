#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--){
    int n,friends;
    cin>>n>>friends;

    ll arr[n+1],v[friends+1];
    for(int i=1;i<=n;i++)cin>>arr[i];
    for(int i=1;i<=friends;i++)cin>>v[i];

    sort(arr+1,arr+n+1);
    sort(v+1,v+friends+1);

    ll i,j,k=1;
    i=j=n;
    ll ans=0;

    int x=friends;

    for(int r=1;r<=x;r++)
    {
        if(v[k]==1)
        {
            ans+=arr[i]+arr[i];
            j--;
        }
        else{
        j=j-(v[k]-1);

        ans+=arr[i]+arr[i-j-(friends-1)];
        }

        k++;
        friends--;
        i--;
    }
    cout<<ans<<"\n";
    }

}
