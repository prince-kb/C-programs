#include<stdio.h>

int binarysearch(int arr[],int l,int h,int key){
    int mid=(l+h)/2;
    if(arr[mid]==key)
        return mid;
    if(l>h)
        return -1;
    else if(arr[mid]>key)
        return binarysearch(arr,l,mid-1,key);
    else if(arr[mid]<key)
        return binarysearch(arr,mid+1,h,key);
}

int main(){
    int arr[]={3,9,34,44,58,76,999,1024};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=58;
    int a=binarysearch(arr,0,n,key);
    printf("%d found at %d position\n",key,a);

}