#include<bits/stdc++.h>
using namespace std;


int solve(vector<int>length,vector<int>val,int pos,int L)
{
    if(pos<0 || L==0)
        return 0;
    if(length[pos]<=L)
    {
        return max(val[pos]+solve(length,val,pos,L-length[pos]),solve(length,val,pos-1,L));
    }
    else
        return solve(length,val,pos-1,L);
}
int main()
{
    int n,a;
    cin>>n;
    vector<int> length(n),val(n);

    for(int i=0;i<n;i++)cin>>length[i];
    for(int i=0;i<n;i++)cin>>val[i];

    int L=n;

    int max_profit=solve(length,val,n-1,L);
    cout<<max_profit<<"\n";
}

