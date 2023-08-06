#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<array>
using namespace std;
void reverse(array<int,5>  arr,array<int,5> &n){
    int x;
    for(int i=arr.size()-1;i>=0;i--){
        n[arr.size()-i-1]=arr[i];
    }
}
int main(){
    array<int,5> a={1,2,3,4,5};
    array<int,5> n;
    n.fill(0);
    reverse(a,n);
    for( auto x:n){
        cout<<x<<"\n";
    }
    vector<int> v1={1,2,3};
    vector<int> v2= v1;
    reverse(v2.begin(),v2.end());
    for(auto x:v2){
    cout<<"\n"<<x;
    }
    return 0;
}