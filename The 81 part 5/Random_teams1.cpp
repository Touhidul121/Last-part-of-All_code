#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll nCr(ll n)
{
 ll x=2;
 return (n*(n-1))/x;
}

int main()
{
    ll n,m;
    cin>>n>>m;
    ll kmax,kmin;
    kmax=nCr(n-m+1);
    ll x=((n-m)/m )+1;
    ll rem=(n-m)%m;
    kmin=m*((x*(x-1))/2);
    kmin=kmin+x*rem;
    cout<<kmin<<" "<<kmax<<"\n";
}
