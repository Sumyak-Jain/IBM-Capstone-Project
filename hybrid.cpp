#include <iostream>  
using namespace std;  
class A  
{  
    protected:  
    int a;  
    public:  
    void get_a()  
    {  
       std::cout << "Enter the value of 'a' : " << std::endl;  
       cin>>a;  
    }  
};  
