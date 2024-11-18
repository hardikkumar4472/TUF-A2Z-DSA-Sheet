class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        vector<int> vec(nums);
        vec.push_back(target);
        sort(vec.begin(),vec.end());
        for (int i=0;i<vec.size();i++){
            if (vec[i]==target){
                return i;
            }
        } 
        return -1;
    }
};
