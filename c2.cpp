#include<bits/stdc++.h>
#define ull unsigned long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ull n,k,b;



        cin>>n>>k>>b;
        ull a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        if(k==0 && b==0)
        {
            cout<<n<<endl;
            continue;
        }

        int cnt=1;

        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
           ull num=a[i]*k+b;
                if(num<=a[j])
                {
                    i=j-1;
                    cnt++;
                    break;
                }
            }
        }

            cout<<cnt<<endl;
    }


    return 0;
}
