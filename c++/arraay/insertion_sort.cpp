#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void print(vector<int>a){
     for(auto x:a){
        cout<<x<<" ";
    }
    cout<<"\n";
}
int main(){
    vector<int>a={2,1,5,3,4};
    print(a);
    for(int  i=1;i<a.size();i++){
        int temp=a[i];
        int j=i-1;
        for(; j>=0;j--){
            if(a[j]>temp){
                int t=a[j+1];
                a[j+1]=a[j];
                a[j]=t;
            }
        }
        print(a);

    }
   
    return 0;
}