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

    int n, max, min;
    cin >> n;
    int arr[n+1];
    
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
        if(i == 0){
            max = arr[i];
            min = arr[i];
        }else{
            if(arr[i] > max) max = arr[i];
            if(arr[i] < min) min = arr[i];
        }
    }
    cout << "max: " << max << '\n';
    cout << "min: " << min << '\n';
    return 0;
}