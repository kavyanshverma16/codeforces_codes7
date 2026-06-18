#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int x;
    long double sum=0;
    for (size_t i = 0; i < n; i++){
        cin>>x;
        sum=sum+x;
    }
    cout<< fixed << setprecision(12);
    cout<<sum/n<<'\n';
   
    return 0;
}