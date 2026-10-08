#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main() {
    int N;
    cin >> N;
    int H[N];
    for (int i = 0; i < N; i++) {
        cin >> H[i];
    }
    
    int count = 0; 
    int maxh = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i+1; j < N; j++) { 
            if(maxh <= H[j]) {
                maxh = H[j];
                count++;
            }   
        }
        maxh = 0;
        //ここから先は関係ない
        if (i == N-1){
            cout << count << "\n";
            return 0;
        }
        cout << count << " ";
        count = 0;
    }
}
