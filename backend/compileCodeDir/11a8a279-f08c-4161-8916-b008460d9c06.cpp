#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair

const ll mod=1e9+7;

void solve(){
  ll ans = 0;
  string s;
  cin>>s;
  ll n = (ll)s.size(); 
  ll a[2] = {0,0};
  for( ll i = 0 ; i < n ; i++) {
      a[s[i]-'0']++;
  }
  for(ll i = 0 ; i < n ; i++) {
      if(a[!(s[i]-'0')] > 0) {
          a[!(s[i]-'0')]--;
      }
      else {
          ans = n-i;
          break;
      }
  }
  cout<<ans<<endl;
  
  
}

int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(0), cout.tie(0);
   
   int t;
   cin >> t;
   while(t--){
     solve();
   }
   // solve();
   return 0;
}