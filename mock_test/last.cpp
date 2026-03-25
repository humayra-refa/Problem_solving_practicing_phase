#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n; string s;
        cin>>n>>s;
        int ans = (n+2)/2;
        int cur=1;
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]) cur++;
            else cur=1;
            ans=max(ans,cur);
        }
        cout<<ans<<"\n";
    }
    return 0;
}