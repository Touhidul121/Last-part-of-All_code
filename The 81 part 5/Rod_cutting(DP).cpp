#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    vector<int> length(n),val(n);

    for(int i=0;i<n;i++)cin>>length[i];
    for(int i=0;i<n;i++)cin>>val[i];



    int m;
    cin>>m;
    int dp[n+1][m+1];
    for(int i=0;i<=m;i++)
        dp[0][i]=0;
    for(int i=0;i<=n;i++)
        dp[i][0]=0;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(length[i-1]>j)
                dp[i][j]=dp[i-1][j];
            else
            {
                dp[i][j]=max(val[i-1]+dp[i][j-length[i-1]],dp[i-1][j]);
            }
        }
    }
    cout<<dp[n][m]<<"\n";
}

