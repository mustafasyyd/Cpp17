#include <iostream>
#include <string>
#include <variant>


int main()
{
    std::variant<std::string, char > name;
    
    name = 'c';
    char namechar = std::get<1>(name);
    std::cout<< namechar <<"\n";

    name="mustafasayed";
    std::string namestring = std::get<0>(name);
    std::cout<< namestring <<"\n"; 

    if (auto val=std::get_if<std::string>(&name))
    {
        std::string& v= *val;
        std::cout << v << "\n";
    }
    else if (auto val=std::get_if<char>(&name))
    {
        char& v= *val;
        std::cout << v << "\n";
    }
    
    std::cout << sizeof(char) <<"\n";
    std::cout << sizeof(std::string) <<"\n";
    std::cout << sizeof(name) <<" Mentaad\n";

    return 0;
}