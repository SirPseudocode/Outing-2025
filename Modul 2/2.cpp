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
    cin >> n;

    for(int i = 1 ; i <= n ; i++){
        if(i % 2 == 0){
            cout << "* ";
        }else{
            cout << i << " ";
        }
    }
    return 0;
}