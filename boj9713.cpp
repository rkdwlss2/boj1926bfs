//
//  boj9713.cpp
//  boj1926bfs
//
//  Created by 강명진 on 2021/11/11.
//

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    for (int i = 0 ; i<n;i++){
        int tmp;
        cin>>tmp;
        int sum=0;
        for (int j = 1 ; j<=tmp;j+=2){
            sum+=j;
        }
        cout<<sum<<'\n';
    }
}
