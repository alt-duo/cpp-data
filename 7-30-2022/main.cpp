#include <iostream>
using namespace std;
int main(){
    int r;
    char op;
    int number;
    cin>>number;
    int partr = number%10000;
    while(cin>>op){
        cin>>number;
        if(op =='+'){
            r+=partr;
            r%10000;
            partr = number%10000;
        }
        if(op=='*'){
            partr=number%10000*partr;
            partr%10000;
        }
    }
    r+=partr;
    r%=10000;
    cout<<r<<endl;
}