class Solution {
public:
    int p = 1e9 + 7;
    long long power(long long x, long long y) {
        long long res = 1;    
        x = x % p; 
        if (x == 0){
            return 0; 
        }
        while (y > 0) {
        if (y & 1) res = (res*x) % p;
        y = y/2; 
        x = (x*x) % p;
      }
      return res;
    }
  
    int countGoodNumbers(long long n) {
      long long oddcount = n/2;
      long long evencount = n - oddcount;
      long long ans = ((power(4LL,oddcount) % p  * power(5LL,evencount) % p) % p);
      return (int)ans;
    }
};