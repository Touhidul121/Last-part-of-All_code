#include<bits/stdc++.h>
using namespace std;

int main()
{

      int n,m;
      cin>>n>>m;
      int a[n][m];
      int pref[n+1][m+1];
      for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
        cin>>a[i][j] ; pref[i][j]=0;
        }
        for(int i=0;i<=m;i++)pref[n][i]=0,pref[0][i]=0;
        for(int j=0;j<=n;j++)pref[j][0]=0;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=0;
            for(int j=0;j<m;j++)
            {
                sum+=a[i][j];
                pref[i+1][j+1]=sum;
            }
        }

      for(int i=0;i<=n;i++)
      {
          for(int j=0;j<=m;j++)
          {
              cout<<pref[i][j]<<" ";
          }
          cout<<"\n";
      }
}
