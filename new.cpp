#include<bits/stdc++.h>
int main(){
    int n;
    std::cout<<"Enter n: ";
    std::cin>>n;
    int i=0;
    int sum=0;
    while(i<=n){
        sum+=i;
        i=i+2;
    }
    std::cout<<sum<<std::endl;
}
