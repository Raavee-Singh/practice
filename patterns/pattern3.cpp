#include<bits/stdc++.h>
int main(){
    int n;
    std::cout<<"Enter the value of n: ";
    std::cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            std::cout<<" "<<j<<" ";
            j++;
        }
        std::cout<<std::endl;
        i++;
    }
}