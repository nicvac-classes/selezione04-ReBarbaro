#include <iostream>
using namespace std;

int main() {
    float num1,num2,num3,max;
    cout<<"ins num1 "<<endl;
    cin>>num1;
    cout<<"ins num2 "<<endl;
    cin>>num2;
    cout<<"ins num3 "<<endl;
    cin>>num3;
    if(num1>num2){
        if(num1>num3){
            max=num1;
}else{
   max=num3;
}
   }else{
    if(num2>num3){
        max=num2;
        }else{
            max=num3;
           }
            }
            cout<<"il numero massimo é "<<max<<endl;
            }