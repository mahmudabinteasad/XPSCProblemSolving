#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll gcd(ll a, ll b) {
    return __gcd(a, b);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll x;
    cin >> x;
    vector<ll> divisors;
    for (ll i = 1; i * i <= x; i++) {
        if (x % i == 0) {
            divisors.push_back(i);
            if (i != x / i) {
                divisors.push_back(x / i);
            }
        }
    }
    ll best_a = 1, best_b = x;
    for (ll a : divisors) {
        ll b = x / a;
        if ((a / gcd(a, b)) * b == x) {
            if (max(a, b) < max(best_a, best_b)) {
                best_a = a;
                best_b = b;
            }
        }
    }
    cout << best_a << " " << best_b << "\n";
    return 0;
}
