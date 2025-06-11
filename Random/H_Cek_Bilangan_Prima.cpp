#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int q;
    cin >> q;

    while(q--){
        int n;
        cin >> n;

        if(n <= 1){
            cout << "BUKAN\n";
            continue;
        }

        if(n == 2){
            cout << "YA\n";
            continue;
        }

        bool isPrime = 1;
        for(int i = 2 ; i * i <= n ; i++){
            if(n % i == 0){
                isPrime = 0;
                break;
            }
        }

        if(isPrime){
            cout << "YA\n";
        }else{
            cout << "BUKAN\n";
        }
    }
}