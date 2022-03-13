/*Program to find the largest of three numbers*/

#include <iostream>


int main(){

int a,b,c;

std::cout<<"Enter Three Numbers"<<std::endl;
std::cin>>a>>b>>c;
std::cout<<"You Entered "<<a<<b<<c<<std::endl;

if(a>=b&&a>=c){
    std::cout<<a<<" is the largest";
 
}

else if (b>=c&&b>=a){
    std::cout<<b<<" is the largest";

}

else{
    std::cout<<c<<" is the largest";
}

return 0;
}

