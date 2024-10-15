//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int largest= arr[0];
        int secondLargest=-1;
        
        for(auto it:arr)
        {
            if(largest<it)
            {
                secondLargest=largest;
                largest=it;
            }
            if(it<largest)
            {
                secondLargest=max(secondLargest,it);
            }
        }
        return secondLargest;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends