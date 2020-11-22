  
#include <iostream>
using namespace std;
int main(){
	
	//Variables
	int i,j,k,n,element;
	cout<< "Enter length of your Array: ";
     cin >> n;
    int arr[n];
    
     // Taking Inputs
     for (i =0 ; i<n;i++){
     	cout<< "Enter Element " << i<<":";
     	cin >> element;
		arr[i] = element;
	 }
	 
	 // Insertion Sort
	 for (i=1 ; i<n ; i++){
	 	k=arr[i] ; 
	 	for(j=i-1 ; j>=0 && k<arr[j] ; j-- ){
	 		arr[j+1]=arr[j];
		 }
		 arr[j+1]=k;
	 }
	 	cout<< "Sorted Array \n";
	  for (i =0 ; i<n;i++){
     cout<<arr[i];
	 }
}
