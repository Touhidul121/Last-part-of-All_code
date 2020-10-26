#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y;
    cin>>n>>x>>y;
    string s;
    cin>>s;

    int cnt=0,j=n-1,r=x-y;
    while(y--){
        if(s[j]!='0')
            cnt++;
            j--;
    }
    if(s[j]!='1')
        cnt++;

    j--;
    r--;

    while(r--)
    {
        if(s[j]!='0')
            cnt++;

        j--;
    }

    cout<<cnt<<"\n";


}
