// #include <iostream>
// using namespace std;

// const int MOD = 1e9 + 7;

// // Function to compute the modular exponentiation (a^b % MOD)
// long long mod_pow(long long base, long long exp) {
//     long long result = 1;
//     while (exp > 0) {
//         if (exp % 2 == 1)
//             result = (result * base) % MOD;
//         base = (base * base) % MOD;
//         exp /= 2;
//     }
//     return result;
// }

// // Function to compute the modular inverse of 'x' (x^(-1) % MOD)
// long long mod_inverse(long long x) {
//     return mod_pow(x, MOD - 2);
// }

// // Function to compute the binomial coefficient C(n, k) % MOD
// long long binomial_coefficient(int n, int k) {
//     long long numerator = 1;
//     for (int i = 0; i < k; ++i)
//         numerator = (numerator * (n - i)) % MOD;

//     long long denominator = 1;
//     for (int i = 1; i <= k; ++i)
//         denominator = (denominator * i) % MOD;

//     return (numerator * mod_inverse(denominator)) % MOD;
// }

// // Solve function to find the count of ways
// long long solve(int N, int K) {
//     // Calculate C(10 * K, N) % MOD
//     return binomial_coefficient(10 * K, N);
// }

// int main() {
//     int N, K;
//     cin >> N >> K;
//     cout << solve(N, K) << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// const int MOD = 1e9 + 7;

// // Function to calculate factorial modulo MOD
// long long factorial(int n) {
//     long long result = 1;
//     for (int i = 1; i <= n; ++i) {
//         result = (result * i) % MOD;
//     }
//     return result;
// }

// // Function to calculate modular inverse using Fermat's Little Theorem
// long long modInverse(long long a) {
//     long long result = 1;
//     long long exp = MOD - 2;
//     while (exp > 0) {
//         if (exp % 2 == 1) {
//             result = (result * a) % MOD;
//         }
//         a = (a * a) % MOD;
//         exp /= 2;
//     }
//     return result;
// }

// // Function to calculate nCr modulo MOD
// long long nCr(int n, int r) {
//     long long numerator = factorial(n);
//     long long denominator = (factorial(r) * factorial(n - r)) % MOD;
//     return (numerator * modInverse(denominator)) % MOD;
// }

// int main() {
//     int N, K;
//     cin >> N >> K;

//     // Calculate the answer
//     long long answer = nCr(10 * K, N);
//     cout << answer << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;
 
long long modInverse(long long a) {
    long long result = 1;
    long long exp = MOD - 2;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * a) % MOD;
        }
        a = (a * a) % MOD;
        exp /= 2;
    }
    return result;
}

long long nCrLucas(int n, int r) {
    if (r == 0) return 1;
    long long num = 1;
    long long den = 1;
    while (n > 0 || r > 0) {
        num = (num * (n % MOD)) % MOD;
        den = (den * (r % MOD)) % MOD;
        n /= MOD;
        r /= MOD;
    }
    return (num * modInverse(den)) % MOD;
}

int main() {
    int a,b,c,d,e,f;
    
    return 0;
}
