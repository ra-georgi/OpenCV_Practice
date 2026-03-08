#include "two_pointers_11.hpp"

/* TWO POINTERS PATTERN – DSA REFERENCE

Time Complexity → Usually O(n)
Space           → O(1)

Idea: Use two indices to traverse a sequence.

Pointer Types:
    1. Opposite direction  → left++, right--
    2. Same direction      → slow / fast
    3. Sliding window      → expand / shrink

Requires:
    - Often sorted input
    - Linear scanning
*/


void two_pointers_reference()
{

    std::cout << "OPPOSITE DIRECTION POINTERS\n";

    // Example: Check if array has pair with given sum  (ONLY WORKS BECAUSE ARRAY IS SORTED)
    std::vector<int> nums{1, 2, 4, 6, 10};
    int target = 8;

    int left = 0;
    int right = nums.size() - 1;

    while (left < right)
    {
        int sum = nums[left] + nums[right];

        if (sum == target)
        {
            std::cout << "Pair found: "
                      << nums[left] << ", "
                      << nums[right] << '\n';
            break;
        }
        else if (sum < target)
            left++;
        else
            right--;
    }



    std::cout << "\nSLOW / FAST POINTERS\n";

    // Example: Remove duplicates from sorted array

    std::vector<int> arr{1,1,2,2,3,4,4};

    int slow = 0;

    for (int fast = 1; fast < arr.size(); fast++)
    {
        if (arr[fast] != arr[slow])
        {
            slow++;
            arr[slow] = arr[fast];
        }
    }

    std::cout << "Unique elements:\n";
    for (int i = 0; i <= slow; i++)
        std::cout << arr[i] << " ";

    std::cout << '\n';



    std::cout << "\nPALINDROME CHECK\n";

    std::string s = "racecar";

    int l = 0;
    int r = s.size() - 1;

    bool isPalindrome = true;

    while (l < r)
    {
        if (s[l] != s[r])
        {
            isPalindrome = false;
            break;
        }
        l++;
        r--;
    }

    std::cout << "Palindrome: "
              << (isPalindrome ? "Yes" : "No") << '\n';



    std::cout << "\nPARTITION (DUTCH FLAG STYLE)\n";

    // Move all zeros to end

    std::vector<int> nums2{0,1,0,3,12};

    int slowPtr = 0;

    for (int fastPtr = 0; fastPtr < nums2.size(); fastPtr++)
    {
        if (nums2[fastPtr] != 0)
        {
            std::swap(nums2[slowPtr], nums2[fastPtr]);
            slowPtr++;
        }
    }

    std::cout << "After moving zeros:\n";

    for (int x : nums2)
        std::cout << x << " ";

    std::cout << '\n';
}