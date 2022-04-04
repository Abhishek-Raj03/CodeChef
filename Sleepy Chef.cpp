#include<iostream>
using namespace std;
main()
{
    int t;
    cin>>t;
    while (t--){
     int n,k;
     cin>>n>>k;
     cin.ignore();
     string s;
     cin>>s;
     int count=0,p=0;
     for(int i=0;i<n;i++){
        if(s[i]=='0'){
            count++;
        }
        else count=0;
        if(count==k){
           p+=1;
           count=0;
        }
     }
     cout<<p<<endl;
    }

}

