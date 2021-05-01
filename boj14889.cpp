////
////  boj14889.cpp
////  boj10039
////
////  Created by 강명진 on 2021/03/03.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int board[21][21];
//int n;
//vector<pair<pair<int,int>,pair<int,int>>> v;
//int small=987654321;
//bool check[21];
//void go(int index,int sum){
////    if (sum>=small)return;
//    if (index==n/2){
//        int a=v[0].second.first+v[0].second.second;
//        int b=v[1].second.first+v[1].second.second;
//        int sum=a-b;
//        if (b>a)sum=b-a;
//        if (small>sum)small=sum;
//        return;
//    }
//    for (int i = 0 ; i <n;i++){
//        for (int j = 0 ; j <n;j++){
//            if (i==j)continue;
//            if (board[i][j]==0)continue;
//            if (check[i]==true )continue;
//            if (check[j]==true )continue;
//            int tmp=board[i][j];
//            int tmp2=board[j][i];
//            check[i]=true;
//            check[j]=true;
//            v.push_back({{i,j},{tmp,tmp2}});
//            board[i][j]=0;
//            board[j][i]=0;
//            go(index+1,sum+tmp);
//            check[i]=false;
//            check[j]=false;
//            v.pop_back();
//            board[i][j]=tmp;
//            board[j][i]=tmp2;
//        }
//    }
//    
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    for (int i = 0 ; i < n ; i++){
//        for (int j = 0 ; j <n;j++){
//            cin>>board[i][j];
//        }
//    }
//    go(0,0);
//    cout<<small<<'\n';
//}
