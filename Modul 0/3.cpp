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

    int a, b;
    float c;
    cin >> a >> b >> c;

    float result = a / c + b / c;
    cout << fixed << setprecision(2) << result << '\n';
    return 0;
    
}