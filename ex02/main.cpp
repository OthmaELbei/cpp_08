
#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    std::cout << "  --------------------------->>  " << std::endl;
    std::list<int> dd;
    dd.push_back(5);
    dd.push_back(17);
    std::cout << dd.back() << std::endl;
    dd.pop_back();
    std::cout << dd.size() << std::endl;
    dd.push_back(3);
    dd.push_back(5);
    dd.push_back(737);
    dd.push_back(0);
    std::list<int>::iterator iat = dd.begin();
    std::list<int>::iterator ide = dd.end();
    ++iat;
    --iat;
    while (iat != ide)
    {
        std::cout << *iat << std::endl;
        ++iat;
    }
    return 0;
}
