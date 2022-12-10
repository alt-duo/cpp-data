#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> x;
    vector<int> y;
    
    int n;
    int x2, y2;
    int x1,y1;
    int count;
    int found;
    int found1;

    int total = 0;
    int temp;
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
            for(int q = 0;q<4;q++){
                
                x1 = x[i];
                y1 = y[i];
                if(q==0){
                    x1 = x[i]-1;
                }else if(q==1){
                    x1 = x[i]+1;
                }else if(q==2){
                    y1 = y[i]-1;
                }else if(q==3){
                    y1 = y[i]+1;
                }
                try{
                    for(int j = 0;j<x.size();j++){
                        if(x[j]==x1){
                            if(y[j]==y1){
                                count++;
                            }
                        }
                    }
                    temp = x[x1]+y[y1];
                    notfound = false;
                }catch(out_of_range const&){
                    notfound = true;
                }

                
            
            }
                if(count==3){
                    total++;
                }
            
            
            
            

        }
        
        
        cout<<total<<endl;
    }
        
        
        
}
