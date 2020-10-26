#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,x,y;
        cin>>x>>y>>a>>b;


            ll diff=abs(x-y);
            ll cost1=0,cost2=0,cost3=0;
            cost1=(diff*a)+min(x,y)*b;
            cost2=(diff*a)+max(x,y)*b;
            cost3=x*a+y*a;
            cout<<min(cost1,min(cost2,cost3))<<endl;
        }

    }

