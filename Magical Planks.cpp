#include<iostream>
#include<unordered_map>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--){
       unordered_map<char,int> m;
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
                while(i+1<n&&s[i]==s[i+1]){
                    i++;
                }

                m[s[i]]++;

        }
        cout<<min(m['B'],m['W']);
        cout<<"\n";
    }
}
