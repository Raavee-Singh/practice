#include<bits/stdc++.h>
int main(){
    int n;
    std::cout<<"Enter the value of n: ";
    std::cin>>n;
    int i=n;
    while(i>=1){
        int j=n;
        while(j>=1){
            std::cout<<" "<<j<<" ";
            j--;
        }
        std::cout<<std::endl;
        i--;
    }

}