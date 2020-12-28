#include <iostream>
using namespace std;
int main() {
   int arr[] = {2,7,9,5,23,29,15,19,31} ;
   int n = 9;
   
   for(int gap = (n/2) ; gap >= 1 ; gap=gap / 2){
       for(int j = gap ; j < n  ; j++){
            for(int i = j-gap ; i >= 0  ; i++){
                if (arr[i+gap] > arr[i]){
                    break;
                }
                else{
                    int temp = arr[i];
                    arr[i] = arr[i+gap];
                    arr[i+gap]=temp;
                }
   }
   }
   }
   for (int k =0 ; k <n ; k++){
   
       cout<< arr[k];
       cout<<" ";
   }
    return 0;
}
