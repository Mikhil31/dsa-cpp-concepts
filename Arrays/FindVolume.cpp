#include <iostream>
#define pi 3.14
int r=2;
        
void area(){
    float area;
    area=pi*r*r;
    std::cout<<"area is: "<<area<<std::endl;
}

class myclass
{
public:
    int a;
     void display(){
        std::cout<<"Inside func"<<std::endl;
     }    
};

int main(){

    //create obj with class "myclass"
    myclass obj;
    obj.a=50;
    obj.display();
    area();
    std::cout<<"Hello"<<std::endl;
    std::cout<<obj.a<<std::endl;
}