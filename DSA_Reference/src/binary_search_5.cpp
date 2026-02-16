#include "binary_search_5.hpp"

void binary_search(int target, std::vector<int> a)
{
    int n = a.size();
    int left_idx  = 0;
    int right_idx = n-1;
    int middle{0};

    while (right_idx>left_idx)
    {
        middle = left_idx + ( (right_idx-left_idx)/2 );
        if (middle = target)
        {
            std::cout << "Target found \n";
            return;
        }
        if (middle>target) right_idx = middle - 1;
        if (middle<target) left_idx  = middle + 1;
    }

    std::cout << "Target not present \n";

}