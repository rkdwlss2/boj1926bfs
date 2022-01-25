//
//  boj5128.cpp
//  boj1926bfs
//
//  Created by 강명진 on 2022/01/26.
//

#include <iostream>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    while(n--){
        string a,b;
        cin>>a>>b;
        cout<<"Distances:";
        for (int i = 0 ; i<a.size();i++){
            int tmpA,tmpB;
            tmpA=a[i]-'A';
            tmpB=b[i]-'A';
            if (tmpA<=tmpB){
                cout<<' '<<tmpB-tmpA;
               
            }else{
                cout<<' '<<tmpB+26-tmpA;
            }
        }
        cout<<'\n';
    }
}
