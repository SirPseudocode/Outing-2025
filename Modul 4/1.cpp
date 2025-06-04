#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define uset unordered_set
#define mset multiset
using namespace std;

void tambah(int x, int y, int *z){
    *z = x + y;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a = 1,
    b = 2,
    c;
    tambah(a, b, &c);
    cout << c << '\n';
    return 0;
}