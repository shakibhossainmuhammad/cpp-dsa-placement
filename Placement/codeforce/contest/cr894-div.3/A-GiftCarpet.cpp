#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        for(int i = 1; i<= n; i++){
            for(int j = 1; j<=m; j++){
                cout<<i<<" "<<j<<endl;
            }
            cout<<endl;
        }
    }
    return 0;
}