#include <bits/stdc++.h>
using namespace std;

int main() {
    string N;
    cin >> N;
    while(N.size() < 4){
        N.insert(0, "0");
    }
    cout << N << endl;
}
