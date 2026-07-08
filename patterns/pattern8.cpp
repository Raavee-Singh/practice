#include<bits/stdc++.h>
int main(){
    int n;
    std::cout<<"Enter the value of n: ";
    std::cin>>n;
    int i=1;
    int count=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            std::cout<<" "<<count<<" ";
            count+=1;
            j+=1;
        }
        std::cout<<std::endl;
        i+=1;

    }
}