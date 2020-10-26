#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,sx,sy,ex,ey;

    cin>>t>>sx>>sy>>ex>>ey;
    string s;
    cin>>s;

    //going from one point to another in graph is just nullifying the difference in both axis
    int diff_x=sx-ex;
    int diff_y=sy-ey;

    int tm=-1;

    for(int i=0;i<s.size();i++)
    {
        if(diff_x<0&&s[i]=='E')
        {
            diff_x++;
        }
        else if(diff_x>0&&s[i]=='W')
        {
         diff_x--;
        }
        else if(diff_y<0&&s[i]=='N')
            diff_y++;
        else if(diff_y>0&&s[i]=='S')
            diff_y--;

        if(diff_x==0&&diff_y==0)
        {
          tm=i+1;
          break;
        }
    }
    cout<<tm<<endl;
}
