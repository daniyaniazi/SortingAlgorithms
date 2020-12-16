  
#include <iostream>
using namespace std;
 
 int partition(int arr[], int start, int end){
	int temp;
	int pivot = arr[end];
	int pindex = start;
	for (int i = start ; i<end ; i++)
	{
		if(arr[i] <= pivot){
			temp = arr[pindex];
			arr[pindex] = arr[i];
			arr[i] = temp;
			pindex= pindex+1;
		}
	}
	temp = arr[pindex];
	arr[pindex] = arr[end];
	arr[end]= temp;
	return pindex;

}


int QuickSort(int arr[], int start, int end){
	if (start < end){
		int pindexQS = partition(arr , start , end);
		QuickSort(arr , start ,pindexQS-1);
		QuickSort(arr , pindexQS+1 ,end);
	}
	else {
		return 1;
	}
}


int main(){
	int arr[] = {2, 6, 7, 3, 1};
	int start = 0 , end = 4;
	int qs = QuickSort(arr , start ,end);
	cout << "\tApplying Quick Sort \n \t";
	for (int i =0 ; i<5;i++){
     	cout<<arr[i]<<" ";
	}
	return 0;
 }
 


