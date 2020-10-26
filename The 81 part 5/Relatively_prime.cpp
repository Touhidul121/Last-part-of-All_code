#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
   ll r,l;
   cin>>l>>r;
   ll x=l;
   cout<<"YES"<<"\n";
   for(ll i=0;i<(r-l+1)/2;i++)
   {
       cout<<x<<" "<<x+1<<"\n";
       x+=2;
   }

}
