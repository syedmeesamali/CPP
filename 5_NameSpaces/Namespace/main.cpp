#include <iostream>

namespace awesome
{
    void greetings()
    {
        std::cout <<"Hello from another namespace called awesome" <<std::endl;
    }
}

namespace amazing
{
    void greetings()
    {
        std::cout <<"Hello from another namespace called AmazING" <<std::endl;
    }
}

int main()
{
    std::cout <<" Main namespace std" <<std::endl;
    awesome::greetings();
    amazing::greetings();
    return 0;
}
