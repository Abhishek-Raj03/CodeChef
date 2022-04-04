#include<iostream>
using namespace std;
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    while(n!=42){
        cout<<n<<"\n";

        cin>>n;
    }
    return 0;
}
