#include "sliding_window_12.hpp"

/* SLIDING WINDOW PATTERN – DSA REFERENCE

Time Complexity → Usually O(n)
Space           → O(1) or O(k)

Idea:
    Maintain a "window" over a contiguous subarray or substring.

Window Boundaries:
    left  → start of window
    right → end of window

Operations:
    Expand window → right++
    Shrink window → left++

Two Types:
    1. Fixed-size window
    2. Variable-size window

Common Uses:
    - Subarrays
    - Substrings
    - Maximum / minimum conditions
    - Frequency tracking
*/

void sliding_window_reference()
{

    std::cout << "FIXED SIZE WINDOW\n";

    // Example: Maximum sum of subarray of size k

    std::vector<int> nums{2,1,5,1,3,2};
    int k = 3;

    int windowSum = 0;

    for (int i = 0; i < k; i++)
        windowSum += nums[i];

    int maxSum = windowSum;

    for (int right = k; right < nums.size(); right++)
    {
        windowSum += nums[right];      // add new element
        windowSum -= nums[right - k];  // remove old element

        maxSum = std::max(maxSum, windowSum);
    }

    std::cout << "Max sum (k=3): " << maxSum << '\n';



    std::cout << "\nVARIABLE SIZE WINDOW\n";

    // Example: Smallest subarray with sum >= target

    std::vector<int> arr{2,3,1,2,4,3};
    int target = 7;

    int left = 0;
    int sum = 0;
    int minLen = INT_MAX;

    for (int right = 0; right < arr.size(); right++)
    {
        sum += arr[right]; // expand window

        while (sum >= target)
        {
            minLen = std::min(minLen, right - left + 1);

            sum -= arr[left]; // shrink window
            left++;
        }
    }

    std::cout << "Min subarray length >= 7: "
              << (minLen == INT_MAX ? 0 : minLen) << '\n';



    std::cout << "\nLONGEST UNIQUE SUBSTRING\n";

    // Example: Longest substring without repeating characters

    std::string s = "abcabcbb";

    std::unordered_set<char> window;

    int leftPtr = 0;
    int longest = 0;

    for (int rightPtr = 0; rightPtr < s.size(); rightPtr++)
    {
        while (window.count(s[rightPtr]))
        {
            window.erase(s[leftPtr]);
            leftPtr++;
        }

        window.insert(s[rightPtr]);

        longest = std::max(longest, rightPtr - leftPtr + 1);
    }

    std::cout << "Longest unique substring length: "
              << longest << '\n';
}