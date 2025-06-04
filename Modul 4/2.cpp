#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define uset unordered_set
#define mset multiset
using namespace std;

struct mahasiswa{
    string nama;
    int math = -1, ipa = -1, bindo = -1, binggris = -1;
};

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    mahasiswa mhs[n];
    for(int i = 0 ; i < n ; i++){
        cin >> mhs[i].nama >> mhs[i].math >> mhs[i].ipa >> mhs[i].bindo >> mhs[i].binggris;
    }

    for(int i = 0 ; i < n ; i++){
        cout << "Nilai " << mhs[i].nama << "\n";
        if(mhs[i].math < 0) cout << "Matematika : \"TIDAK DITEMUKAN\"\n";
        else cout << "Matematika : " << mhs[i].math << "\n";
        
        if(mhs[i].ipa < 0) cout << "IPA : \"TIDAK DITEMUKAN\"\n";
        else cout << "IPA : " << mhs[i].ipa << "\n";
        
        if(mhs[i].bindo < 0) cout << "Bahasa Indonesia : \"TIDAK DITEMUKAN\"\n";
        else cout << "Bahasa Indonesia : " << mhs[i].bindo << "\n";
        
        if(mhs[i].binggris < 0) cout << "Bahasa Inggris : \"TIDAK DITEMUKAN\"\n";
        else cout << "Bahasa Inggris : " << mhs[i].binggris << '\n';
    }
}