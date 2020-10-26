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
 while(t--)
 {
     ll p,f;
     cin>>p>>f;
     ll n1,n2,x=0;
     cin>>n1>>n2;
     ll a,b;
     cin>>a>>b;
     ll ans=0;
     ll res1=0,res2=0;

     for(ll y=0;y<=max(n1,n2);y++)
     {
         x=(p-(b*y))/a;
         if( a*x+b*y<=p &&x>=0&&x<=n1 && y<=n2)
         {

                 res1=x+y;
                 ll rem1=n1-x;
                 ll rem2=n2-y;

                 if(a<b)
                 {
                     ll x1=(f/a);
                     x1=min(x1,rem1);
                     ll y1=(f-(x1*a))/b;
                     y1=min(y1,rem2);
                     res2=max(0ll,x1)+max(0ll,y1);
                 }
                 else
                 {
                     ll x1=(f/b);
                     x1=min(x1,rem2);
                     ll y1=(f-x1*b)/a;
                     y1=min(y1,rem1);
                     res2=max(0ll,x1)+max(0ll,y1);
                 }
             ans=max(res1+res2,ans);
         }
     }


     cout<<ans<<"\n";
 }
}
