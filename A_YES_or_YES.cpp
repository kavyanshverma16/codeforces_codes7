#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string y;
        cin>>y;
        if (y=="yes"||y=="Yes"||y=="YEs"||y=="YES"||y=="yeS"||y=="yES"||y=="YeS"||y=="yEs"){
            cout<<"YES"<<'\n';
        }else{
            cout<<"NO"<<'\n';
        }
        

    }
    
    return 0;
}