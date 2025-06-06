#include <bits/stdc++.h>
using namespace std;

int upperbound(int arr[], int n, int target) {
    int l = 0, r = n - 1, ans = n;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (arr[mid] > target) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return ans;
}

int lowerbound(int arr[], int n, int target) {
    int l = 0, r = n - 1, ans = n;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (arr[mid] >= target) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    int q;
    cin >> q;
    while (q--) {
        int x, y;
        cin >> x >> y;
        int lb = lowerbound(arr.data(), n, x);
        int ub = upperbound(arr.data(), n, y);
        cout << max(0, ub - lb) << '\n';
    }
    return 0;
}
