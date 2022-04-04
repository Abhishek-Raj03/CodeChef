#include<iostream>
using namespace std;
#define int long long
main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int l;
        cin>>l;
        string s1;
        string s2;
        cin>>s1>>s2;
        int count=0;
        for(int j=0;j<l;j++){
                int z=0;
            int flag=0;
            for(int k=j;k<l;k++){
                if(s1[k]<s2[k]){
                   count+=k-j+1;
                   j=k;
                    break;
                }
                else if(s1[k]>s2[k]){
                    j=k;
                    break;
                }
                if(k==l-1)
                    z=1;
            }
            if(z==1)
                break;

        }
        cout<<count<<endl;
    }
    return 0;
}

