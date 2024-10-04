class Solution {
public:
    long long GCD(long long a, long long b) {
        if (b == 0) {
            return a;
        }
        return GCD(b, a % b);
    }
    vector<long long> lcmAndGcd(long long a, long long b) {
        long long gcd = GCD(a, b);
        long long lcm = (a * b) / gcd;
        return {lcm, gcd};
    }
}