#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    long long fib[46];
    fib[0] = 0;
    fib[1] = 1;

    for (long long i = 2; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    long long sum = 0;
    for (long long i = 0; i <= n; i++) {
        sum += fib[i];
    }

    cout << sum << endl;
    
    return 0;
}