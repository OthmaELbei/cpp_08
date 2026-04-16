#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

class Span
{
private:
    unsigned int N;
    std::vector<int> arr;

public:
    Span(unsigned int maxN);
    void addNumber(int nb);

    int shortestSpan();
    int longestSpan();
    template <typename It>
    void addRange(It begin, It end)
    {
        for (; begin != end; ++begin)
        {
            if (arr.size() >= N)
                throw std::runtime_error("Span is full");
            arr.push_back(*begin);
        }
    }
};

#endif