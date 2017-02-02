#include <iostream>
using namespace std;

bool is4digits (string pin){
    bool status=true;
    if(pin.length()!=4){
        status=false;
    }
    return status;
}

int main(){
    string PIN;
    cout<<"Enter a 4 digit PIN number: ";
    cin>>PIN;
    if(is4digits(PIN)==1){
        cout<<"PIN Accepted.";
    }else
    cout<<"invalid PIN.";
    cout<<endl;
    return 0;
}