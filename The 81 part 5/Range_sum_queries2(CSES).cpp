#include<bits/stdc++.h>
using namespace std;
#define maxN 200001
#define ll long long
ll ar[maxN],st[4*maxN];
void buildtree(ll si,ll ss,ll se)
{
    if(ss==se)
    {
        st[si]=ar[ss];
        return;
    }
    ll mid=(ss+se)/2;
    buildtree(2*si,ss,mid);
    buildtree(2*si+1,mid+1,se);

    st[si]=st[2*si]+st[2*si+1];
}

void update(ll si,ll ss,ll se,ll qi,ll val)
{
    if(ss==se)
    {
        st[si]=val;
        return;
    }
    ll mid=(ss+se)/2;
    if(qi<=mid)
        update(2*si,ss,mid,qi,val);
    else
        update(2*si+1,mid+1,se,qi,val);
    st[si]=st[2*si]+st[2*si+1];
}

ll query(ll si,ll ss,ll se,ll qs,ll qe)
{
    if(qs>qe)
        return 0;
    if(qs==ss && qe==se)
        return st[si];
    ll mid=(ss+se)/2;

    ll l=query(2*si,ss,mid,qs,min(mid,qe));
    ll r=query(2*si+1,mid+1,se,max(mid+1,qs),qe);
    return l+r;
}
int main()
{
   ll n,t,type,l,r;
   cin>>n>>t;

   for(ll i=1;i<=n;i++)
        cin>>ar[i];
   buildtree(1,1,n);
   while(t--)
   {
      cin>>type>>l>>r;
      if(type==1)
      {
          update(1,1,n,l,r);
      }
      else
      {
          cout<<query(1,1,n,l,r)<<"\n";
      }
   }
}
