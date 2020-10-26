#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,a,b,count=0;
    cin>>n>>k;

    vector<pair<int,int>>v;

    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
sort(v.rbegin(),v.rend());
for(int i=1;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
       if(v[i].first==v[j].first&&v[i].second<v[j].second)
       {
           swap(v[i].first,v[j].first);
           swap(v[i].second,v[j].second);
       }
    }
}
int x,y;
x=v[k-1].first;
y=v[k-1].second;
for(int i=0;i<v.size();i++)
{
  if(v[i].first==x&&v[i].second==y)
        count++;
}
cout<<count<<endl;
}
