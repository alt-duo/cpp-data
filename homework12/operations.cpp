#include <iostream>
#include <stack>
using namespace std;


int main(){
    stack<int> m;
    char op, op1;
    int a, sum1, first, temp;
    cin>>first;
    first = first%10000;
    m.push(first);
    while(cin>>op>>a){

        a = a%10000;
        if(op=='+'){
            m.push(a);
        }
        else if(op=='*'){
            temp = m.top();
            m.pop();
            m.push(temp*a);
        }
    }
    while(!m.empty()){
        sum1 = sum1 + m.top();
        m.pop();
    }
    cout<<sum1<<endl;
    return 0;
}