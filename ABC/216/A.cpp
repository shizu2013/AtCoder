#include <bits/stdc++.h>
using namespace std;

int main() {
    string in;
    cin >> in;
    
    int X, Y;
    if (in.size() == 3) {
        X = stoi(in.substr(0,1));
        Y = in[2] - '0';
    }
    else {
        X = stoi(in.substr(0,2));
        Y = in[3] - '0';
    }

    if (Y <= 2) cout << X << '-' << endl;
    else if(Y <= 6) cout << X << endl;
    else cout << X << '+' << endl;
}
