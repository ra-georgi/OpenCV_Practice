#include "stacks_queues_4.hpp"

void stacks_queues()
{
    std::cout << "STACKS \n";
    std::stack<int> stk{};
    stk.push(1);                             // Amortized O(1) if implemented as dynamic array
    stk.push(2);         
    stk.push(3);

    // std::cout << stk.pop() << '\n';       // Does not work, does not return value unlike Python
    std::cout << "stk.top() "<< stk.top() << '\n'; 
    std::cout << "Stack stk has size " << stk.size() << " and thus empty status is " << stk.empty() << ". \n";  

    // For stack / queue / priority_queue :Access and removal are always TWO separate operation

    std::cout << "QUEUES \n";
    std::queue<int> q{};
    q.push(1);
    q.push(2);         
    q.push(3);    
    std::cout << "q.front(): " << q.front() << '\n'; 
    std::cout << "q.back(): "<< q.back() << '\n'; 
    std::cout << "Queue q has size " << q.size() << " and thus empty status is " << q.empty() << ". \n";  
}