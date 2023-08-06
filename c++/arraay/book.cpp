#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
bool ispossible(vector<int>a ,int n,int m,int mid){
    int pagesum=0;
    int student=1;
    for(int i=0;i<n;i++){
        if(pagesum+a[i]<=mid){
            pagesum+=a[i];
        }
        else{
            student++;
            if(student>m||a[i]>mid){
                return false;
            }
            pagesum=a[i];
        }
    }
    return true;
}
int main(){
    vector<int> a={10,20,30,40};
    int m =3,n=4;
    int s=0;
    int sum=0;
    for(int i=0;i<a.size();i++){
        sum+=a[i];
    }
    int e=sum;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(ispossible(a,n,m,mid)==true){
            ans=mid;
            e=mid-1;
            cout<<ans<<"tr\n";
        }
        else{
            s=mid+1;
            cout<<ans<<"fa\n";
        }
        mid=s+(e-s)/2;
    }
    cout<< ans;
    return 0;

}