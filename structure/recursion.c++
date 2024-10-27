#include <iostream>
using namespace std;

int main(){
    int a=0;
    int b=1;

    int i=0,temp=0;
    while(i<6){
        temp=a+b;
        a=b;
        b=temp;
        i++;
    }
    cout<<endl<<temp<<endl;;
}