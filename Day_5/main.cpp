#include <iostream>
#include "DynamicArray.cpp"

int main()
{
    DynamicArray<int> DA(10);
    
    std::cout << " adding 0 - 19 into the array:" << std::endl;

    for (int i = 0; i < 20; ++i)
    {
        DA.add(i);
    }

    std::cout << " getting first 20 elements from array" << std::endl;

    for (int i = 0; i < 20; ++i)
    {
        std::cout << DA.getByElement(i) << std::endl;
    }

    std::cout << " removing 0 - 16 from the array" << std::endl;

    for (int i = 0; i < 17; ++i)
    {
        DA.removeByElement(0);
    }
    
    std::cout << " The state of the array is [";

    for (int i = 0; i < DA.getSize(); ++i)
    {
        std::cout << " " << DA.getByElement(i);
    }

    std::cout << " ]";

    return 0;
}