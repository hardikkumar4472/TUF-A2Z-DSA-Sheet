class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector <int> v1,v2,ans;
        for (int i=0;i<nums.size();i++){
            if (nums[i]>0){
                v1.push_back(nums[i]);
            }
            else{
                v2.push_back(nums[i]);
            }
        }
        int a=0,b=0;
        while (a<nums.size()/2){
            ans.push_back(v1[a]);
            a++;
            ans.push_back(v2[b]);
            b++;
        }
        return ans;
    }
};