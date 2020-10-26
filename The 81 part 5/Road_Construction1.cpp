#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a,b;
    cin>>n>>m;
    set<int>st;
    for(int i=0;i<m;i++)
    {
        cin>>a>>b;
        st.insert(a);st.insert(b);
    }
    int root=1;
    for(int i=1;i<=n;i++)
    {
        if(st.find(i)==st.end())
        {
            root=i;break;
        }
    }
    cout<<n-1<<"\n";
    for(int i=1;i<=n;i++)
    {
        if(i==root)continue;
        cout<<root<<" "<<i<<"\n";
    }
}
