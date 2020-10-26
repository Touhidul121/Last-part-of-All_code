#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
if(s.size()==1)
    cout<<s[0];
else{
    if(s.size()&1)
    {
        int n=s.size();
        cout<<s[n/2];
        int l=n/2-1,r=n/2+1;
        int i=0;
        while(r<=n-1&&l>=0)
        {
            if(i%2==0)
            {
                cout<<s[r];
                r++;
            }
            else
            {
                cout<<s[l];
                --l;
            }
            i++;
        }
        cout<<s[l];
    }
    else
    {
        int n=s.size();
        cout<<s[n/2-1];
        int l=n/2-2,r=n/2;
        int i=0;
        while(r<=n-1&&l>=0)
        {
            if(i%2==0)
            {
                cout<<s[r];
                r++;
            }
            else
            {
                cout<<s[l];
                --l;
            }
            i++;
        }
        cout<<s[r];
    }
}
cout<<"\n";
}
