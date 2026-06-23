#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> e(n);
        int total=0;
        for(int i=0;i<n;i++){cin>>e[i]; total+=e[i];}
        
        int half=n/2; 
        int ans=INT_MAX;
        for(int mask=0;mask<(1<<n);mask++){
            if(__builtin_popcount(mask)!=half) continue;
            int sum=0;
            for(int i=0;i<n;i++)
                if(mask>>i&1) sum+=e[i];
            ans=min(ans,abs(total-2*sum));
        }
        cout<<ans<<"\n";
    }
}