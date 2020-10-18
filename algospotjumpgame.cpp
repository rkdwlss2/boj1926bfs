////
////  algospotjumpgame.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/16.
////
//
//#include <iostream>
//using namespace std;
//
//int arr[101][101];
//int d[101][101];
//int m;
//int go(int x,int y){
//    if (x<0||x>=m||y<0||y>=m)return 0;
//    if (x==m-1&&y==m-1)return 1;
//    if (d[x][y]!=-1)return d[x][y];
//    return d[x][y]=go(x+arr[x][y],y)||go(x,y+arr[x][y]);
//}
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    cin >> n;
//    while (n--){
//        cin >>m;
//        for (int i = 0 ;i<m;i++){
//            fill(d[i],d[i]+101,-1);
//        }
//        for (int i = 0 ; i < m;i++){
//            for (int j = 0 ; j <m;j++){
//                cin>>arr[i][j];
//            }
//        }
//        int answer=go(0,0);
//        if (answer>=1){
//            cout<<"YES"<<'\n';
//        }
//        else{
//            cout<<"NO"<<'\n';
//        }
//        
//    }
//}
