#include<iostream>
using namespace std;
int gcd(int a,int b){
   if(a==0)
    return b;
   if(b==0)
    return a;
   if(a>b)
    return gcd(b,a%b);
   else
     return gcd(a,b%a);
}
main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ans=a[0];
        for(int i=1;i<n;i++){
            ans=gcd(ans,a[i]);
        }
        for(int i=0;i<n;i++)
            cout<<a[i]/ans<<" ";
        cout<<"\n";
    }
    return 0;
}

