#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n,a;cin>>n;
    vector<int>v;
    map<int,int>mp;
    priority_queue<pair<int,int>>pq;
    for(int i=0;i<n;i++)cin>>a ,mp[a]++, v.push_back(a);
    for(auto x:mp)
    {
       pq.push({x.second,x.first});
    }
    pair<int,int>prev(-1,-1);
    vector<int>result;
    while(!pq.empty())
    {
        pair<int,int> x=pq.top();
        pq.pop();
        result.push_back(x.second);
        if(prev.first>0)
            pq.push(prev);
        x.first--;
        prev=x;
    }
    if(n!=result.size())
        cout<<"NO"<<"\n";
    else{
    for(int x:result)
        cout<<x<<" ";
    }
}
