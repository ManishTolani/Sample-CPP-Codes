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
    if(n%2==0)
    {
      n=(n/2)-1;
      cout<<n;
    }
    else
    {
      n/=2;
      cout<<n;
    }
}
