#include<iostream>
int power(){
    int a,b;
    std::cout<<"Enter the value of a and b: ";
    std::cin>>a>>b;
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    std::cout<<"Answer is: "<<ans;
    
}
int main(){
    power();
}