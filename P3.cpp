#include <iostream>

int main()
{
    int numbers[5];
    int *p;
    p = numbers;
    *p = 10;
    p++;
    *p = 20;
    p = &numbers[2];
    *p = 30;
    p = numbers + 3;
    *p = 40;
    p = numbers;
    *(p + 4) = 50;
    for (int n = 0l; n < 5; n++)
        std::cout << numbers[n] << ", ";
    system("pause");
    return 0;
}