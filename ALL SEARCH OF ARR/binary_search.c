#include<stdio.h>

int binarySearch(int arr[], int size, int element)
{
   int mid, low=0;
   int high=size-1;
   while(low<=high){
        mid = (low+high)/2;
        if(arr[mid] == element){
             return mid;
        }
        if(arr[mid] < element){
             low=mid + 1;
        }
        else{
             high = mid -1;
        }
   }
    return -1;
}

int main()
{
int arr[]={1,2,4,5,6,7,8,9,10,11};
int size = sizeof(arr)/sizeof(int);
int element=4455;
int searchIndex;
searchIndex = binarySearch(arr,size,element);
printf("The element is %d was found at index %d ",element, searchIndex);
return 0;
}