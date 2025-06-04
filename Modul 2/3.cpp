#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define uset unordered_set
#define mset multiset
using namespace std;

bool isprime(int n){
    if(n < 2) return 0;
    for(int i = 2 ; i * i <= n ; i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    for(int i = 2 ; i <= n ; i++){
        if(isprime(i)){
            cout << "* ";
        }else{
            cout << i << " ";
        }
    }
}