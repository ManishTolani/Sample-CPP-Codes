#include<bits/stdc++.h>

#define init(x) memset(x,0,sizeof(x))

typedef long long ll;
const ll INF=ll(1e18);
const int MOD=1e9+7;

using namespace std;

void bubble_sort(ll A[][2],int n ) 
{
    int temp;
    for(int k = 0; k< n-1; k++) 
	{
        for(int i = 0; i < n-k-1; i++) 
		{
            if(A[ i ][0]*A[i][1] < A[ i+1][0]*A[i+1][1] ) 
			{
                temp = A[ i ][0];
                A[ i ][0] = A[ i+1 ][0];
                A[ i + 1][0] = temp;

                temp = A[ i ][1];
                A[ i ][1] = A[ i+1 ][1];
                A[ i + 1][1] = temp;
            }
        }
    }
}

void bubble_(ll A[][2],int n ) 
{
    int temp;
    for(int k = 0; k< n-1; k++) 
	{
        for(int i = 0; i < n-k-1; i++) 
		{
            if(A[ i ][0] > A[ i+1][0] ) 
			{
                temp = A[ i ][0];
                A[ i ][0] = A[ i+1 ][0];
                A[ i + 1][0] = temp;

                temp = A[ i ][1];
                A[ i ][1] = A[ i+1 ][1];
                A[ i + 1][1] = temp;
            }
        }
    }
}



int main()
{
	freopen("inpu.in","r",stdin);
	freopen("output.txt","w+",stdout);
	ll t,t1;
	cin>>t;
	t1=1;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		ll a[n][2],b[k];
		double max=0;
		double ans=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i][0]>>a[i][1];
			ans=(3.141592653589793238462643*a[i][0]*a[i][0])+(2*3.141592653589793238462643*a[i][0]*a[i][1]);
			if(max<ans)
			{
				max=ans;
			}
		}
		if(k==1)
		{
			ans=max;
		}
		else
		{
			bubble_sort(a,n);

			bubble_(a,k);
			// for(int i=0;i<n;i++)
			// {
			// 	cout<<a[i][0]<<" "<<a[i][1]<<"\n";
			// }
			b[0]=a[0][0];
			ans=(3.141592653589793238462643*a[0][0]*a[0][0])+(2*3.141592653589793238462643*a[0][0]*a[0][1]);
			for(int i=1;i<k;i++)
			{
				//cout<<a[i][0]<<" "<<a[i][1]<<"\n\n";
				b[i]=a[i][0]*a[i][0]-a[i-1][0]*a[i-1][0];
				//cout<<ans;
				ans+=((3.141592653589793238462643*b[i])+(2*3.141592653589793238462643*a[i][0]*a[i][1]));
			}
		}
		cout<<"Case #"<<t1<<": ";
		printf("%.9lf\n",ans);
		t1++;
	}
}
