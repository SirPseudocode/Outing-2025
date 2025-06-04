#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define uset unordered_set
#define mset multiset
using namespace std;

int sequence(int n){
    if(n == 1) return 1;
    return n * n + sequence(n - 1);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a;
    cin >> a;
    cout << sequence(a) << '\n';
    return 0;
}