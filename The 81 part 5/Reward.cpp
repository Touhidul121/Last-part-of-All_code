#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int sum1=0,sum2=0;
    int a,b;
    for(int i=0;i<3;i++)
    {
        cin>>a;
        sum1+=a;
    }
    for(int i=0;i<3;i++)
    {
        cin>>b;
        sum2+=b;
    }
    cin>>n;
    double d;
int ness=0;
    d=ceil(sum1/5.0);
    ness=(int)(d);

    d=ceil(sum2/10.0);
    ness=ness+(int)d;

    if(ness<=n)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
