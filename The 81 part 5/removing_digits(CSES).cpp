#include<bits/stdc++.h>
using namespace std;
const int maxN = 1e6;
int dp[maxN+1],n;
int main()
{

    cin>>n;



    for(int i=1;i<=n;i++)
    {
        dp[i]=1e9;
        int i2=i;
        while(i2)
        {
            dp[i]=min(dp[i],dp[i-i2%10]+1);
            i2/=10;
        }
    }
    cout<<dp[n]<<"\n";
}
