#include<stdio.h>
#include<stdlib.h>

// void bubblesort(int Arry[], int n){
//     int temp;
//     for (int i = 0; i < n-1; i++)
//     {
//         for (int j = 0; j < n-i-1; j++)
//         {
//             if (Arry[j] > Arry[j+1])
//             {
//                 temp = Arry[j];
//                 Arry[j] = Arry[j+1];
//                 Arry[j+1] = temp;
//             }
//         }
//     }
// }

// int main(){
//     int Arry[] = {5,1,4,2,8};
//     int n = 5;

//     bubblesort(Arry, n);

//     printf("Sorted array is:\n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", Arry[i]);
//     }

//     return 0;
// }


void merge(int *a,int *b,int *c, int n,int m){
    int i=0,j=0,k=0,p;
    while((i<m) && (j<n)){
        if(a[i] < b[j]){
            c[k] = a[i]; 
            i++;
        }
        else{
            c[k] = b[j];
            j++;
        }
        k++;
    }

    if(i==m){
        for(p=j;p<n;p++){
            c[k] = b[p];
            k++;
        }
    }
    else{
        for(p=i;p<m;p++){
            c[k] = a[p];
            k++;
        }
    }
}

void merge_sort(int *A, int n){
    int i,j,k,m;
    int *B,*C;
    if(n>1){
        k=n/2, m= n-k;
        B = (int *)malloc(k * sizeof(int));
        C = (int*)malloc(m * sizeof(int));
        for(i=0;i<k;i++) b[i] = a[i];
        for(j=k;j<n;j++) c[j-k] = a[j];
        merge_sort(B,k);
        merge_sort(C,m);
        merge(B,C,A,k,m);
        free(B);
        free(C);
    }
}

int main(){
    int A[]={8,6,4,2,51,95,64,35,84,82};
    int n = 10;
    int result = merge_sort(A,n);
    printf("sorted array is: %d",result);
    printf("Sorted array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    return 0;

}
