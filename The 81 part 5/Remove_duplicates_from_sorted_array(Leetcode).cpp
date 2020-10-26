#include<bits/stdc++.h>
using namespace std;

int first_occ(vector<int>v,int x)
{
    int lo=0,hi=v.size()-1;
    int ans;
    while(lo<=hi)
    {
        int mid=(lo+hi)/2;
        if(v[mid]==x)
        {
            ans=mid;
            hi=mid-1;
        }
        else if(v[mid]>x)
        {
            hi=mid-1;
        }
        else if(v[mid]<x)
        {
            lo=mid+1;
        }
    }
    return ans;
}

int last_occ(vector<int>v,int x)
{
    int lo=0,hi=v.size()-1;
    int ans;
    while(lo<=hi)
    {
        int mid=(lo+hi)/2;
        if(v[mid]==x)
        {
            ans=mid;
            lo=mid+1;
        }
        else if(v[mid]>x)
        {
            hi=mid-1;
        }
        else if(v[mid]<x)
        {
            lo=mid+1;
        }
    }
    return ans;
}
int main()
{
    int n,a;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)cin>>a , v.push_back(a);

    for(int i=0;i<n;)
    {
        int x=v[i];
        int ind1=first_occ(v,x);
        int ind2=last_occ(v,x);
        i+=(ind2-ind1+1);

        for(int j=0;j<min(2,ind2-ind1+1);j++)
            cout<<x<<" ";

    }
}
