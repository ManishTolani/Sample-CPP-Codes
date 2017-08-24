#include<bits/stdc++.h>

#define init(x) memset(x,0,sizeof(x))

typedef long long ll;
const ll INF=ll(1e18);
const int MOD=1e9+7;

using namespace std;

ll fact(ll n)
{
	if(n==1)
	{
		return 1;
	}
	return fact(n-1)*n;
}



int main()
{
	freopen("inputf.in","r",stdin);
	freopen("outputf.txt","w+",stdout);
	ll n;
	cin>>n;
	ll ans=1;
	for(int i=1;i<=n;i++)
	{
		ans*=i;
	}
	cout<<fact(n)<<"\n"<<ans;
}