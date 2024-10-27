#include <iostream>
using namespace std;

bool call(string& s,int start,int end){
    
    

    if(start>end){
        return true;
    }  


    if(s[start]!=s[end]){
        return false;
    }else{
        return call(s,++start,--end);
    }


}

int main(){
    string s;
    cin>>s;

    if(call(s,0,s.length()-1)){
        cout<<"string is palindrome"<<endl;
    }else{
        cout<<"string is not palindrome"<<endl;
    }
    
    
    return 0;
}