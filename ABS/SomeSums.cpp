#include <bits/stdc++.h>
using namespace std;

int findSumOfDigits(int n) {
    int sum = 0;
    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int N, A, B;
    cin >> N >> A >> B;
    int count = 0;
    for (int i = 0; i <= N; i++) {
        int temp = findSumOfDigits(i);
        if (A <= temp && temp <= B) {
            count += i;
        }
    }

    cout << count << endl;
}