#include<bits/stdc++.h>
int main(){
    int n;
    std::cout<<"Enter the value of n: ";
    std::cin>>n;
    std::cout<<n<<std::endl;
    switch(n){
        case 1:
        std::cout<< "The number is 1.";
        break;
        case 2:
        std::cout<<"The number is 2.";
        break;
        case 3:
        std::cout<<"The number is 3.";
        break;
        default:
        std::cout<<"The number is not 1, 2 or 3.";
    }
}