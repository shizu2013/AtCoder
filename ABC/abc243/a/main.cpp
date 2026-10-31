#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using ll = long long;

int main() {
    int V, A, B, C;
    cin >> V >> A >> B >> C;

    int i = 0;
    while(V >= 0) {
       if (i % 3 == 0) {
           V -= A;
           if (V < 0) {
               cout << "F\n";
               return 0;
           }
       } 
       else if (i % 3 == 1) {
           V -= B;
           if (V < 0) {
               cout << "M\n";
               return 0;
           }
       }
       else V -= C;
       if (V < 0) {
           cout << "T\n";
       }
       i++;
    }
}
