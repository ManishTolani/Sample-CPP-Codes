#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;


#define all(a)  a.begin(),a.end()

#define gcd(a,b) std::__gcd(a,b)

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("inputf.in","r",stdin);
	freopen("outputf.txt","w",stdout);
	int t;
	cin>>t;
	while(t--)
	{
		int n,q;
		cin>>n>>q;
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		map<int,int> memo;
		for (int i = 0; i < q; ++i)
		{
			int k;
			cin>>k;
			int sum=0,p=n-1;
			if(memo.find(k)!=memo.end())
			{
				cout<<memo[k]<<"\n";
				continue;
			}

			for(int j=n-1;j>=0;j--)
			{
				if(a[j]>=k)
				{
					sum++;
					p--;
				}
				else if(k-a[j]<=p)
				{
					sum++;
					p-=(k-a[j]);
				}
				else
				{
					break;
				}
			}
			memo[k]=sum;
			cout<<sum<<"\n";
		}
	}
}
