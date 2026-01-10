#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() {};

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& obj) : std::stack<T>(obj) {};

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(MutantStack &obj)
{
    std::stack<T>::operator=(obj);
}

template <typename T>
MutantStack<T>::~MutantStack() {};

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return (this->c.end());
}
