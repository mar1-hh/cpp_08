#include "Span.hpp"

Span::Span(int N)
{
    counter = 0;
    size = N;
}

Span::Span(const Span& obj)
{
    numbers_vector = obj.numbers_vector;
    counter = obj.counter;
    size = obj.size;
}

Span& Span::operator=(Span& obj)
{
    numbers_vector = obj.numbers_vector;
    return (*this);
}

Span::~Span() {};

int Span::addNumber(int n)
{
    if (counter == size)
    {
        std::cout << "the vector is full" << std::endl;
        return -1;
    }
    std::vector<int>::iterator it = std::lower_bound(numbers_vector.begin(), numbers_vector.end(), n);
    numbers_vector.insert(it, n);
    counter++;
    return (0);
}

int Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    for (std::vector<int>::iterator i = begin; i != end; i++)
    {
        if (addNumber(*i) == -1)
            return (-1);
    }
    return (0);
}

int Span::shortestSpan()
{
    if (numbers_vector.size() < 2)
    {
        std::cout << "something wrong" << std::endl;
        return (INT_MAX);
    }
    int min_span = INT_MAX;
    for (int i = 0; i < counter - 1; i++)
    {
        if (numbers_vector[i + 1] - numbers_vector[i] < min_span)
            min_span = numbers_vector[i + 1] - numbers_vector[i];
    }
    return (min_span);
}

int Span::longestSpan()
{
    if (numbers_vector.size() < 2)
    {
        std::cout << "something wrong" << std::endl;
        return (INT_MAX);
    }
    return (numbers_vector[counter - 1] - numbers_vector[0]);
}