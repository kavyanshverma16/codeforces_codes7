#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >>t;
    int count = 0;
   for (size_t i = 0; i < t; i++)
   {
    int x,y,z;
    cin>>x>>y>>z;
    int sum = x+y+z;
    if (sum>=2){   count = count+1;
    }
   }
   cout<< count<<'\n';

    return 0;
}