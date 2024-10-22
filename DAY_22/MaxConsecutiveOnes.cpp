class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int mx=0;
        for (int i=0;i<n;i++){
            if (nums[i]==1){
                count++;
                mx=max(mx,count);
            }
            else{
                count=0;
            }
        }
        return mx;
    }
};