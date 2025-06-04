#include <bits/stdc++.h>
using namespace std;

void seven_segment(int angka) {
    switch (angka) {
    case 0:
        cout << "1 1 1 1 1 1 0"; break;
    case 1:
        cout << "0 1 1 0 0 0 0"; break;
    case 2:
        cout << "1 1 0 1 1 0 1"; break;
    case 3:
        cout << "1 1 1 1 0 0 1"; break;
    case 4:
        cout << "0 1 1 0 0 1 1 "; break;
    case 5:
        cout << "1 0 1 1 0 1 1"; break;
    case 6:
        cout << "1 0 1 1 1 1 1"; break;
    case 7:
        cout << "1 1 1 0 0 0 0"; break;
    case 8:
        cout << "1 1 1 1 1 1 1"; break;
    case 9:
        cout << "1 1 1 1 0 1 1"; break;
    default:
        cout << "0 0 0 0 0 0 0"; break;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    bool l1, l2, l3, l4;
    cin >> l1 >> l2 >> l3 >> l4;

    int angka = 0;
    if (l1) angka += 1;
    if (l2) angka += 2;
    if (l3) angka += 4;
    if (l4) angka += 8;

    seven_segment(angka);
    cout << '\n';

    return 0;
}
