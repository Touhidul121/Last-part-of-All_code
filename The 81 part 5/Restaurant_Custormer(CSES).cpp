#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,a,b;
    cin>>n;
    set<pair<int,int>>st;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        st.insert({a,1});
        st.insert({b,-1});
    }


    int mx=0,cnt=0;

    for(pair<int,int> p:st)
    {
        cnt+=p.second;
        mx=max(mx,cnt);
    }
    cout<<mx<<"\n";

}
