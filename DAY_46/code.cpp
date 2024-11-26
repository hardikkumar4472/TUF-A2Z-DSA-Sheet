class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int sz=nums.size();
        int temp=0;
        if (sz==1){
            return nums[0];
        }
        if (nums[0] !=nums[1]){
            temp=nums[0];
        }
        else if (nums[sz-1]!=nums[sz-2]){
            temp=nums[sz-1];
        }
        else {
            for (int i=1;i<sz-2;i++){
                if (nums[i]!=nums[i-1] && nums[i]!=nums[i+1]){
                    temp=nums[i];
                } 
            }
        }
        return temp;
    }
};
