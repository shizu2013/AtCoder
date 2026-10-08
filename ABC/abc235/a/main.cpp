#include <bits/stdc++.h>
using namespace std;

int main() {
    char a, b, c;
    cin >> a >> b >> c;
    
    int sa = a - '0';
    int sb = b - '0';
    int sc = c - '0';

    cout << 100*(sa+sb+sc) + 10*(sa+sb+sc) + 1*(sa+sb+sc) << "\n";
}
