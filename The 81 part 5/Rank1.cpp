#include<bits/stdc++.h>
using namespace std;

struct p
{
    int a;
    int b;
};
int main()
{
    int n,k,count=0;
    cin>>n>>k;
 struct p s[n];

 for(int i=0;i<n;i++)
 {
     cin>>s[i].a>>s[i].b;
 }

 for(int i=0;i<n-1;i++)
 {
     for(int j=i+1;j<n-i;j++)
     {
         if(s[i].a<s[j].a)
         {
             swap(s[i],s[j]);
         }
     }
 }

 for(int i=0;i<n;i++)
 {
     cout<<s[i].a<<" "<<s[i].b<<endl;
 }
 for(int i=0;i<n-1;i++)
 {
     for(int j=0;j<n-i;j++)
     {
         if(s[i].a==s[j].a&&s[i].b>s[j].b)
         {
             swap(s[i].a,s[j].a);
             swap(s[i].b,s[j].b);
         }
     }
 }

 for(int i=0;i<n;i++)
 {
     cout<<s[i].a<<" "<<s[i].b<<endl;
 }


 int x,y;
 x=s[k-1].a;
 y=s[k-1].b;

 for(int i=0;i<n;i++)
 {
     if(s[i].a==x&&s[i].b==y)
        count++;
 }
 cout<<count<<endl;
}
