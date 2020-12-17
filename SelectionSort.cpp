#include <iostream>
using namespace std;

int main(){
	int i,j,n,temp,min;
	int arr[] = {2, 6, 7, 3, 1};
	cout << "\tApplying Selection Sort \n \t";
	n=5;
	
//	SELECTION SORT
	for(i=0 ; i<n-1;i++){
		min = i; //index of min element
		
		for (j=i+1 ; j<n ; j++){
			//finding min of array
			if (arr[min] > arr[j]){
				min=j;
			}
		}
		// set the min 
		if(i!=min){
			temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
		}
	}
	
	//After sorting
	for (int k =0 ; k<5;k++){
     	cout<<arr[k]<<" ";
	}
	return 0;
}
