#include<bits/stdc++.h>
int main(){
    char ch;
    std::cout<<"Enter: ";
    std::cin>>ch;
    if(ch>='a'&&ch<='z'){
        std::cout<<"Lowercase"<<std::endl;
    }
    else if(ch>='A'&&ch<='Z'){
        std::cout<<"Uppercase"<<std::endl;
    }
    else if(ch>='0'&&ch<='9'){
        std::cout<<"Numeric"<<std::endl;
    }
    
}