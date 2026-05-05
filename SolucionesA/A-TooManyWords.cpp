/* Solución para el problema 71A
    Way Too Long Words
*/
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    cin >> n;

    for(int i=0; i<n; i++){ 
        cin >> s;
        int l = s.length();

        if (l <= 10){
            cout << s << '\n';
        } else {
            s.replace(1, l-2, to_string(l-2));
            cout << s << '\n';
        }
    }

    return 0;
}