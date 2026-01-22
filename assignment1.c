#include <stdio.h>
int main() {
    int n,i;
    float sum=0,avg;
    float arr[50];
    float greatersum=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter Elememts of arrays: ");
    for(i<0;i<n;i++){
        scanf("%f",&arr[i]);
        sum+=arr[i];
    }
    avg=sum/n;

    for(i<0;i<=n;i++){
        if(arr[i]>avg){
            greatersum+=arr[i];
        }
    }
    printf("%d",greatersum);
    return 0;
}
