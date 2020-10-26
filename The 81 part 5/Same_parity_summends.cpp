#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;

        if(k>n)
            cout<<"NO"<<"\n";
        else if((n&1)&&(k%2==0))
            cout<<"NO"<<"\n";
            else if((n%2==0&&(k&1)&&k>n/2))
                cout<<"NO"<<"\n";
        else
        {
            if(n%2==0&&(k&1))
            {
                cout<<"YES"<<"\n";
                for(int i=1; i<=k-1; i++)
                {
                    cout<<2<<" ";
                }
                cout<<n-(2*(k-1))<<"\n";
            }
            else if(n%2==0&&k%2==0)
            {
                cout<<"YES"<<"\n";
                for(int i=1; i<=k-1; i++)
                {
                    cout<<1<<" ";
                }
                cout<<n-(1*(k-1))<<"\n";
            }
            else if((n&1)&&(k&1))
            {
                cout<<"YES"<<"\n";
                for(int i=1; i<=k-1; i++)
                {
                    cout<<1<<" ";
                }
                cout<<n-(1*(k-1))<<"\n";
            }
        }
    }
}
