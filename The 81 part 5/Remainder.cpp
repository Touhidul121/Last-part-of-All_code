#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y,count=0;
    string s;

    cin>>n>>y>>x;
    cin>>s;

    if(s[n-1-x]!='1')
        count++;


    for(int i=n-1;i>=n-y-1;i--)
    {

      if(i==n-x-1||i==n-y-1)
      continue;
    else if(s[i]=='1')
        count++;
    }
    cout<<count<<endl;

}
