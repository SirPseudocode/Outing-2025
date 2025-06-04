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

    int n, m;
    cin >> n >> m;

    cout << "Teman-teman mendapatkan " << n / m << " potong :)" << '\n';
    cout << "Ghifari mendapatkan " << n % m << " potong :(" << '\n';
    return 0;
}