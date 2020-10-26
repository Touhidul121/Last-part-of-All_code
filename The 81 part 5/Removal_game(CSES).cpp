#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    ll arr[n];
    ll dp[n+1][n+1];

    for(int i=0;i<n;i++)cin>>arr[i];

     // table[0][n-1] which is the result.
    for (int k = 0; k < n; ++k) {
        for (int i = 0, j = k; j < n; ++i, ++j) {
            // Here x is value of F(i+2, j),
            // y is F(i+1, j-1) and
            // z is F(i, j-2) in above recursive
            // formula
            ll x = ((i + 2) <= j)? dp[i + 2][j]: 0;
            ll y = ((i + 1) <= (j - 1))? dp[i + 1][j - 1]: 0;
            ll z = (i <= (j - 2))? dp[i][j - 2]: 0;

            dp[i][j] = max(
                arr[i] + min(x, y),
                arr[j] + min(y, z));
        }
    }

    cout<< dp[0][n - 1];
}
