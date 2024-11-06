class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        // code here
        vector<int> vec;
        int n=arr.size();
        int flooor=-1;
        int ceilll=INT_MAX;
        for (int i=0;i<n;i++){
            if (arr[i]<=x){
                flooor=max(flooor,arr[i]);
            }
            if (arr[i]>=x){
                ceilll=min(ceilll,arr[i]);
            }
        }
        if (ceilll==INT_MAX){
            ceilll=-1;
        }
        vec.push_back(flooor);
        vec.push_back(ceilll);
        return vec;
    }
};
