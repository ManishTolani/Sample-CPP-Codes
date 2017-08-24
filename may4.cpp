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

        if(mx<c && c<=k)
        {
            mx=c;
            ind=i-mx+1;
            end=i;
        }    
    }
    string s;
    cin>>s;
    //cout<<mxs;
    for(int i=0;i<p;i++)
    {
        if(s[i]=='!')
        {
            if(a[last]==1)
            {
                mxs++;
                if(last==end)
                {
                    end--;
                    mx--;
                }

                if(mxs>=mx && mxs<=k)
                {
                    mx=mxs;
                    ind=0;
                    end=mxs-1;
                }
            }
            else
            {
                if(mxs>=mx)
                {
                    if(mxs>k)
                    {
                        mxs=k;
                    }
                    mx=mxs;
                    ind=1;
                    end=mxs;
                }
                mxs=0;
            }
                    if(last==0)
                        last=n-1;
                    else
                        last--;
            //cout<<"last="<<last<<" ";
        }
        else
        {
            cout<<mx<<"\n";
        }
        // cout<<mxs<<" "<<ind<<" "<<end<<"\n";
        // for (int j = 0; j < n; ++j)
        // {
        //     cout<<a[j]<<" ";
        // }
        // cout<<"\n";
    }
}
