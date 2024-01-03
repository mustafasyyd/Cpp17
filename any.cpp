#include <any>
#include <iostream>

int main()
{

    std::any any_data;
    any_data=3.14;

    auto data = std::any_cast<double>(any_data);
    std::cout << data;
      
    if(any_data.has_value())
    {
        std::cout << "\n------------------------------------\n";
        std::cout << "OBJ has a value\n"
                  << "OBJ type is           : " << any_data.type().name() 
                  << "\n" 
                  << "OBJ value is          : " << std::any_cast<double>(any_data);
        std::cout<< "\n------------------------------------\n";
    }
    
    // try
    // {
    //     std::cout << std::any_cast<int>(any_data); //bad any cast
    // }
    // catch()
    // {

    // }

    return 0;
}
