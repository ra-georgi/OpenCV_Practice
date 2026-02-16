#include "binary_search_5.hpp"

void binary_search(int target, const std::vector<int>& a)
{
    int n = a.size();
    int left_idx  = 0;
    // Possible bug here as std::vector::size() returns size_t (unsigned) and
    // Because indexing uses size_t, and mixing signed/unsigned can silently convert -1 to a huge positive number in some refactors or future edits.
    int right_idx = n-1;
    int middle{0};

    while (right_idx>=left_idx)
    {
        middle = left_idx + ( (right_idx-left_idx)/2 );
        if (a[middle] == target)
        {
            std::cout << "Target found \n";
            return;
        }
        if (a[middle]>target) 
        {
            right_idx = middle - 1;
        }
        else
        {
            left_idx  = middle + 1;
        }
        // if (a[middle]<target) left_idx  = middle + 1;
    }

    std::cout << "Target not present \n";

}