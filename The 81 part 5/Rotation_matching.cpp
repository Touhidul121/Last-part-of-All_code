#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    cin>>n;
    vector<int>v1,v2;
    map<int,int>mp;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        v1.push_back(a);
        mp[a]=i;
    }

    for(int i=0;i<n;i++)
    {
        cin>>a;
        v2.push_back(a);
    }
    int index_diff=0;
    vector<int>ans(n);

    for(int i=0;i<n;i++)
    {
        index_diff=i-mp[v2[i]];
        if(index_diff<0)
            index_diff+=n;

        ans[index_diff]++;
    }

    cout<<*max_element(ans.begin(),ans.end())<<"\n";

}
