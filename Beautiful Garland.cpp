#include<iostream>
#include<bits/stdc++.h>
# define int long long
using namespace std;
 main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
            string s;
            cin>>s;
            int count=0,flag=0;
            int l=s.size();
            if(s[0]=='G' && s[l-1]=='G')
                count++;
            if(s[0]=='R' && s[l-1]=='R')
                flag++;
            for(int i=0;i<s.size()-1;i++){
                if(s[i]=='G' && s[i+1]=='G'){
                    count++;
                }
                if(s[i]=='R' && s[i+1]=='R'){
                    flag++;
                }
            }
            if((count==1 && flag==1) || (count==0 && flag==0)){
                cout<<"yes"<<"\n";
            }
            else cout<<"no"<<"\n";
    }
}
