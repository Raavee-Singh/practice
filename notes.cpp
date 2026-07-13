#include<iostream>
int main(){
    int amount;
    std::cout<<"Enter an amount: ";
    std::cin>>amount;
    std::cout<<"You entered: "<<amount<<std::endl;
    int choice;
    std::cout<<"Enter your choice:";
    std::cin>>choice;
    switch(choice){
        case 500:
        std::cout<<"You will need "<<amount/500<<" notes.";
        break;
        case 200:
        std::cout<<"You will need "<<amount/200<<" notes.";
        break;
        case 100:
        std::cout<<"You will need "<<amount/100<<" notes.";
        break;
        case 1:
        std::cout<<"You will need "<<amount/1<<" notes.";
        break;
        default:
        std::cout<<"Wrong input. Exiting program.";
        exit(0);
    }

}