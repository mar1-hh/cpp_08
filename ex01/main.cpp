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
    int sh_sp = sp.shortestSpan();
    int lo_sp = sp.longestSpan();
    if (sh_sp != INT_MAX)
        std::cout << sp.shortestSpan() << std::endl;
    if (lo_sp != INT_MAX)
        std::cout << sp.longestSpan() << std::endl;
    return 0;
}