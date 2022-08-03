#include <iostream>
#include <queue>
using namespace std;
int main() {
    bool firstLetter = false;
    int uppercount = 0;
    int lowercount = 0;
    string n;
    cin>>n;
    char current;
    int length = n.length();
    for(int i = 0;i<length;i++){
        current =  n[i];
        if(current>='A'&&current<='Z'){
            if(i==0){
                firstLetter = true;
                uppercount++;
            }
            else{
                uppercount++;
            }
        }else if (current>='a'&&current<='z'){
            lowercount++;
        }
    }
    if(firstLetter&&uppercount==1&&lowercount==length-1){
        cout<<"true";
    }else if(uppercount ==length){
        cout<<"true";
    }else if(lowercount==length){
        cout<<"true";
    }else{
        cout<<"false";
    }

}