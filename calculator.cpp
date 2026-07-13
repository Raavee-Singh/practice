#include<iostream>
int main(){
    int a,b;
    std::cout<<"Enter the values of a and b: ";
    std::cin>>a>>b;
    char ch;
    std::cout<<"Enter a operator to work (+,-,*,/): ";
    std::cin>>ch;
    switch(ch){
        case '+':
        std::cout<<"You selected addition."<<std::endl<<"Your answer is: "<<a+b;
        break;
        case '-':
        std::cout<<"You selected subtraction."<<std::endl<<"Your answer is: "<<a-b;
        break;
        case '*':
        std::cout<<"You selected multiplication."<<std::endl<<"Your answer is: "<<a*b;
        break;
        case '/':
        std::cout<<"You selected division."<<std::endl<<"Your answer is: "<<a/b;
        break;
        default:
        std::cout<<"Wrong input. Try again."<<std::endl;
        std::cout<<"Exiting program";
        exit(0);
    }
}