#include <bits/stdc++.h>
using namespace std;
int main() {
    freopen ("crossroad.in","r",stdin);
    freopen ("crossroad.out","w",stdout);
    int cows[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    int num, total = 0;
    cin>>num;
    int id, place;
    for(int i = 0;i<num;i++){
        cin>>id>>place;
        id = id-1;
        if(cows[id]==-1){
            cows[id]=place;
        }else{
            if(cows[id]==1){
                cows[id]=0;
                total++;
            }else{
                if(cows[id]==0){
                    cows[id]=1;
                    total++;
                }
            }
        }
    }
    cout<<total;
}
