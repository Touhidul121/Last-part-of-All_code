#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a,b,x;
    cin>>n>>m;
    unordered_set<int>st;
    for(int i=0;i<m;i++)
    {
        cin>>a>>b;
        st.insert(a);
        st.insert(b);
    }

        cout<<n-1<<"\n";
        for(int i=1;i<=n;i++)
        {
            if(st.find(i)==st.end())
            {
                x=i;
                break;
            }
        }
        for(int i=1;i<=n;i++)
        {
            if(i==x)
                continue;
            cout<<x<<" "<<i<<"\n";
        }
    }

