#include <iostream>
#include <math/summator.hpp>
int main(int argc, char* argv[])
{
    std::cout << "Hello\n";
    Summator *sm = new Summator();
    std::cout << "rand: " << sm->getRand() << "\n";
    return 0;
}