#include<iostream>
#include<string>
#include<fstream>

int main()
{
    std::ifstream input;
    std::ofstream output;
    input.open("data.txt");
    if( !input.fail())
    {
        for(;;)
        {
            char c;
            input.get(c);
            if(input.eof())
                break;
            output.put(c);
        }
    }

    return 0;
}
