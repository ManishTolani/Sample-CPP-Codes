#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

const ll INF=ll(1e18);
const int MOD=1e9+7;


int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        int n,mx=0;
        cin>>n;
        int m=2*n;
        int a[m];
        for(int i=0;i<m;i++)
        {           
            cin>>a[i];
            mx=mx<a[i]?a[i]:mx;
        }
        sort(a,a+m);
        int p=n/2;
        cout<<a[m-p-1]<<"\n";
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" "<<a[i+n]<<" ";
        }
        cout<<"\n";
    }
}
