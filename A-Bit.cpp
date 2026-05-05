#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x=0;
    cin >> n;
    
    for (int i=0; i<n; i++){
        string s;
        cin >> s;

        if(!(s[1] == 'X')){
            s[1] == '+' ? x++ : x--;
        }
        else {
            s[2] == '+' ? x++ : x--;
        }
    }
    cout << x << '\n';

    return 0;
}
