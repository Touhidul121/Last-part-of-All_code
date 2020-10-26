#include<bits/stdc++.h>
using namespace std;

int* Sort(int a[],int n)
{
 for(int i=1;i<n;i++)
 {
     for(int j=0;j<n-i;j++)
     {
         if(a[j]>a[j+1])
            swap(a[j],a[j+1]);
     }
 }
 return a;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
 int *p;
 p=Sort(a,n);
 for(int i=0;i<n;i++)
    cout<<*(p+i)<<endl;
}
