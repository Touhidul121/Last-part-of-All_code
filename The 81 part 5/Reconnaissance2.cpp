#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,x;
    cin>>n;

    map<int,pair<int,int>> mp;
    map<int,pair<int,int>>::iterator it;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    x=abs(v[0]-v[n-1]);
    mp[x]=make_pair(n,1);
    for(int i=0;i<n-1;i++)
    {
     x=abs(v[i]-v[i+1]);
     mp[x]=make_pair(i+1,i+2);
    }

    it=mp.begin();

    cout<<it->second.first<<" "<<it->second.second<<endl;
}
