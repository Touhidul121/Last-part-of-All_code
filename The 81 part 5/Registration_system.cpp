#include<bits/stdc++.h>
using namespace std;

int main()
{
 int n;
 cin>>n;

 map<string,int>mp;
 string s;

 for(int i=0;i<n;i++)
 {
     cin>>s;
     if(mp[s]==0)
        cout<<"OK"<<"\n";
     else{
            cout<<s<<mp[s]<<"\n";
     }
     mp[s]++;
 }
}
