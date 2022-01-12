////
////  boj12904.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2022/01/11.
////
//
//#include <string>
//#include <iostream>
//using namespace std;
//
//int sSize,tSize;
//string S,T;
//
//bool backTracking(string now){
//    int Size=now.size();
//    if (sSize==Size){
//        if (now==S){
//            return true;
//        }else{
//            return false;
//        }
//    }
//    bool Ok=false;
//    if (now[Size-1]=='A'){
//        string tmp="";
//        for (int i = 0 ; i<Size-1;i++){
//            tmp+=now[i];
//        }
//        if (backTracking(tmp))Ok=true;
//    }
//    if (now[Size-1]=='B'){
//        string tmp="";
//        for (int i =Size-2;i>=0;i--){
//            tmp+=now[i];
//        }
//        if (backTracking(tmp))Ok=true;
//    }
//    return Ok;
//}
//
//int main(){
//    cin>>S>>T;
//    sSize=S.size();
//    tSize=T.size();
//    cout<<backTracking(T)<<'\n';
//}
