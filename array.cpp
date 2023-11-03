#include <iostream>
using namespace std;
void arr(int numbers[], int place){

   for(int i=0; i < place;i++){
     cout<<numbers[i]<< ", "; }
}
int main(){
  int tyu[] = {1, 2, 3};
  arr(tyu, 3);
}
