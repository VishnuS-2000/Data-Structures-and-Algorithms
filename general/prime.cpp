#include <iostream>
int main(){
    
    int n;
    std::cout<<"Enter n:"<<std::endl;
    std::cin>>n;

    for(int i=2;i<n;i++){
        if(n%i==0){
            std::cout<<n<<" is not prime number";
            exit(0);
            break;

        }
            
    }

    std::cout<<n<<" is a prime number";



    return 0;
}