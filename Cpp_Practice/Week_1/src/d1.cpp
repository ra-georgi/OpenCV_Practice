#include <vector>
#include <iostream>

int sumArray(const std::vector<int>& nums) {
    int total{0};

    for (int i: nums){
        total += i;
    }

    return total;
}


int main(){
    std::vector<int> ip1{1,2,3};
    std::cout << sumArray(ip1) << '\n';
}

