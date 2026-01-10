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
    void addNumber(int n);
    int shortestSpan();
    int longestSpan();

};