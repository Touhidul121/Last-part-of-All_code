#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,count=0;
    cin>>n>>a>>b;
     int walk=0,initial=a;
    if(b<0)
    {
        b=-b;

        while(count<b+1)
        {
            walk=initial--;
            if(walk==1)
                initial=n;
                count++;

        }
    }
    else
    {

       while(count<b+1)
       {
           walk=initial++;

           if(walk==n)
            initial=1;
            count++;

       }
    }
    cout<<walk<<endl;
}
