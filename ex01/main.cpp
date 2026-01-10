#include "Span.hpp"

int main()
{
    Span sp = Span(5);

    std::vector<int> test;
    test.push_back(6);
    test.push_back(3);
    test.push_back(17);
    test.push_back(9);
    test.push_back(11);
    sp.addNumber(test.begin(), test.end());
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}