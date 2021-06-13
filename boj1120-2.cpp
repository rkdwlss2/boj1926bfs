//
//  boj1120-2.cpp
//  boj1926bfs
//
//  Created by 강명진 on 2021/06/13.
//

#include <iostream>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a,b;
    cin>>a>>b;
    int n,m,between;
    n=a.size();
    m=b.size();
    between=m-n;
    int answer=987654321;
    for (int i =0;i<=between;i++){
        int tmp=0;
        for (int j = 0 ; j <n;j++){
            if (a[j]!=b[j+i])tmp++;
        }
        if (answer>tmp)answer=tmp;
    }
    cout<<answer<<'\n';
}
