#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
class Span
{
    private:
    unsigned int N ;
    std::vector <int> arr;
    public :
    Span(unsigned int maxN);
    void addNumber(int nb);
    
    int shortestSpan();
    int longestSpan();
};
Span::Span(unsigned int maxN) : N(maxN){}
void Span::addNumber(int nb)
{
    if(arr.size() >= N)
        throw std::runtime_error("Span is full");
    arr.push_back(nb);
}
int Span::shortestSpan()
{
      if (arr.size() < 2)
            throw std::runtime_error("No span can be found");
    std::sort(arr.begin(),arr.end());
    std::vector <int> ::iterator it = arr.begin();
    int tchek = INT_MAX;
    int frst = *it;
    it++;
    while (it != arr.end())
    {
        int diff = *it - frst;
        if(diff < tchek)
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
    int min = *std::min_element(arr.begin(),arr.end());
    int max = *std::max_element(arr.begin(),arr.end());
    return max - min;
}
   template <typename It>
    void addRange(It begin, It end)
    {
        for (; begin != end; ++begin)
        {
            if (_arr.size() >= _N)
                throw std::runtime_error("Span is full");
            arr.push_back(*begin);
        }
    }
int main ()
{
    try
    {
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}