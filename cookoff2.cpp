#include<bits/stdc++.h>
using namespace std;
#define  ll unsigned long long int
int main()
{
   ll t;cin>>t;
  while(t--)
 {
     ll n,k,b;
     cin>>n>>k>>b;
     ll a[n];
     for(ll i=0;i<n;i++)
     {

         cin>>a[i];
     }
     sort(a,a+n);
    ll i=0,j;
    ll total=1;
    ll tsum=1;
     while(i<n)
     {
         j=i+1;
         ll num;
         num=num*k;
         num=num+b;

         while(a[j]<num && j<n)
         {
             j++;

         }
         //cout<<a[i]<<" "<<num<<" ";
         i=j;
         tsum++;



     }
     cout<<tsum<<endl;

 }
return 0;
}

