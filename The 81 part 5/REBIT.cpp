#include<bits/stdc++.h>
using namespace std;
#define mod 998244353

typedef long long ll;
string st;
ll power(ll a,ll n,ll m)
{
    if(n==0)
        return 1;
    else if(n%2==0)
    {
        ll ret=power(a,n/2,m);
        return ((ret%m)*(ret%m))%m;
    }
    else
        return ((a%m)*(power(a,n-1,m)%m))%m;
}
ll add(ll a,ll b)
{
 return (a+b)%mod;
}
vector<ll> apply_operator(vector<ll> &a, vector<ll> &b,char _operator)
{
    vector<ll>res(4,0);
    if(_operator=='&')
    {
            res[0] = add(res[0] , (a[0] * b[0]) % mod);
		res[0] = add(res[0] , (a[1] * b[0]) % mod);
		res[0] = add(res[0] , (a[2] * b[0]) % mod);
		res[0] = add(res[0] , (a[3] * b[0]) % mod);

		res[0] = add(res[0] , (a[0] * b[1]) % mod);
		res[1] = add(res[1] , (a[1] * b[1]) % mod);
		res[2] = add(res[2] , (a[2] * b[1]) % mod);
		res[3] = add(res[3] , (a[3] * b[1]) % mod);

		res[0] = add(res[0] , (a[0] * b[2]) % mod);
		res[2] = add(res[2] , (a[1] * b[2]) % mod);
		res[2] = add(res[2] , (a[2] * b[2]) % mod);
		res[0] = add(res[0] , (a[3] * b[2]) % mod);

		res[0] = add(res[0] , (a[0] * b[3]) % mod);
		res[3] = add(res[3] , (a[1] * b[3]) % mod);
		res[0] = add(res[0] , (a[2] * b[3]) % mod);
		res[3] = add(res[3] , (a[3] * b[3]) % mod);
    }
    else if(_operator=='|')
    {
       	res[0] = add(res[0] , (a[0] * b[0]) % mod);
		res[1] = add(res[1] , (a[1] * b[0]) % mod);
		res[2] = add(res[2] , (a[2] * b[0]) % mod);
		res[3] = add(res[3] , (a[3] * b[0]) % mod);

		res[1] = add(res[1] , (a[0] * b[1]) % mod);
		res[1] = add(res[1] , (a[1] * b[1]) % mod);
		res[1] = add(res[1] , (a[2] * b[1]) % mod);
		res[1] = add(res[1] , (a[3] * b[1]) % mod);

		res[2] = add(res[2] , (a[0] * b[2]) % mod);
		res[1] = add(res[1] , (a[1] * b[2]) % mod);
		res[2] = add(res[2] , (a[2] * b[2]) % mod);
		res[1] = add(res[1] , (a[3] * b[2]) % mod);

		res[3] = add(res[3] , (a[0] * b[3]) % mod);
		res[1] = add(res[1] , (a[1] * b[3]) % mod);
		res[1] = add(res[1] , (a[2] * b[3]) % mod);
		res[3] = add(res[3] , (a[3] * b[3]) % mod);
    }
    else if(_operator=='^')
    {
      	res[0] = add(res[0] , (a[0] * b[0]) % mod);
		res[1] = add(res[1] , (a[1] * b[0]) % mod);
		res[2] = add(res[2] , (a[2] * b[0]) % mod);
		res[3] = add(res[3] , (a[3] * b[0]) % mod);

		res[1] = add(res[1] , (a[0] * b[1]) % mod);
		res[0] = add(res[0] , (a[1] * b[1]) % mod);
		res[3] = add(res[3] , (a[2] * b[1]) % mod);
		res[2] = add(res[2] , (a[3] * b[1]) % mod);

		res[2] = add(res[2] , (a[0] * b[2]) % mod);
		res[3] = add(res[3] , (a[1] * b[2]) % mod);
		res[0] = add(res[0] , (a[2] * b[2]) % mod);
		res[1] = add(res[1] , (a[3] * b[2]) % mod);

		res[3] = add(res[3] , (a[0] * b[3]) % mod);
		res[2] = add(res[2] , (a[1] * b[3]) % mod);
		res[1] = add(res[1] , (a[2] * b[3]) % mod);
		res[0] = add(res[0] , (a[3] * b[3]) % mod);
    }
    return res;
}
vector<ll> getRes()
{
    vector<ll>tmp(4,1);
    stack<vector<ll>>stk;
    stack<char>op_stack,par_stack;

    for(char ch:st)
    {
        if(ch=='(')
        {
            par_stack.push(ch);
        }
        else if(ch=='|' || ch=='&' || ch=='^')
        {
            op_stack.push(ch);
        }
        else if(ch=='#')
        {
            stk.push(tmp);
        }
        else
        {
           vector<ll>a=stk.top();
           stk.pop();
            vector<ll>b=stk.top();
            stk.pop();
            char _operator=op_stack.top();
            op_stack.pop();
            par_stack.pop();
            stk.push(apply_operator(a,b,_operator));
        }
    }
    return stk.top();
}
ll getExpressionCount(string &st)
{
	int cnt = 0;
	for(char ch : st)
	cnt += (ch == '#');

	return cnt;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {

      cin>>st;
      vector<ll>res=getRes();
      ll exp_cnt=getExpressionCount(st);
      ll d=power(4,exp_cnt,mod);
      d=power(d,mod-2,mod);
      cout<<(res[0]*d)%mod<<" ";
      cout<<(res[1]*d)%mod<<" ";
      cout<<(res[2]*d)%mod<<" ";
      cout<<(res[3]*d)%mod<<"\n";
    }

}

