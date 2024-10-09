class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr, int N, int P) {
        unordered_map<int,int>frequency;
        for(int num:arr){
            frequency[num]++;
        }
        for(int i=1;i<=arr.size();i++){
            arr[i-1]=frequency[i];
        }
    }
};