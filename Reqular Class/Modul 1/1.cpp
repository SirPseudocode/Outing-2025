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

    int a;
    cin >> a;
    int s = a % 10, p = a / 10 % 10, r = a /100 % 10;
    if(a == pow(s,s) + pow(p,s) + pow(r,s)) {
        cout << "Merupakan Bilangan Armstrong\n";
    } else {
        cout << "Bukan Merupakan Bilangan Armstrong\n";
    }
}