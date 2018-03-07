#include <iostream>
int mul (int a, int b){
int c=a*b; 
return c;
}
int main(){
int i=0; 
int j=0;
std::cin>>i;
std::cin>>j;
int z=mul(i,j);
std::cout<<"z="<<z<<std::endl;
return 0;
}
