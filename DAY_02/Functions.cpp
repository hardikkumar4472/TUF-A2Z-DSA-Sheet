// User function Template for C++

class Solution {
  public:
    vector<int> passedBy(int a, int &b) {
        // code here
        a = a + 1;
        b = b + 2;
        
        vector<int> ba;
        ba.push_back(a);
        ba.push_back(b); 
        return ba;
    }
};