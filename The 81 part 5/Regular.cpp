#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i=0;
        cin>>n;
        int cnt1=0,ans=0;
        string s;
        cin>>s;

        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
                cnt1++;
            if(s[i]==')' && cnt1==0)
                ans++;
            if(s[i]==')'&& cnt1>0)
                cnt1--;
        }
        cout<<ans<<"\n";

}    }

