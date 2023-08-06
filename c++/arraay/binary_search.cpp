#include<iostream>
using namespace std;
int binary(int arr[],int num, int beg,int end){
    int mid=(beg+end)/2;
    if(arr[mid]==num){
        return mid;
    }
    else if(arr[mid]>num){
        return binary(arr,num,beg,mid);
    }
    else if(arr[mid]<num){
        return binary(arr,num,mid+1,end);
    }
    return -1;
}
int main(){
     int arr[5]={1,2,3,4,5};
     int num=2;
     int z=binary(arr, num,0,5);
     cout<<z;
}