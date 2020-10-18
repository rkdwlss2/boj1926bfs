//
//  programmersdeng2.cpp
//  boj1926bfs
//
//  Created by 강명진 on 2020/10/18.
//

#include <string>
#include <vector>
#include <iostream>

using namespace std;
int arr[101][101];
int N,M;
int go(int x, int y){
    if (arr[x][y]==-1)return 0;
    if (x==N&&y==M)return 1;
    if (x>N||y>M)return 0;
    if (arr[x][y]>0)return arr[x][y];
    return arr[x][y]=go(x+1,y)+go(x,y+1);
}

int solution(int m , int n , vector<vector<int>> puddles){
    M=m;
    N=n;
    for (int i =0  ;i<puddles.size();i++){
        arr[puddles[i][1]][puddles[i][0]]=-1;
    }
    
    return go(1,1);
}



int main(){

        vector<vector<int>> puddles={{2,2}};
        cout<<solution(4,3,puddles);

}


