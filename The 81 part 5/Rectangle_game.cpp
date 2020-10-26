#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
bool is_prime(ll n)
{
    int count=0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
ll get_div(ll n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return i;
    }
}
int main()
{
 ll n;
 cin>>n;
 ll ans=0,x;
 ans+=n;
 while(n>=1)
 {
     if(is_prime(n)){
        ans+=1;
        break;
     }
     else
     {
         x=get_div(n);
         ans+=(n/x);
         n=n/x;
     }

 }
 cout<<ans<<"\n";
}
