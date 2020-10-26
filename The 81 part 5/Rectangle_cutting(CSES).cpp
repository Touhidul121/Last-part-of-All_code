#include<bits/stdc++.h>
using namespace std;
#define maxN 501
int dp[maxN][maxN];
int main()
{
    int a,b,ans;
    cin>>a>>b;

    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            if(i==j)
                dp[i][j]=0;
            else
            {
                ans=INT_MAX;
             for(int k=1;k<i;k++)
             {
                 ans=min(ans,dp[k][j]+dp[i-k][j]);
             }
             for(int k=1;k<j;k++)
             {
                 ans=min(ans,dp[i][k]+dp[i][j-k]);
             }
             dp[i][j]=ans+1;
            }
        }
    }
    cout<<dp[a][b]<<"\n";
}
