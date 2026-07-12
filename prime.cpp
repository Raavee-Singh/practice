#include<bits/stdc++.h>
int main(){
    int n;
    int i=2;
    std::cout<<"Enter the value of n:";
    std::cin>>n;
    while(i<n){
        if(n%i==0){
            std::cout<<"not prime"<<std::endl;
            break;
        }
        else{
            std::cout<<"prime"<<std::endl;
            break;
        }
        i++;

    }
}