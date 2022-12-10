#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> x;
    vector<int> y;
    int n;
    int x1,y1;
    int x2, y2;
    int x3, y3;
    int count;
    int temp;
    int total = 0;
    bool notfound;
    cin>>n;
    for(int c = 0;c<n;c++){
        
        total = 0;
        count = 0;
        cin>>x2>>y2;
        x.push_back(x2);
        y.push_back(y2);

        
        for (int i = 0;i<x.size();i++) {
            count = 0;

                
            x1 = x[i];
            x2 = x[i]-1;
            x3 = x[i]+1;

            y1 = y[i];
            
            y2 = y[i]-1;
            y3 = y[i]+1;

            try{
                for(int j = 0;j<x.size();j++){
                    if(x[j]==x1){
                        if(y[j]==y2){
                            count++;
                        }
                        if(y[j]==y3){
                            count++;
                        }
                    }
                    if(x[j]==x2){
                        if(y[j]==y1){
                            count++;
                        }
                    }
                    if(x[j]==x3){
                        if(y[j]==y1){
                            count++;
                        }
                    }
                }
                temp = x[x1]+y[y1];
            }catch(out_of_range const&){
                notfound = true;
            }

            
        
            if(count==3){
                total++;
            }
            
            
            
            

        }
        
        
        cout<<total<<endl;
    }
        
        
        
}
