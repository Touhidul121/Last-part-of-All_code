#include<bits/stdc++.h>
using namespace std;

#define maxN 200001
#define inf INT_MAX
int ar[maxN], st[4*maxN];

void buildtree(int si,int ss,int se)
{
    if(ss==se)
    {
        st[si]=ar[ss];
        return ;
    }
    int mid=(ss+se)/2;
    buildtree(2*si,ss,mid);
    buildtree(2*si+1,mid+1,se);

    st[si]=min(st[2*si],st[2*si+1]);
}

int query(int si,int ss,int se,int qs,int qe)
{
    if(qs>qe)return inf;
    if(qs==ss && qe==se)
        return st[si];
    int mid=(ss+se)/2;

    int l=query(2*si,ss,mid,qs,min(qe,mid));
    int r=query(2*si+1,mid+1,se,max(mid+1,qs),qe);

    return min(l,r);
}

int main()
{
    int n,t,l,r;
    cin>>n>>t;

    for(int i=1;i<=n;i++)cin>>ar[i];
    buildtree(1,1,n);

    while(t--)
    {
        cin>>l>>r;
        int res=query(1,1,n,l,r);
        cout<<res<<"\n";
    }
}
