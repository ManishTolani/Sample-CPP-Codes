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
		string s;
		cin>>s;
		int f=0,k=0;
		for (int i = 0; i <n; ++i)
		{
			if(s[i]=='H')
			{
				if(f==0)
					f=1;
				else
				{
					k=1;
					break;
				}
			}
			else if(s[i]=='T')
			{
				if(f==1)
					f=0;
				else
				{
					k=1;
					break;
				}
			}
			else
				continue;
		}
		if(!f && !k)
		{
			cout<<"Valid\n";
		}
		else
			cout<<"Invalid\n";
	}
}
