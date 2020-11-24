#include <iostream>
using namespace std;

void merge(int array[], int mid, int start, int end)
{
    int i, j, k,temparr[5];
    i = start;
    j = mid + 1;
    k = start;

    while (i <= mid && j <= end)
    {	
        if (array[i] < array[j])
        {
            temparr[k] = array[i];
            i++; //Moving Pointer of only array that element has been sorted
            k++;
        }
        else
        {
            temparr[k] = array[j];
            j++;
            k++;
        }
    }
    while (i <= mid)  // Copying Remaining elements of array in case of different sizes
    {
        temparr[k] = array[i];
        k++;
        i++;
    }
    while (j <= end)
    {
        temparr[k] = array[j];
        k++;
        j++;
    }
    // New Array
    for (int i = start; i <= end; i++) 
    {
        array[i] = temparr[i];
    }
}

void mergeSort(int array[], int start, int end){
    int mid; 
    if(start<end){
    
    	// spliting an array  in to 2 parts
        mid = (start + end) /2;
        // Breaking Array into smaller part untill no operation to be perform left
        mergeSort(array, start, mid); //Left part
        mergeSort(array, mid+1, end); //right part
        
        merge(array, mid, start, end);
        	
    }
}
int main(){
	int arr[] = {2, 6, 7, 3, 1};
	mergeSort(arr, 0, 4);
 	cout<< "After Sorting ";
	for (int i =0 ; i<5;i++){
     	cout<<arr[i]<<" ";
	}
 	return 0;
 }
