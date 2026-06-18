#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    string s;
    cin>>s;
    int up;
    int low;

    for (size_t i = 0; i < s.size(); i++)
    {
        if(isupper(s[i])){
            up++;
        }else{
            low++;
        }
    }

    if(up>low){
        for (size_t i = 0; i < s.size();i++){
            
        }
        
    }else{
        
    }
    


    return 0;
}