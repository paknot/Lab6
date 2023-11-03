#include <iostream>
#include <algorithm>
using namespace std;

void swap(int numbers[], int place1, int place2) {
    std::swap(numbers[place1], numbers[place2]);

}

int main() {
    int array[] = {1, 2, 3, 4};
    int n;
    swap(array, 2, 0);
    n = sizeof(array) / sizeof(array[0]);
				 cout<<"[ ";
    for(int i =0; i< n;i++){
      cout<<array[i]<< ", ";
      
    }
    cout<<" ]";
    return 0;
}
