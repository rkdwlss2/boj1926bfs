////
////  baek16637.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/14.
////
//
//#include <iostream>
//#include <stack>
//#include <vector>
//using namespace std;
//
//int board[21][21];
//int n;
//int temp2[21][21];
////int pretemp[21][21];
//int max(){
//    int max=-1;
//    for (int i = 0;i<n;i++){
//        for (int j = 0 ;j<n;j++){
//            if (max<temp2[i][j]){
//                max=temp2[i][j];
//            }
//        }
//    }
//    return max;
//}
//void sum(){
//    vector<vector<int>> temp(21);
//
//    for (int i = 0 ; i<n;i++){
//        stack<int> q;
//        for (int j =0;j<n;j++){
//            if (temp2[i][j]!=0){
//                if (q.empty()){
//                    q.push(temp2[i][j]);
//                }else{
//                    if (q.top()==temp2[i][j]){
//                        temp[i].push_back(q.top()*2);
//                        q.pop();
//                    }
//                    else{
//                        temp[i].push_back(q.top());
//                        q.pop();
//                        q.push(temp2[i][j]);
//                    }
//                }
//            }
//        }
//        int count=0;
//        while (!q.empty()){
//            count++;
//            temp[i].push_back(q.top());
//            q.pop();
//        }
//        count=n-count;
//        while (count--){
//            temp[i].push_back(0);
//        }
//    }
//
//    for (int i = 0 ; i < n;i++){
//        for (int j = 0 ;j<n;j++){
//            temp2[i][j]=temp[i][j];
//        }
//    }
//}
//
//void rotate(int dir){
//    if (dir==0){
//        return;
//    }
//    int temp[21][21];
//    for (int i=0;i<n;i++){
//        for (int j = 0 ; j<n;j++){
//            temp[i][j]=temp2[n-j-1][i];
//        }
//    }
//    for (int i=0;i<n;i++){
//        for (int j=0;j<n;j++){
//            temp2[i][j]=temp[i][j];
//        }
//    }
//    rotate(--dir);
//}
////void savepretemp(){
////    for (int i = 0 ; i<n;i++){
////        for (int j = 0 ;j<n;j++){
////            pretemp[i][j]=temp2[i][j];
////        }
////    }
////}
////void undotemp(){
////    for (int i = 0;i<n;i++){
////        for (int j = 0 ;j<n;j++){
////            temp2[i][j]=pretemp[i][j];
////        }
////    }
////}
//int simul(int index,int max1){
//    int tmp[21][21];
//    if (index==0)return max1;
//    for (int i = 0 ;i<4;i++){
//        for (int i = 0 ; i < n;i++){
//            for (int j = 0 ;j<n;j++){
//                tmp[i][j]=temp2[i][j];
//            }
//        }
//        rotate(i);
//        sum();
//        int tmpmax=max();
//        if (max1<tmpmax)max1=tmpmax;
////        rotate(4-i);
//        max1=simul(index-1,max1);
//        for (int i =0 ;i<n;i++){
//            for (int j = 0 ; j<n;j++){
//                temp2[i][j]=tmp[i][j];
//            }
//        }
//    }
//    return max1;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    for (int i = 0 ; i <n;i++){
//        for (int j =0;j<n;j++){
//            cin>>board[i][j];
//            temp2[i][j]=board[i][j];
//        }
//    }
//
//    cout<<simul(5,-1);
//}
