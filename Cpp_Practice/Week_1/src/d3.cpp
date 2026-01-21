#include <vector>
#include <iostream>

int findMax(const std::vector<int>& nums) {
    // assume nums is non-empty

    if (nums.size()==0){
        return 0;
    } 

    int max{nums[0]};

    for (int i: nums){
        if (i > max){
            max = i;
        }
    }
    return max;
}

int main(){
    std::vector<int> ip1{1,2,33,3,2};
    std::cout << findMax(ip1) << '\n';
}

