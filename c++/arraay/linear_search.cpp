#include<iostream>
using namespace std;
int linear(int arr[],int num,int n){
    int k=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            return i;
        }
    }
    return -1;
};
int main(){
    int arr[10],num,n;
    cout<<"enter the size of the array";
    cin>>n;
    cout<<"\n";
    cout<<"enter the element you want to search";
    cin>>num;
    cout<<"\n"<<" enter "<<n<<" elements";
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        arr[i]=k;
    }
    int z=linear(arr,num,n);
    cout<<"\n at index "<<z;
    return 0;

}