#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
   int count=0;
   int total=0;
    for(int i=0;i<s.size();i++)
    {
     if(s[i]=='(')
            count++;
     else{
            if(count!=0)
     {
         count--;
         total+=2;
     }
    }
    }
    cout<<total<<endl;
}
