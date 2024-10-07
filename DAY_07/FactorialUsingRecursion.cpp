class Solution {
  public:

  void getfac(long long i,long long n , vector< long long>& ans){
      if(i>n) {
          return;
         
      }
      ans.push_back(i);
       getfac(i*(ans.size()+1),n,ans);
  }
    vector<long long> factorialNumbers(long long n) {
        vector<long long> ans;
        
        getfac(1,n,ans);
        
        return ans;
    }
};