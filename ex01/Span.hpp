#pragma once

#include <vector>
#include <algorithm>
#include <iostream>
#include  <limits.h>

class Span
{
    // private:
    public:
    std::vector<int> numbers_vector;
    int counter;
    int size;


    Span(int N);
    Span(const Span& obj);
    Span& operator=(Span& obj);
    ~Span();
    int addNumber(int n);
    int addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
    int shortestSpan();
    int longestSpan();

};