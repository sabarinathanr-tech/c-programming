#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,q;
    cin>>n>>q;
    vector<int> arr(n+1);
    for(int i=1;i<=n;i++)   cin>>arr[i];
    vector<long long> psum(n+1,0);

    for(int i=1;i<=n;i++)   psum[i]=psum[i-1]+arr[i];

    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<psum[r]-psum[l-1]<<endl;
    }


}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
}