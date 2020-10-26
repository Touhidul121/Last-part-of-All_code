#include<bits/stdc++.h>
using namespace std;

#define mxN 200005
#define ar array
int ans[mxN];
ar<int,3>a[mxN];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;



    for(int i=0;i<n;i++)
    {
        cin>>a[i][1]>>a[i][0];
        a[i][2]=i;
    }
    sort(a,a+n);
    set<ar<int,2>>st;

    for(int i=0;i<n;i++)
    {
        auto it=st.lower_bound({a[i][1]});
        if(it!=st.begin())
        {
            --it;
            ans[a[i][2]]=(*it)[1];
            st.erase(it);
        }
        else
            ans[a[i][2]]=st.size();
        st.insert({a[i][0],ans[a[i][2]]});
    }
    cout<<st.size()<<"\n";

    for(int i=0;i<n;i++)
        cout<<ans[i]+1<<" ";
}
