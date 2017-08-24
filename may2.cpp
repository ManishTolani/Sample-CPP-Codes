#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

const ll INF=ll(1e18);
const int MOD=1e9+7;


int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    while(n--)
    {
        int t,mx=0;
        cin>>t;
        int a[t];
        for(int i=0;i<t;i++)
        {           
            cin>>a[i];
            mx=mx<a[i]?a[i]:mx;
        }
        cout<<t-mx<<"\n";
    }
}
