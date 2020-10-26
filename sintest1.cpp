////
////  char123.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/26.
////
//
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//char aie[5]={'a','e','i','o','u'};
//int n;
//vector<int> answer;
//int ans=0;
//void go(int index,int last){
//    if (index==n){
//        ans++;
//        return;
//    }
//    if (last==0){
//        go(index+1,1);
//    }
//    else if (last==1){
//        go(index+1,0);
//        go(index+1,2);
//    }
//    else if (last==2){
//        go(index+1,0);
//        go(index+1,1);
//        go(index+1,3);
//        go(index+1,4);
//    }
//    else if (last==3){
//        go(index+1,2);
//        go(index+1,4);
//    }
//    else if (last==4){
//        go(index+1,0);
//    }
//}
//
//int main(){
//    n=3;
//    for (int i = 0 ; i<5;i++){
//        go(0,i);
//    }
//    cout<<ans;
//}
