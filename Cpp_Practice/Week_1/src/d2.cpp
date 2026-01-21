#include <vector>
#include <iostream>

int countOccurrences(const std::vector<int>& nums, int target) {
    
    int count{0};
    for (int i: nums){
        if (i==target){
            count += 1;
        }
    }
    return count;
    // your code
}

int main(){
    std::vector<int> ip1{1,2,3,3,2};
    std::cout << countOccurrences(ip1,2) << '\n';
}

