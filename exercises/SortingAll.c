//sort
#include<stdio.h>

void printArray(int arr[],int n){
    printf("\n");
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
    printf("\n");

}
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void selection_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        int a=i;
        for (int j=i;j<n;j++){
            if(arr[j]<arr[a])
                a=j;            
        }
        swap(&arr[i],&arr[a]);
    }
}
int partition(int arr[],int l,int h){
    int i=l,j=h,k=arr[l];
    while(i<j){
        printf("i=%d j=%d k=%d ",i,j,k);
    do{i++;}
    while(arr[i]<k);
    do{j--;}
    while(arr[j]>k);
    if(i<j)
    swap(&arr[i],&arr[j]);
}
    swap(&arr[l],&arr[j]);
    return j;
}
void quicksort(int arr[],int l,int h){
    if(l<h){
    int m=partition(arr,l,h);
    quicksort(arr,l,m);
    quicksort(arr,m+1,h);
}}

void merge(int arr[],int l,int m,int h){
    int n1=m-l+1,n2=h-m,k=l;
    int arr1[n1],arr2[n2],i=0,j=0;
    for(i=0;i<n1;i++)
    arr1[i]=arr[l+i];
    for(j=0;j<n2;j++)
    arr2[j]=arr[m+j+1];
    i=0,j=0;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j])
            arr[k++]=arr1[i++];
        else arr[k++]=arr2[j++];
    }
    while(i<n1)
        arr[k++]=arr1[i++];
    while(j<n2)
        arr[k++]=arr2[j++];
    }
void mergesort(int arr[],int l,int h){
if(l<h){
    int m=(l+h)/2;
    mergesort(arr,l,m);
    mergesort(arr,m+1,h);
    merge(arr,l,m,h);
}}
void insertion_sort(int arr[],int n){
    int i=1;
    while(i<n){
        int j=i-1,k=arr[i];
        while(j>=0 && arr[j]>k){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=k;
        i++;
    }
}
int main(){
    int arr[]={2,1,45,2,67,3,-9,7,3,56},n=10;
    printArray(arr,n);
    // selection_sort(arr,n);
    quicksort(arr,0,10);
    // mergesort(arr,0,n);
    // insertion_sort(arr,n);
    printArray(arr,n);

}