#include <cstdlib>
#include <iostream>
#include <random>
int main(int argc, char** argv)
{
    std::random_device r;
    std::default_random_engine rand(r());
    std::uniform_int_distribution<int> uniform_dist(0, 100);
    if(argc == uniform_dist(rand))
    {
        std::cout << "Congratulations, you've won!\n";
    }
    else 
    {
        std::cout << "Error: Incorrect number of arguments passed\n";
    }
    return EXIT_SUCCESS;
}
