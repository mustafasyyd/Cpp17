#include <optional>
#include <iostream>

std::optional<int> calac_age(int year_of_bith)
{
    int current_year{2024};
    return (current_year-year_of_bith);
}

int main()
{
    calac_age(1997);

    return 0;
}