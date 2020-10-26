#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
int  t;
	cin>>t;
	while(t--)
	{
		ll x, y, c, n, cnt=0;
		ll ans=0, mn1=INT_MAX, mx1=0, k;
		cin>>n;
		vector<int>v1(n), v2(n);
		for(int i=0;i<n;i++)cin>>v1[i];
		for(int i=0; i<n; i++)
		{
			if(v1[i]>mx1) mx1=v1[i];
			if(v1[i]<mn1) mn1=v1[i];
		}
		for(int i=mn1*2; i<=mx1*2; i++)
		{
			cnt=0;
			for(int j=0; j<n; j++) v2[j]=0;
			for(int j=0; j<n; j++)
			{
				for(int k=j+1; k<n; k++)
				{
					x=i-v1[j];
					if(v1[k]==x && v2[k]==0 && v2[j]==0)
					{
						cnt++;
						v2[k]=1;
						v2[j]=1;
					}
				}
			}
			ans=max(ans, cnt);
		}
		cout<<ans<<"\n";
	}
	return 0;
}

