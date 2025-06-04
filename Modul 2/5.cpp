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

    string s;
    getline(cin, s);
    int n = s.size();
    int a = 0, i = 0, u = 0, e = 0, o = 0;
    for(int i = 0 ; i < n ; i++){
        if(s[i] == 'A' || s[i] == 'a'){
            a++;
        }else if(s[i] == 'I' || s[i] == 'i'){
            i++;
        }else if(s[i] == 'U' || s[i] == 'u'){
            u++;
        }else if(s[i] == 'E' || s[i] == 'e'){
            e++;
        }else if(s[i] == 'O' || s[i] == 'o'){
            o++;
        }
    }
    cout << "A/a: " << a << '\n';
    cout << "I/i: " << i << '\n';
    cout << "U/u: " << u << '\n';
    cout << "E/e: " << e << '\n';
    cout << "O/o: " << o << '\n';
    return 0;
}