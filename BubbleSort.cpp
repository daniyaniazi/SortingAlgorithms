#include<iostream>
using namespace std;

int main(){
	int n,temp,element;
	cout<< "Enter length of your Array: ";
    cin >> n;
    int arr[n];
    int p =0,i,j;
    
    // Taking Inputs
    for (int x=0 ; x<n ; x++){
     	cout<< "Enter Element " << x<<":";
     	cin >> element;
		arr[x] = element;
	}
	
	//Before sorting
	cout<< "\nBefore Sorting : " ;
	while(p<n){
		cout << arr[p];
		p++;
	}
	p = 0 ;
	//Bubble Sort
	for (i=0 ; i<n-1;i++) 
	{
	 	for (j=0 ; j<n-(i+1) ; j++)
		{
	 		if(arr[j] > arr[j+1]){
	 			temp = arr[j];
	 			arr[j] = arr[j+1];
	 			arr[j+1] = temp;
			}
		} 
	}
	//After sorting
	cout<< "\nAfter Sorting : " ;
	while(p<n){
		cout << arr[p];
		p++;
	}

	return 0;		
}

