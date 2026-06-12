/* Solución para el problema 2218B
    The 67th 6-7 Integer Problem 
*/
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    for(int i=0; i<t; i++){
        int sum = 0, cur_max = INT_MIN;
        
        for(int j=0; j<7; j++){
            int x;
            cin >> x;
            cur_max = max(cur_max, x);
            sum += x;
        }
        
        cout << (-1*sum) + 2*cur_max << '\n';
    }

    return 0;
}


