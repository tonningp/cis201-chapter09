#include<iostream>
#include<string>
#include<fstream>

int main()
{
    std::ifstream input;

    input.open("data.txt");
    if( !input.fail())
    {
        int line = 1;
        while(1)
        {
            std::string buffer;
            std::getline(input,buffer);
            if(input.eof())
                break;
            std::cout << line << " : " << buffer << std::endl;
            line++;
        }
    }

    return 0;
}
