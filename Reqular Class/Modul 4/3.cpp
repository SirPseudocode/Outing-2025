#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define uset unordered_set
#define mset multiset
using namespace std;

void reverse(int arr[], int x){
    for(int i = 0 ; i < x / 2 ; i++){
        swap(arr[i], arr[x - i - 1]);
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int arr[n+1];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    reverse(arr, n);
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
    return 0;
}