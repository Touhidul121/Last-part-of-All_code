#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll sum1,sum2,x,y,a,b;
        cin>>x>>y>>a>>b;
        if(x>y)
            swap(x,y);
        sum1=x*b+(y-x)*a;
        sum2=x*a+y*a;
        cout<<min(sum1,sum2)<<"\n";
    }
}
