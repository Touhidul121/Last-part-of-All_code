#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    int mxl[n],mxr[n];
    mxl[0]=arr[0];
    for(int i=1;i<n;i++)
        mxl[i]=max(mxl[i-1],arr[i]);

    mxr[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)
        mxr[i]=max(mxr[i+1],arr[i]);

    int water[n];

    for(int i=0;i<n;i++)
        water[i]=min(mxl[i],mxr[i])-arr[i];

    int sum=0;
    int mx=0;
    for(int i=0;i<n;i++){
        mx=max(mx,water[i]);
        sum+=water[i];
    }
    cout<<mx<<"\n";
    cout<<sum<<"\n";


}
