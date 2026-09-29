#include <iostream>

int main()
{
    for(int i = 1; i <= 100; i++){
        if(i % 3 == 0){
            std::cout << i << " Fizz ";
        }
        if(i % 5 == 0){
            std::cout << i << " Buzz ";
        }
        if(i % 3 and i % 5 == 0){
            std::cout << i << " FizzBuzz ";
        }
    }
}