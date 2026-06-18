#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

     string s;
     cin>>s;
     int n = s.size();
     int m = (n+1)/2;
    // for(int j =0; j<(n-1)/2+1;j++){
    //     for(int i =0; i<n/2;i++){
    //         if(s[2*i]>s[2*i+2])swap(s[2*i],s[2*i+2]);
    //     }
    // }

    // cout<<s<<'\n';
    int arr[m];
    for(int i=0;i<n;i++){
        if(i%2==0){
            arr[i/2]=s[i]-'0';
        }
    }
    for (size_t j = 0; j < m; j++){
        for(int i=0;i<m;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
    }
    // for(int i=0; i<m;i++)cout<<arr[i]<<" ";
    // cout<<'\n';
    

    
    return 0;
}