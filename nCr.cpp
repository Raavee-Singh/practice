#include<iostream>
int fact(int a){
    if (a == 0 || a == 1)
        return 1;
    return a*fact(a-1);

}
    
int answer(int n, int r){
    int result=(fact(n))/(fact(r)*fact(n-r));
    return result;
}

int main(){
    int n, r;
    std::cout<<"Enter n, r: ";
    std::cin>>n>>r;
    int result= answer(n,r);
    std::cout<<result<<std::endl;
}