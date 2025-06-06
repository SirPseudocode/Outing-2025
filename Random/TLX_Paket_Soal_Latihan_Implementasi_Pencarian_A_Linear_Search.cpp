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

    int n,d;
    cin >> n >> d;

    pair <int,int> p[n];
    for(int  i = 0 ; i < n ; i++){
        cin >> p[i].first;
        p[i].second = i;
    }

    sort(p, p+n);

    for(int i = 0 ; i < n ; i++){
        if(p[i].first == d){
            cout << p[i].second << '\n';
            return 0;
        }
    }
    cout << -1 << '\n';
    return 0;
}