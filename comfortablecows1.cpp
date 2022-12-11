#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> x;
    vector<int> y;
    int xy[1000+2][1000+2]={0};
    int neighorcount[1000+2][1000+2]={0};
    int xLocs[100000], yLocs[100000];
    int n;
    int x1,y1;
    int x2, y2;
    int x3, y3;
    int count;
    int temp;
    int total = 0;
    bool notfound;
    cin>>n;
//     for(int cow_index = 0;cow_index <n;cow_index++){
     

//       }

// for (int i=0; i<10; i++){
// for (int j =0; j<10; j++) cout <<xy[i][j];
// cout<<endl;
// }

    for(int c = 0;c<n;c++){

        cin>>x2>>y2;
        xLocs[c] = x2;
        yLocs[c] = y2; 
        xy[x2+1][y2+1]= 1;
        neighorcount[x2+1][y2+1] = xy[x2+1][y2+2]+xy[x2][y2+1]+xy[x2+2][y2+1]+xy[x2+1][y2];
       
        total = 0;
   
       for(int cow_index=0; cow_index <= c; cow_index++){
        count = 0;
        x2 = xLocs[cow_index];
        y2 = yLocs[cow_index];
        count = xy[x2+1][y2+2]+xy[x2][y2+1]+xy[x2+2][y2+1]+xy[x2+1][y2];
        //cout <<c << "checking " <<endl;
        if(count==3){
            total++;
        }
       }
       
        cout<<total<<endl;
    }
       
       
       
}
