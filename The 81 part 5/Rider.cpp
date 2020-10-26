#include<bits/stdc++.h>
using namespace std;

bool vis[10][10];
int dist[10][10];
int dx[]={-2,-1,1,2,1,2,-1,-2};
int dy[]={1,2,2,1,-2,-1,-2,-1};
int m,n;
char grid[10][10];
int ans[10][10],ans1[10][10];

void bfs(int x,int y)
{
    queue<pair<int,int>>q;
    q.push({x,y});
    vis[x][y]=1;
    dist[x][y]=0;

    while(!q.empty())
    {
        int curX=q.front().first;
        int curY=q.front().second;

        q.pop();
        for(int i=0;i<8;i++)
        {
          int newX=curX+dx[i];
          int newY=curY+dy[i];

          if(newX>=0 && newX<m && newY>=0 && newY<n && vis[newX][newY]==0){
          dist[newX][newY]=dist[curX][curY]+1;
          vis[newX][newY]=1;
          q.push({newX,newY});
          }
        }
    }
}
int main()
{
    int t,r=0;
    cin>>t;
    while(t--)
    {
        r++;
        cin>>m>>n;
        memset(ans,0,sizeof(ans));
        memset(ans1,0,sizeof(ans1));
        memset(vis,0,sizeof(vis));
        memset(dist,0,sizeof(dist));

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>grid[i][j];
            }
        }

        int cnt=0;
        for(int i=0;i<m;i++)
        {
         for(int j=0;j<n;j++)
         {

            if(grid[i][j]!='.')
            {
                 cnt++;
                memset(vis,0,sizeof(vis));
                memset(dist,0,sizeof(dist));

                bfs(i,j);
//                for(int k=0;k<m;k++)
//                {
//                    for(int l=0;l<n;l++)
//                    {
//                        cout<<dist[k][l]<<" ";
//                    }
//                    cout<<"\n";
//                }
//
//                cout<<"\n\n\n";
                int x=grid[i][j]-'0';


                for(int k=0;k<m;k++)
                {
                    for(int l=0;l<n;l++)
                    {
                           int res=0;
                         if(dist[k][l]!=0){
                        for(int d=x;d>=1;d--){

                            if(d<=dist[k][l])
                            {
                                res+=dist[k][l]/d;
                                dist[k][l]=dist[k][l]%d;
                            }


                        }
                        dist[k][l]=res;
                         }
                        ans[k][l]+=dist[k][l];
                        if(vis[k][l])ans1[k][l]++;
                    }

                }

//                for(int k=0;k<m;k++)
//                {
//                    for(int l=0;l<n;l++)
//                    {
//                        cout<<dist[k][l]<<" ";
//                    }
//                    cout<<"\n";
//                }
//               cout<<"\n\n\n";


            }
         }
        }

        int mn=INT_MAX;
        for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){

            if(ans1[i][j]==cnt){
            mn=min(mn,ans[i][j]);
            }
        }
        }
        cout<<"Case "<<r<<": ";
         if(mn==INT_MAX)cout<<-1<<"\n";
         else cout<<mn<<"\n";


    }
}

