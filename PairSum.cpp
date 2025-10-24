// C++ code to check whether any pair exists
// whose sum is equal to the given target value

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool pairInSortedRotated(vector<int> &arr, int target){
    unordered_set<int> s;
    for (int i = 0; i < arr.size(); i++){

        // Calculate the complement that added to
        // arr[i], equals the target
        int complement = target - arr[i];

        // Check if the complement exists in the set
        if (s.find(complement) != s.end())
            return true;

        // Add the current element to the set
        s.insert(arr[i]);
    }
  
    // If no pair is found
    return false;
}

int main(){
    vector<int> arr = {11, 15, 6, 8, 9, 10};
    int target = 16;
    if (pairInSortedRotated(arr, target))
        cout << "true";
    else
        cout << "false";

    return 0;
}
