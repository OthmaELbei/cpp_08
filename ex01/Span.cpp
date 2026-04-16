#include "Span.hpp"

Span::Span(unsigned int maxN) : N(maxN) {}
void Span::addNumber(int nb)
{
    if (arr.size() >= N)
        throw std::runtime_error("Span is full");
    arr.push_back(nb);
}
int Span::shortestSpan()
{
    if (arr.size() < 2)
        throw std::runtime_error("No span can be found");
    std::sort(arr.begin(), arr.end());
    std::vector<int>::iterator it = arr.begin();
    int tchek = INT_MAX;
    int frst = *it;
    it++;
    while (it != arr.end())
    {
        int diff = *it - frst;
        if (diff < tchek)
        {
            tchek = diff;
        }
        frst = *it;
        it++;
    }
    return tchek;
}
int Span::longestSpan()
{
    if (arr.size() < 2)
        throw std::runtime_error("No span can be found");
    int min = *std::min_element(arr.begin(), arr.end());
    int max = *std::max_element(arr.begin(), arr.end());
    return max - min;
}
