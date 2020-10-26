#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int sz,k,r;
      cin>>sz>>r;
      int n=r,l=0,j=0;
      int a[sz];
      int loc[r];
      for(int i=0;i<sz;i++){
        cin>>a[i];
        }
      ll sum=0;
      sort(a,a+sz);
      reverse(a,a+sz);
       for(int i=0;i<r;i++)
            cin>>loc[i];
            sort(loc,loc+r);

      int right=sz-1;
      for(int i=0;i<r;i++)
        {


            if(loc[i]==1)
            {
                sum+=a[j]+a[j];


            }
            else
            {


                sum+=a[j]+a[right];
                right-=(loc[i]-1);
            }
            j++;
        }
        cout<<sum<<"\n";
  }
}
