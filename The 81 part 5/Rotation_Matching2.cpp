#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,x;
    cin>>n;
    int cnt[n+1]={0},loc[n+1]={0};

    for(int i=1;i<=n;i++)
    {
        cin>>x;
        loc[x]=i+1;
    }
    int rotation,j;
    for(int i=1;i<=n;i++)
    {
      cin>>x;
      j=loc[x];
      if(i<j)
      rotation=j-i;
     else
      rotation=n-i+j;
      cnt[rotation]++;
    }
    int mx=0;
    for(int i=0;i<=n;i++)
    {
        mx=max(mx,cnt[i]);
    }
    cout<<mx<<"\n";
}
