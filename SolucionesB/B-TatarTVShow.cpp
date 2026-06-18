/* Solución para el problema 2236B
    Tatar TV Show
*/
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        map<int, int> map; 
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                map[i % k]++;
            }
        }

        bool even = true;
        for (auto &p : map) {
            if (p.second % 2 != 0) {
                even = false;
                break;
            }
        }
        cout << (even ? "YES" : "NO") << endl;
    }
}