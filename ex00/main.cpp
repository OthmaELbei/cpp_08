#include "easyfind.hpp"

int main()
{
    std::vector<int> arr;
    arr.push_back(12);
    arr.push_back(15);
    arr.push_back(45);
    arr.push_back(65);

    try
    {
        typename std::vector<int>::iterator it = easyfind(arr, 23);
        std::cout << "Found : " << *it << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    std::vector<int> arr2;
    arr2.push_back(12);
    arr2.push_back(15);
    arr2.push_back(45);
    arr2.push_back(65);
    try
    {
        typename std::vector<int>::iterator it = easyfind(arr2, 45);
        std::cout << "Found : " << *it << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}