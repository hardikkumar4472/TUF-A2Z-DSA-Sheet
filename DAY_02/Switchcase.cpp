
class Solution {
  public:
    double switchCase(int choice, vector<double> &arr) {
        // code here
        switch(choice){
            case 1:
                return 3.14159265359*arr[0]*arr[0];
            case 2:
                return arr[0]*arr[1];
        }
    }
};
