#include<iostream>
#include<sstream>


int main()
{
    std::istringstream istring("1 2 3 4 5 6 7 8");
    int value;
    while( istring >> value)
    {
       std::cout << value << std::endl;
    }

    return 0; 
}
