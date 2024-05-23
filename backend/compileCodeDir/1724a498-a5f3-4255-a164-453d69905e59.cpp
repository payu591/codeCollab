#include<bits/stdc++.h>
using namespace std;

void solve(){
  
  #include <iostream>
#include <string>

using namespace std;

int foodDivision(int n, const string& foodItems) {
    int breadCount = 0;
    int onionCount = 0;

    for (int i = 0; i < n; i++) {
        if (foodItems[i] == 'L') {
            breadCount++;
        } else {
            onionCount++;
        }

        // Check if there is a valid division
        if (breadCount != 0 && onionCount != 0 && breadCount != onionCount) {
            return i + 1;
        }
    }

    return -1; // No valid division found
}

int main() {
    int n;
    cin >> n;

    string foodItems;
    cin >> foodItems;

    int result = foodDivision(n, foodItems);

    cout << resul;

    return 0;
}

  
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