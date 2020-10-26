#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int count1=0,total=0;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(')
        {
            count1++;
        }
        else
        {
            if(count1!=0)
            {
                count1--;
                total+=2;
            }
        }
    }
    cout<<total<<endl;
}
