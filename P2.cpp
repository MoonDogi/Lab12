#include <iostream>


int main()
{
    int firstvalue = 5, secondvalue = 15; 
    int * p1, * p2; 
    
    p1 = &firstvalue; 
    p2 = &secondvalue; 
    *p1 = 10; 
    *p2 = *p1; 

    p1 = p2; 
    *p1 = 20; 

    std::cout << "firstvalue is " << firstvalue << '\n';
    std::cout << "Secondvalue is " << secondvalue <<'\n';
    system ("Pause");
    return 0; 

    
}