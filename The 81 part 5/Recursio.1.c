#include<bits/stdc++.h>
using namespace std;


int main()
{
string s;
getline(cin,s);
int cnt1=0,cnt2=0,cnt3=0,cnt4=0;

for(int i=0;i<s.size();i++)
{
    if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
    cnt1++;
        else if(s[i]>='0'&&s[i]<='9')
        cnt2++;
    else if(s[i]==' ')
        cnt3++;
    else
        cnt4++;
}
cout<<cnt1<<" "<<cnt2<<" "<<cnt4<<" "<<cnt3<<"\n";
}
