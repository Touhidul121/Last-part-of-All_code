#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int sz,k,r,b;
      cin>>sz>>r;
      int n=r,l=0;
      int a[sz];
      for(int i=0;i<sz;i++)
        cin>>a[i];
      ll sum=0;
      sort(a,a+sz);
      reverse(a,a+sz);
      vector<int>v1;
      for(int i=0;i<r;i++)
      {
          cin>>b;
          v1.push_back(b);
      }
      sort(v1.begin(),v1.end());
      int j=0;
      for(int i=0;i<r;i++)
        {


            if(v1[i]==1)
            {
                sum+=a[j]+a[j];
                j++;
                n--;
            }
            else
            {
                l+=v1[i]-1;

                sum+=a[j]+a[j+n-1+l];
                n--;
                j++;
            }
        }
        cout<<sum<<"\n";
  }
}
