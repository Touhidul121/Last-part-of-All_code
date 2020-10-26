#include<bits/stdc++.h>
#include<string.h>
using namespace std;


int main()
{
    char s[100];
gets(s);
int cnt1=0,cnt2=0,cnt3=0,cnt4=0;

for(int i=0;i<strlen(s);i++)
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
printf("Number of Alphabets %d\n",cnt1);
printf("Number of digits %d\n",cnt2);
printf("Number of special characters %d\n",cnt4);
printf("Number of whitespaces %d\n",cnt3);
}
