//
//  boj10872.cpp
//  boj1926bfs
//
//  Created by 강명진 on 2021/01/17.
//

#include <iostream>

using namespace std;

#define lli long long int

lli factorial(lli n){
    if (n==1||n==0)return 1;
    return n*factorial(n-1);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    cout<<factorial(n)<<'\n';
}
