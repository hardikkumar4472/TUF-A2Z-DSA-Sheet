class Solution{
   public:
     int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        map<int, int> presum;
        int sum=0, maxlen=0;
        
        for(int i=0;i<N;i++){
            sum += A[i];
            
            if(sum==K) maxlen=max(maxlen, i+1);
            
            int rem=sum-K;
            
            if(presum.find(rem) != presum.end()){
                int len = i - presum[rem];
                maxlen = max(maxlen, len);
            }
            
            if (presum.find(sum) == presum.end()) presum[sum]= i;
        }
        
        return maxlen;
    } 
};