#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,a,b,res=0,t;
    cin>>n>>k;
    vector<int>ans,alice,bob;

    for(int i=0;i<n;i++)
    {
        cin>>t>>a>>b;
        if(a==1 && b==1)
            ans.push_back(t);
        else if(a==1)
            alice.push_back(t);
        else if(b==1)
            bob.push_back(t);
    }
    sort(alice.begin(),alice.end());
    sort(bob.begin(),bob.end());

    for(int i=0;i<min(alice.size(),bob.size());i++){
        ans.push_back(alice[i]+bob[i]);
    }

        if(ans.size()<k)
            cout<<-1<<"\n";
        else
            {
    sort(ans.begin(),ans.end());
    for(int i=0;i<k;i++)
        res+=ans[i];
    cout<<res<<"\n";
        }
return 0;
}
