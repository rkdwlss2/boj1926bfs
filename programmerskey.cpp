////
////  programmerskey.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/06.
////
//
//#include <string>
//#include <iostream>
//#include <vector>
//
//using namespace std;
//int movedkey[90][90];
//int tmp[20][20];
//int n,m;
//
//void rotate(vector<vector<int>> key,int count){
//    if (count==0)return;
//    for (int i = 0 ; i < n ; i++){
//        for (int j = 0 ; j < n; j++){
//            tmp[i][j]=key[n-1-j][i];
//        }
//    }
//    count--;
//    rotate(key,count);
//}
//void moved(int x,int y){
//    for (int i =0;i<n;i++){
//        for (int j =0 ;j<n;j++){
//            movedkey[x+i][y+j]=tmp[i][j];
//        }
//    }
//}
//void removed(int x,int y){
//    for (int i =0;i<n;i++){
//        for (int j =0 ;j<n;j++){
//            movedkey[x+i][y+j]-=tmp[i][j];
//        }
//    }
//}
//bool check1(vector<vector<int>> lock){
//    for (int i = 0; i <m;i++){
//        for (int j = 0 ; j < m ;j++){
//            lock[i][j]+=movedkey[m+i][m+j];
//            
//            if (lock[i][j]!=1){
//                return false;
//            }
//        }
//    }
//    return true;
//}
//bool solution(vector<vector<int>> key, vector<vector<int>> lock) {
//    bool answer = true;
//    n=key.size();
//    m=lock.size();
//    for (int rotatenum = 1;rotatenum<=4;rotatenum++){
//        for (int movedxnum=0;movedxnum<2*m;movedxnum++){
//            for (int movedynum=0;movedynum<2*m;movedynum++){
//                rotate(key,rotatenum);
//                moved(movedxnum,movedynum);
//                bool ok =check1(lock);
//                if (ok == true){
//                    return true;
//                }
//                removed(movedxnum,movedynum);
//            }
//        }
//    }
//    
//    return false;
//}
//
//int main(void){
//    vector<vector<int>> key={{0,0,1},{0,1,0},{0,0,0}};
//    vector<vector<int>> lock={{1,1,1,1},{1,1,0,1},{1,1,1,1},{1,1,1,0}};
//    if (lock.size()==1){
//        cout<<1;
//    }else{
//    cout << solution(key, lock);
//    }
//}
