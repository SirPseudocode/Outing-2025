#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;

void gunung(int n){
    if(n == 1){
        cout << "*\n";
        return;
    }

    gunung(n-1);
    for(int i = 0 ; i < n ; i++){
        cout << "*";
    }
    cout << '\n';
    gunung(n-1);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    short n;
    cin >> n;

    gunung(n);
    return 0;
}