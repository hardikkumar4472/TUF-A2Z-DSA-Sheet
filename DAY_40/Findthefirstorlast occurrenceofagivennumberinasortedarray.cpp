class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> vec;
        int min=-1;
        int max=-1;
        for (int i=0;i<nums.size();i++){
            if (nums[i]==target){
                if (min==-1){
                    min=i;
                }
                max=i;
            }
        }
        vec.push_back(min);
        vec.push_back(max);
        return vec;
    }
};
