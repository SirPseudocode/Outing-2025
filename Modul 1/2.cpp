#include <bits/stdc++.h>
using namespace std;

string sebut(int x) {
    switch (x) {
        case 1: return "Satu";
        case 2: return "Dua";
        case 3: return "Tiga";
        case 4: return "Empat";
        case 5: return "Lima";
        case 6: return "Enam";
        case 7: return "Tujuh";
        case 8: return "Delapan";
        case 9: return "Sembilan";
    }
    return "";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a;
    cin >> a;

    if (a == 0) {
        cout << "Nol\n";
        return 0;
    }

    if (a >= 100) {
        int ratus = a / 100;
        if (ratus == 1)
            cout << "Seratus";
        else
            cout << sebut(ratus) << " Ratus";
        a %= 100;
        if (a) cout << " ";
    }

    if (a >= 20) {
        cout << sebut(a / 10) << " Puluh";
        if (a % 10 != 0) cout << " " << sebut(a % 10);
    } else if (a >= 11) {
        cout << sebut(a % 10) << " Belas";
    } else if (a == 10) {
        cout << "Sepuluh";
    } else if (a > 0) {
        cout << sebut(a);
    }

    cout << endl;
    return 0;
}
