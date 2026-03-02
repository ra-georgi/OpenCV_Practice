#include "heap_10.hpp"

/* PRIORITY_QUEUE (BINARY HEAP) – DSA REFERENCE

Default              → Max Heap
Push                 → O(log n)
Pop                  → O(log n)
Top, size(), empty() → O(1)
Underlying DS    → Binary Heap (vector-based)

Use when:
    - Repeatedly need smallest/largest
    - Top K problems
    - Greedy selection
    - Dijkstra / Prim
    - Streaming problems   */


void priority_queue_reference()
{

    std::cout << "MAX HEAP\n";

    std::priority_queue<int> maxHeap;

    maxHeap.push(10);
    maxHeap.push(5);
    maxHeap.push(20);

    std::cout << "Top: " << maxHeap.top() << '\n';  // 20

    maxHeap.pop();  // removes 20
    std::cout << "After pop, Top: " << maxHeap.top() << '\n';


    std::cout << "\nMIN HEAP\n";

    // By default, priority_queue uses a vector internally to implement a binary heap.
    // The comparator defines who is considered “worse”.
    std::priority_queue<int, std::vector<int>, std::greater<int> > minHeap;

    minHeap.push(10);
    minHeap.push(5);
    minHeap.push(20);

    std::cout << "Top: " << minHeap.top() << '\n';  // 5


    // TOP K LARGEST ELEMENTS PATTERN, Keep heap size = k (Min Heap)

    std::cout << "\nTOP K PATTERN\n";

    std::vector<int> nums{7, 2, 9, 4, 1};
    int k = 2;
    std::priority_queue<int, std::vector<int>, std::greater<int> > topK;
    for (int x : nums)
    {
        topK.push(x);
        if (topK.size() > k)
            topK.pop();
    }

    std::cout << "K largest elements:\n";
    while (!topK.empty())
    {
        std::cout << topK.top() << " ";
        topK.pop();
    }
    std::cout << '\n';


    // HEAP OF PAIRS (Graph / Dijkstra Pattern)

    std::cout << "\nPAIR MIN HEAP\n";

    std::priority_queue<
        std::pair<int,int>,                    // {distance, node}
        std::vector<std::pair<int,int>>,
        std::greater<>
    > pq;

    pq.push({10, 1});
    pq.push({5, 2});
    pq.push({20, 3});

    auto [dist, node] = pq.top();
    std::cout << "Smallest distance: " << dist << ", Node: " << node << '\n';


    // CUSTOM COMPARATOR (STRUCT)

    struct Compare {
        bool operator()(int a, int b)
        {
            return a > b;   // makes min heap
        }
    };

    std::priority_queue<
        int,
        std::vector<int>,
        Compare
    > customMinHeap;

    customMinHeap.push(3);
    customMinHeap.push(1);
    customMinHeap.push(8);

    std::cout << "\nCustom MinHeap Top: " << customMinHeap.top() << '\n';
}

