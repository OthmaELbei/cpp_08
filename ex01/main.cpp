
#include "Span.hpp"

int main()
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
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Span ssp = Span(64);
        int arrr[] = {24, 3, 25, 52, 64};
        std::vector<int> tmep(arrr, arrr + 5);
        ssp.addRange(tmep.begin(), tmep.end());
        std::cout << ssp.shortestSpan() << std::endl;
        std::cout << ssp.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Span Spanadd(10000);

        std::vector<int> fullarrr;
        for (int i = 0; i < 10000; i++)
        {
            fullarrr.push_back(i);
        }
        Spanadd.addRange(fullarrr.begin(), fullarrr.end());
        std::cout << Spanadd.shortestSpan() << std::endl;
        std::cout << Spanadd.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Span Ssp(3);
        Ssp.addNumber(6);
        Ssp.addNumber(3);
        Ssp.addNumber(17);
        Ssp.addNumber(9);
        Ssp.addNumber(11);
        std::cout << Ssp.shortestSpan() << std::endl;
        std::cout << Ssp.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}