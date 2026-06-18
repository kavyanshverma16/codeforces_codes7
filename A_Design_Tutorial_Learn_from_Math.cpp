#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n;
    cin>>n;
    if(n%2==1){

        int a=(n-1)/2;
        int b=(n+1)/2;

        while (a%6==1||a%6==5||b%6==1||b%6==5){
            a++;
            b--;
            
        }
        cout<<a<<" "<<b<<endl;
    }

    else if(n%2==0){

        int a=(n)/2;
        int b=(n)/2;

        while (a%6==1||a%6==5||b%6==1||b%6==5){
            a++;
            b--;

            
        }
        cout<<a<<" "<<b<<endl;
    }


}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    
    return 0;
}