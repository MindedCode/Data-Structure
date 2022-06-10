#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    for(int i=1;i<=8;i++){

        if(arr[i]%2==1){
            cout<<arr[i]<<" ";
        }else{
            continue;
        }
        
        
        
    }
    return 0;
}