#include <bits/stdc++.h>
using namespace std;

void binser(int arr[], int l, int r, int d){
    int ans = -1;
    while(l <= r){
        int mid = l + (r - l) / 2;
        if(arr[mid] == d){
            ans = mid; 
            r = mid - 1; 
        }
        else if(arr[mid] < d){
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    cout << ans << '\n';
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int q;
    cin >> q;
    while(q--){
        int d;
        cin >> d;
        binser(arr, 0 , n - 1, d);
    }
    return 0;
}