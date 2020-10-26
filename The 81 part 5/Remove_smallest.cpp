#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;
        vector<int>v;

        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        if(n==1)
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            sort(v.begin(),v.end());
            bool f=false;
            for(int i=0;i<n-1;i++)
            {
                if(v[i+1]-v[i]>1)
                {
                    f=true;
                    break;
                }
            }

            if(f)
                cout<<"NO"<<"\n";
                else
                    cout<<"YES"<<"\n";
        }
    }
}
