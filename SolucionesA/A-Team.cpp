/* Solución para el problema 231A
    Team
*/
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int res=0;
    cin >> n;

    for(int i=0; i<n; i++){ 
        int a, b, c;
        cin >> a >> b >> c;

        if((a && b) || (b && c) || (a && c)){
            res++;
        }
    }

    cout << res << '\n';

    return 0;
}