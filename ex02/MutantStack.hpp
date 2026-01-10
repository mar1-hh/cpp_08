#pragma once

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
    MutantStack();
    MutantStack(const MutantStack<T>& obj);
    MutantStack& operator=(MutantStack& obj);
    ~MutantStack();
    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin();
    iterator end();
};

#include "MutantStack.tpp"