#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n; string s;
        cin>>n>>s;
        
        // count steps: n -> floor(n/2) -> ... -> 0
        int steps=0, tmp=n;
        while(tmp>0){ tmp/=2; steps++; }
        
        // max consecutive run
        int run=1, maxrun=1;
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]) run++;
            else run=1;
            maxrun=max(maxrun,run);
        }
        
        cout<<max(steps,maxrun)<<"\n";
    }
}