////
////  boj16924.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/28.
////
//
//#include <iostream>
//#include <vector>
//#include <tuple>
//using namespace std;
//
//int n,m;
//int arr[101][101];
//bool check1[101][101];
//vector<tuple<int,int,int>> v;
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>m;
//    for (int i = 0 ; i < n ; i++){
//        for (int j = 0 ; j<m;j++){
//            char tmp;
//            cin >> tmp;
//            if (tmp=='*'){
//                arr[i][j]=2;
//            }
//            else{
//                arr[i][j]=1;
//            }
//        }
//    }
//    int count=0;
//    for (int i = 0 ; i < n ;i++){
//        for (int j = 0 ; j < m;j++){
//            if (arr[i][j]==2){
//                int tmpcount=0;
//                for (int l = 1 ;;l++){
//                    if (i-l<0||i+l>=n||j-l<0||j+l>=m){
//                        break;
//                    }
//                    if (arr[i+l][j]==2&&arr[i-l][j]==2&&arr[i][j+l]==2&&arr[i][j-l]==2){
//                        tmpcount=l;
//                    }else{
//                        break;
//                    }
//                }
//                if (tmpcount>0){
//                    v.emplace_back(make_tuple(i+1,j+1,tmpcount));
//                    count++;
//                    check1[i][j]=true;
//                    for (int k=1;k<=tmpcount;k++){
//                        check1[i+k][j]=true;
//                        check1[i-k][j]=true;
//                        check1[i][j+k]=true;
//                        check1[i][j-k]=true;
//                    }
//                }
//            }
//        }
//    }
//    for (int i = 0 ; i < n;i++){
//        for (int j = 0 ; j<m;j++){
//            if (arr[i][j]==2&&check1[i][j]==false){
//                cout<<-1<<'\n';
//                return 0;
//            }
//        }
//    }
//    
//    cout<<v.size()<<'\n';
//    for (auto i : v){
//        int x,y,length;
//        tie(x,y,length)=i;
//        cout<<x<<' '<<y<<' '<<length<<'\n';
//    }
//    
//}
