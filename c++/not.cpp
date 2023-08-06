#include<iostream>
using namespace std;
int main(){
    int a=2;
    int b=3;
    cout<<"not"<<(~a)<<endl;
    cout<<"and"<< (a&b)<<endl;
    cout<<"or"<< (a|b)<<endl;
    cout<<"xor"<< (a^b)<<endl;
    cout<<"left shift means multiply by 2  :- "<<(a<<2)<<endl;
    cout<<"right shift means divide by 2 :- "<<(a>>2)<<endl;
    return 0;
}
