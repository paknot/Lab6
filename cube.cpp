#include <iostream>
using namespace std;
void cube(int x){
  std::cout<<x*x;
}
int main(){
  int number;
  std::cout<<"Enter a number you want cubed"<<endl;
  std::cin>>number;
  cube(number);
}
