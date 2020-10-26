
#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using oset=tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
typedef long long ll;
#define ar array
oset<ar<int,2>>st;

int qry(int x)
{
    return st.order_of_key({x,0});
}
int main()
{
    int n,q,k,x,a,b;
    cin>>n>>q;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        st.insert({arr[i],i});
    }
    while(q--)
    {
        char type;
        cin>>type;
        if(type=='!')
        {
            cin>>k>>x;
            k--;
            st.erase({arr[k],k});
            arr[k]=x;
            st.insert({arr[k],k});
        }
        else
        {
            cin>>a>>b;
            cout<<qry(b+1)-qry(a)<<"\n";
        }
    }
}
