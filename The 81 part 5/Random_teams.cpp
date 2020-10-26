#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll get(ll x)
{
    return x*(x-1)/2;
}
int main()
{
    int n,m;
    ll kmx=0;

    cin>>n>>m;

    ll x=n-(m-1);

    kmx=get(x);
    ll a=n/m;
    cout<<get(a+1)*(n%m)+get(a)*(m-n%m)<<" "<<kmx<<"\n";
}
