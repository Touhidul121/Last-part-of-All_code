#include<bits/stdc++.h>
using namespace std;

int main()
{
 int n,x;
 cin>>n;
 int a[n];
 int m=999999;

 for(int i=0;i<n;i++)
        cin>>a[i];

 if(m>abs(a[0]-a[n-1]))
    m=abs(a[0]-a[n-1]);
 for(int i=0;i<n-1;i++)
 {
     x=abs(a[i]-a[i+1]);
     if(m>x)
        m=x;
 }
 if(m==abs(a[0]-a[n-1]))
    cout<<n<<" "<<1<<endl;
 else
 {
     for(int i=0;i<n-1;i++)
     {
         x=abs(a[i]-a[i+1]);
         if(x==m)
         {
             cout<<i+1<<" "<<i+2;
             return 0;
         }
     }
 }
}

