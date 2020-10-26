#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n==1)
            cout<<1<<"\n";
        else if(n&1)
            cout<<n-(n/2)<<"\n";


            else
                cout<<n-(n/2)+1<<"\n";
        }

}
