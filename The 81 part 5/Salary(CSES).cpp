#include<bits/stdc++.h>
using namespace std;
#define maxN 100001
int ar[maxN];
vector<int> st[4*maxN];

void merge(vector<int> &a,vector<int> &b,vector<int> &c)
{
    int i=0,j=0;
    while(i<a.size()&&j<b.size())
    {
        if(a[i]<b[j])
            c.push_back(a[i]),i++;
        else
            c.push_back(b[j]),j++;
    }
    while(i<a.size())c.push_back(a[i]),i++;
    while(j<b.size())c.push_back(b[j]),j++;
}
void buildtree(int si,int ss,int se)
{
    if(ss==se)
    {
        st[si].push_back(ar[ss]);
        return;
    }
    int mid=(ss+se)/2;
    buildtree(2*si,ss,mid);
    buildtree(2*si+1,mid+1,se);

    merge(st[2*si],st[2*si+1],st[si]);
}

void update(int si,int ss,int se,int qi,int val)
{
    if(ss==se)
    {
        st[si].pop_back();
        st[si].push_back(val);
        return;
    }
    int mid=(ss+se)/2;
    if(qi<=mid)
        update(2*si,ss,mid,qi,val);
    else
        update(2*si+1,mid+1,se,qi,val);
    merge(st[2*si],st[2*si+1],st[si]);
}
int query(int si,int ss,int se,int qs,int qe,int k)
{
    if(qs>qe)return 0;
    if(qs==ss && qe==se)
        return upper_bound(st[si].begin(),st[si].end(),k)-st[si].begin()-1;

    int mid=(ss+se)/2;

    return query(2*si,ss,mid,qs,min(qe,mid),k)+query(2*si+1,mid+1,se,max(mid+1,qs),qe,k);
}
int query1(int si,int ss,int se,int qs,int qe,int k)
{
    if(qs>qe)return 0;
    if(qs==ss && qe==se)
        return upper_bound(st[si].begin(),st[si].end(),k)-st[si].begin();

    int mid=(ss+se)/2;

    return query(2*si,ss,mid,qs,min(qe,mid),k)+query(2*si+1,mid+1,se,max(mid+1,qs),qe,k);
}

int main()
{
   int n,l,r,k,q,t;
   cin>>n>>q;
   for(int i=1;i<=n;i++)cin>>ar[i];
   buildtree(1,1,n);
   while(q--)
   {
       char ch;
       cin>>ch;
       if(ch=='!')
       {
           cin>>l>>r;
           update(1,1,n,l,r);
       }
       else{
            cin>>l>>r;
           int x=query(1,1,n,1,n,l);
           int y=query1(1,1,n,1,n,r);
           cout<<max(x,y)-(min(x,y))<<"\n";
       }
   }
}


