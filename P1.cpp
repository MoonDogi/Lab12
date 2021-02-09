#include <iostream> 

int main()
{

    int firstvalue, secondvalue; 
    int * mypointer; 
    
    mypointer = &firstvalue; 
    *mypointer = 10; 
    mypointer = &secondvalue;
    *mypointer = 20; 
    std::cout << "Firstvalue is " << firstvalue << '\n';
    std::cout << "Secondvalue is " << secondvalue << '\n';
    system("Pause");
    return 0; 
}