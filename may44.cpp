#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

const ll INF=ll(1e18);
const int MOD=1e9+7;


int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,k,p;
    cin>>n>>k>>p;
    bool a[n];
    int mx=0,c=0,ind,end,mxs=0,f=0,last=n-1;
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
        if(a[i])
        {
            c++;
        }
        else
        {
            if(f==0)
            {
                mxs=i;
            }
            c=0;
            f=1;
        }

        if(mx<c)
        {
            mx=c;
            ind=i-mx+1;
            end=i;
        }    
    }
    string s;
    cin>>s;
    int xm=mx,smx=mxs,dni=ind,dne=end,ans=mx;
    //cout<<mxs;
    for(int i=0;i<p;i++)
    {
        if(s[i]=='!')
        {
           if(a[last]==1 && last!=end)
           {
                mxs++;
           }
           else if(last==end)
           {
                mx--;
                mxs++;
           }
           else
           {
                mxs=0;
           }

           ans=mx>mxs?mx:mxs;
           if(last==0)
           {
                mx=xm,mxs=smx,ind=dni,end=dne;
                last=n-1;
           }
           else
            {
                last--;
            }
            //cout<<"last="<<last<<" ";
        }
        else
        {
            if(ans>k)
                cout<<k<<"\n";
            else
                cout<<ans<<"\n";
        }
        // cout<<mxs<<" "<<ind<<" "<<end<<"\n";
        // for (int j = 0; j < n; ++j)
        // {
        //     cout<<a[j]<<" ";
        // }
        // cout<<"\n";
    }
}
