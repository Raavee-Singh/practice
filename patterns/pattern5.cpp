#include<bits/stdc++.h>
int main(){
    int n;
    std::cout<<"Enter value of n:";
    std::cin>>n;
    int i=1;
    int count=1;
    while(i<=n){
        int j=1;

        while(j<=n){
            std::cout<<" "<<count<<" ";
            count=count+1;
            j=j+1;
        }
        std::cout<<std::endl;
        i=i+1;

        
    }
}