 #include <bits/stdc++.h>
 #define ll long long
 #define ull unsigned long long
 #define uset unordered_set
 #define mset multiset
 using namespace std;
 
 int main(){
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
 
     int n;
     stack <int> s;
     cin >> n;
     while(n--){
        int temp;
        cin >> temp;
        s.push(temp);
     }
     while(!s.empty()){
        cout << s.top() << '\n';
        s.pop();
     }
     return 0;
 }