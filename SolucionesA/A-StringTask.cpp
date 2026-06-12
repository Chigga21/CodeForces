/* Solución para el problema 118A
    String Task
*/
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, res = "", vocales = "aoyeui";
    cin >> s;

    for(char c : s){  
        c = tolower(c);
        if(!vocales.contains(c)){
            res += '.';
            res += c;
        }
    }
    cout << res << '\n';
}
