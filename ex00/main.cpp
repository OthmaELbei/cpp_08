#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>

template <typename T>
typename T::iterator easyfind(T &arr,int nb)
{
//     it = arr.begin();
   typename T::iterator it = std::find(arr.begin(),arr.end(),nb);
    if(it != arr.end())
        return it;
    else
        throw std::runtime_error("Value not found in the container!");
}


int main()
{
    std::vector<int> arr;
    arr.push_back(12);
    arr.push_back(15);
    arr.push_back(45);
    arr.push_back(65);

    try
    {
       typename std::vector<int>::iterator it = easyfind(arr,23);
       std::cout << "Found : " << *it << std::endl;
    }
    catch(const std::exception& e)
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
       typename std::vector<int>::iterator it = easyfind(arr,45);
       std::cout << "Found : " << *it << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}