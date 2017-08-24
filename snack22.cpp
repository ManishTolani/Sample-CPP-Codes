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
		int n;
		cin>>n;
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		if(n%2==0)
		{
			cout<<"no\n";
			continue;
		}
		int f=0,p=0;
		for (int i = 0; i <=n/2; i++)
		{
			
				if(a[i]!=p+1)
				{
					f=1;
					break;
				}
				else
				{
					p=a[i];
				}		
		}
		if(f==1)
		{
			cout<<"no\n";
			continue;
		}
		for (int i=(n/2)+1; i <n; i++)
		{
			
				if(a[i]!=p-1)
				{
					f=1;
					break;
				}
				else
				{
					p=a[i];
					continue;
				}		
		}
		if(f==1)
		{
			cout<<"no\n";
			continue;
		}
		else
			cout<<"yes\n";
	}
}
