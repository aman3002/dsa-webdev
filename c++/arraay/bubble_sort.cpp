#include<iostream>
#include<vector>
using namespace std;
void bubbleSort(vector<int>& arr, int n)
{   
    // Write your code here.
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j+1]<arr[j]){
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
}
int main(){
    return 0;
}
 