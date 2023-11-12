#include <iostream>

int main()
{
    // Числа Фибоначи (первые 5 чисел ряда)
    int f1 = 0;
    int f2 = 1;
    int f3 = f1 + f2;
    int f4 = f3 + f2;
    int f5 = f4 + f3;
 
    // Вывод чисел в консоль
    std::cout<<"Fibonacchi number 1: "<<f1<<std::endl;
    std::cout<<"Fibonacchi number 2: "<<f2<<std::endl;
    std::cout<<"Fibonacchi number 3: "<<f3<<std::endl;
    std::cout<<"Fibonacchi number 4: "<<f4<<std::endl;
    std::cout<<"Fibonacchi number 5: "<<f5<<std::endl;
}