#include<bits/stdc++.h>
#include<assert.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long ull;
#define Fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define fo(i,s,n) for(int i=s;i<n;i++)
#define mod 1000000007
void fun();
int main()
{
    Fast;
    int n;
    cin>>n;
    int s=2*n+1;
    ll arr[s];
    fo(i,1,s)
    {
        cin>>arr[i];
    }
    int m;
    cin>>m;
    int r=2*m+1;
    ll brr[r];
    fo(j,1,r)
    {
        cin>>brr[j];
    }
    //vector<ll> v;
    ll max=0;
    for(ll i=1;i<s;i+=2)
    {
        for(ll j=1;j<r;j+=2)
        {
            if(brr[j] > arr[i] && brr[j] >= arr[i+1])
            {
                //v.push_back(brr[j]-arr[i+1]);
                if(brr[j]-arr[i+1] > max)
                    max=brr[j]-arr[i+1];
                
            }
            else if(brr[j] < arr[i] && brr[j+1] <= arr[i])
            {
                //v.push_back(arr[i]-brr[j+1]);
                if(arr[i+1] - brr[j+1] > max)
                    max=arr[i+1]-brr[j+1];
            }
        }
    }
    
    
    cout<<max<<endl;
    return 0;
}