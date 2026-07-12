#include<iostream>
int main(){
    int n=10;
    int a =0;
    int b=1;
    std::cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++){
        int next=a+b;
        std::cout<<next<<" ";
        a=b;
        b=next;
    }
}