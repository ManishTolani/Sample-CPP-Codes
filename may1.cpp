#include<bits/stdc++.h>

using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int f=0;
		for(int i=0;i<s.length()-1;i++)
		{
			if((s[i]=='E' && s[i+1]=='C') || (s[i]=='S' && s[i+1]=='C') || (s[i]=='S' && s[i+1]=='E'))
			{
				f=1;
				break;
			}
		}
		if(!f)
		{
			cout<<"yes\n";
		}
		else
		{
			cout<<"no\n";
		}
	}
	return 0;
}