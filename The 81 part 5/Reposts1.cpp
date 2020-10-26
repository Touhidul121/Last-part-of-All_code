#include<bits/stdc++.h>
using namespace std;
//int par[401];

vector<int>parent(100,-1);
int find(int child)
{
    if(parent[child]<0)
        return child;
    return find(parent[child]);
}

void join(int a,int b)
{
    parent[b]+=parent[a];
    parent[a]=b;
}
int main()
{
     map<string,int>mp;
    int n,f=0,a,b;
    cin>>n;
    string s1,s,s2;

    for(int i=1;i<=n;i++)
    {
        cin>>s1>>s>>s2;
        for(int j=0;j<s1.size();j++)
            if(isupper(s1[j]))
            s1[j]=s1[j]-'A'+'a';
        for(int j=0;j<s2.size();j++)
            if(isupper(s2[j]))
            s2[j]=s2[j]-'A'+'a';

            if(mp.count(s1)==0)
            {
                f++;
                mp[s1]=f;

            }
            if(mp.count(s2)==0)
            {
                f++;
                mp[s2]=f;
            }
            a=mp[s1],b=mp[s2];
            a=find(a),b=find(b);
            if(a!=b)
                join(a,b);
    }
    for(int i=1;i<=f;i++)
        cout<<parent[i]<<" ";
}
