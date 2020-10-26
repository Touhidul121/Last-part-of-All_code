#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a,b,c;
        cin>>a>>b>>c;
        int ans1=0,ans2=0,ans3=0;
        map<char,int>mp;
        string s;
        cin>>s;
        for(char x:s)
            mp[x]++;
        ans1=min(mp['S'],a);
        ans2=min(mp['R'],b);
        ans3=min(mp['P'],c);

        if(ans1+ans2+ans3>=(int)ceil(n/2.0))
        {
            cout<<"YES"<<"\n";
            for(int i=0;i<s.size();i++)
            {
                if(ans1>0 && s[i]=='S')
                {

                    ans1--;
                    a--;
                    s[i]='R';
                }
                else if(ans2>0 && s[i]=='R')
                {

                    ans2--;
                    b--;
                    s[i]='P';
                }
               else if(ans3>0 && s[i]=='P')
                {

                    ans3--;
                    c--;
                    s[i]='S';
                }
                else
                    s[i]='X';

            }
            for(int i=0;i<s.size();i++)
            {
                if(s[i]!='X')
                    continue;
                if(a)
                {
                    s[i]='R';
                    a--;
                }
                else if(b)
                {
                    s[i]='P';
                    b--;
                }
                else if(c)
                {
                    s[i]='S';
                    c--;
                }
            }
            cout<<s<<"\n";
        }
        else
            cout<<"NO"<<"\n";
    }
}
