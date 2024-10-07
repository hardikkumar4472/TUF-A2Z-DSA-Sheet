class Solution {
  public:
    long long sumOfSeries(long long n) {
        // code here
        
        long long s = n*(n+1)/2;
        long long sos = s*s;
        return sos;
    }
};