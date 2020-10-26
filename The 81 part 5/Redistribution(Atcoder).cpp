#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long ll;

int main()
{

    ll n;
    cin>>n;
    ll way[n+1];
    memset(way,0,sizeof(way));
    way[0]=1;
    ll coin[2001];
    int j=0;
    for(int i=3;i<=2000;i++)
        coin[j++]=i;
    int k=j;

    for(ll i=1;i<=n;i++)
    {
        for(ll j=0;j<k;j++)
        {
           if(i>=coin[j])
            way[i]=(way[i]+way[i-coin[j]])%mod;
        }
    }
    cout<<way[n]<<"\n";
}


