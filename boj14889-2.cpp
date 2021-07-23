////
////  boj14889-2.cpp
////  boj10039
////
////  Created by 강명진 on 2021/03/18.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//int n;
//
//int board[21][21];
//bool check[21];
//int ans=987654321;
//void go(int count,int prev){
//    if (count==n)return;
//    if (count==n/2){
//        vector<int> a;
//        vector<int> b;
//        for (int i = 0 ; i < n;i++){
//            if (check[i]==true){
//                a.push_back(i);
//            }else{
//                b.push_back(i);
//            }
//        }
//        int suma=0;
//        int sumb=0;
//        for (int i = 0 ;i<n/2;i++){
//            for (int j = 0 ; j <n/2;j++){
//                suma+=board[a[i]][a[j]];
//                sumb+=board[b[i]][b[j]];
//            }
//        }
//        int tmp=suma-sumb;
//        if (sumb>suma)tmp=sumb-suma;
//        if (tmp<ans)ans=tmp;
//        return;
//    }
//    for (int i = prev+1;i<n;i++){
//        check[i]=true;
//        go(count++,i);
//        check[i]=false;
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    for (int i = 0 ; i < n;i++){
//        for (int j = 0 ; j < n;j++){
//            cin>>board[i][j];
//        }
//    }
//    go(0,-1);
//    cout<<ans<<'\n';
//    
//}
