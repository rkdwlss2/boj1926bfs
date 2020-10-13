//
//  baek2822.cpp
//  boj1926bfs
//
//  Created by 강명진 on 2020/10/13.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<pair<int,int>> arr(8);
    for (int i = 0 ; i<8;i++){
        int tmp=0;
        cin>>tmp;
        arr[i]=make_pair(tmp,i);
    }
    sort(arr.begin(),arr.end());
    reverse(arr.begin(),arr.end());
    int sum=0;
    int answer[5];
    for (int i =0;i<5;i++){
        sum+=arr[i].first;
        answer[i]=arr[i].second;
    }
    sort(answer,answer+5);
    cout<<sum<<'\n';
    for (int i = 0 ; i<5;i++){
        cout<<answer[i]+1<<' ';
    }
    
    
}
