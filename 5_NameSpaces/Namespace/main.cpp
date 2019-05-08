#include <iostream>

namespace awesome
{
    void greetings()
    {
        std::cout <<"Hello from another namespace called awesome" <<std::endl;
    }
}



int main()
{
    std::cout <<" Main namespace std" <<std::endl;
    awesome::greetings();
    return 0;
}
