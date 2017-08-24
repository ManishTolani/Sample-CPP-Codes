#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

typedef vector <int> vi;
typedef vector <long> vl;
typedef vector <long long> vll;
typedef pair<int,int> pai;

typedef pair<int,string> pas;

typedef vector <pai> vpai;
typedef vector<pas > vpas;

const ll INF=ll(1e18);
const int MOD=1e9+7;

#define wint(i) printf("%d\n",i)
#define wstr(i) printf("%s\n",i)

#define rint(i) scanf("%d",&i)

#define init(x) memset(x,0,sizeof(x))

#define zfor(i,n) for(i=0;i<n;i++)
#define fs(i,a,n) for(i=a;i<=n;i++)
#define fr(i,n,a) for(i=n;i>=a;i--)

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
		long x11,x12,y11,y12,x21,x22,y21,y22;
		cin>>x11>>y11>>x12>>y12>>x21>>y21>>x22>>y22;
		long dx1,dy1,dx2,dy2;
		dx1=x12-x11;
		dx2=x22-x21;
		dy1=y12-y11;
		dy2=y22-y21;

		if(!dy1 && !dy2 && y11==y21)
		{
			if(dx1>=0 && ((x21>=x11 && x21<=x12) || (x22>=x11 && x22<=x12)))
			{
				cout<<"yes\n";
			}
			else if(dx1<0 && ((x21<=x11 && x21>=x12) || (x22<=x11 && x22>=x12)))
				cout<<"yes\n";
			else if(dx2>=0 && ((x11>=x21 && x11<=x22) || (x12>=x21 && x12<=x22)))
			{
				cout<<"yes\n";
			}
			else if(dx2<0 && ((x11<=x21 && x11>=x22) || (x12<=x21 && x12>=x22)))
				cout<<"yes\n";
			else
				cout<<"no\n";

			continue;
		}
		else if(!dx1 && !dx2 && x11==x21)
		{
			if(dy1>=0 && ((y21>=y11 && y21<=y12) || (y22>=y11 && y22<=y12)))
			{
				cout<<"yes\n";
			}
			else if(dy1<0 && ((y21<=y11 && y21>=y12) || (y22<=y11 && y22>=y12)))
				cout<<"yes\n";
			else if(dy2>=0 && ((y11>=y21 && y11<=y22) || (y12>=y21 && y12<=y22)))
			{
				cout<<"yes\n";
			}
			else if(dy2<0 && ((y11<=y21 && y11>=y22) || (y12<=y21 && y12>=y22)))
				cout<<"yes\n";
			else
				cout<<"no\n";
			
			continue;
		}
		else if(!dy1 && !dx2 && ((x21==x12 && y21==y12) || (x21==x11 && y21==y11) || (x22==x12 && y22==y12) || (x22==x11 && y22==y11)))
		{
			cout<<"yes\n";
			continue;
		}
		else if(!dx1 && !dy2 && ((x21==x12 && y21==y12) || (x21==x11 && y21==y11) || (x22==x12 && y22==y12) || (x22==x11 && y22==y11)))
		{
			cout<<"yes\n";
			continue;
		}
		else
		{
			cout<<"no\n";
		}
	}
}
