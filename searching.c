#include<stdio.h>
#include<stdlib.h>

// int linearSearch(int key, int arr[10], int n){
//     for (int i=0; i<n; i++) {
//         if (arr[i] == key) {
//             return i;
//         }
//     }
//     return -1; 
// }

// int main(){
//     int n,key;
//     printf("enter the size of an array: \n");
//     scanf("%d",&n);
//     int arr[n];
//     printf("enter the elements of an array: \n");
//     for(int i=0; i<n; i++){
//         scanf("%d",&arr[i]); 
//     }
//     printf("enter the key: ");
//     scanf("%d",&key);
//     int result = linearSearch(key,arr,n);
//     if (result != -1)
//     {
//         printf("key found at index: %d",result);
//     }
//     else{
//         printf("key Not Found");
//     }
    
// }


// #include <stdio.h>
// #include<stdlib.h>
// #include<math.h>

// int main(){
//     int arr[]={1,5,3,4,2,9,7};
//     int len = sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<len-1;i++){
//         int min = i;
//         for(int j=0;j<len;j++){
//             if(arr[i]>arr[j]){
//                 i=j;
//             }
//             int temp = arr[i];
//             arr[i]= arr[min];
//             arr[min]=temp;

//         }
//     }
//     printf("the sorted array is: %d",arr);
// }




int binarySearch(int arr[], int key, int n){
    int l = arr[0];
    int r = arr[-1];
    for (int i=0; i>=0; i++){
        int mid = (l+r)/2;
        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid-1] == key){
            return (mid - 1);
        }
        if(arr[mid+1] == key){
            return (mid + 1);
        }
        else if(arr[mid]>key){
            r = mid - 2;
        }
        else{
            l = mid + 2;
        }
    }
    return -1;
}

int main(){
    int n,key;
    printf("enter the size of an array: \n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of an array: \n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]); 
    }
    printf("the array is: \n");
    for (int i= 0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("enter the key: ");
    scanf("%d",&key);
    int result = binarySearch(arr,key,n);
    if (result != -1)
    {
        printf("key found at index: %d",result);
    }
    else{
        printf("key Not Found");
    }

    
}
