# WorstRandomNumberGuessingGame

The random number guessing game is a great beginners project for learning programming. I made it obnoxious.

Normally, the random number guessing game is simple. You generate a random number, get input from the user, check if it's the same, if it is, they win, if it's not, they guess again. Most people add on a system to determine if it's higher or lower too. A simple implementation might look something like this.

```c++
#include <cstdlib>
#include <iostream>
#include <random>
int main(int argc, char** argv)
{
	std::random_device r;
    std::default_random_engine rand(r());
    std::uniform_int_distribution<int> uniform_dist(0, 100);
    int number = uniform_dist(rand);
    int guess;
    std::cin >> guess;
    while(guess != number)
    {
        if(guess > number) std::cout << "Lower\n";
        else std::cout << "Higher\n";
        std::cin >> guess;
    }
    std::cout << "Congratulations, you've won!\n";
    return EXIT_SUCCESS;
}
```

This, however, is too user friendly. They don't have to restart the program to make a guess, and they can make many guesses, eventually getting it right. So I decided to change that, by generating a random number, and using the argc as the guess. 
