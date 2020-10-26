#include<bits/stdc++.h>
using namespace std;

int main()
{
    int mx=1,cnt=1;

    string s;
    cin>>s;

    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]==s[i+1])
            cnt++;
            else
                cnt=1;

            if(cnt>mx)mx=cnt;



    }
    cout<<mx<<"\n";
}
