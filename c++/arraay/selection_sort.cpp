#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    vector<int> a={5,7,2,1,3};
    for(int i=0;i<a.size();i++){
        int min=i;
        for(int j=i;j<a.size();j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        int t=a[min];
        a[min]=a[i];
        a[i]=t;
    }
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}