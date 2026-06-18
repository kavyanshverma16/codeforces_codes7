#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){

        int a,b;
        cin>>a>>b;

        int count=0;
        
        // while (a%b!=0){
        //     a++;
        //     count++;
        // }
        if(a%b==0){
            cout<<count<<'\n';
        }else{
            cout<<b-(a%b)<<'\n';
        }
        
        //cout<<count<<'\n';

    }
    return 0;
}