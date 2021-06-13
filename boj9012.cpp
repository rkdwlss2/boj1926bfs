////
////  boj9012.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/12/22.
////
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//void checkBar(string str){
//    int count=0;
//    for (int i = 0 ; i<str.size();i++){
//        if (str[i]=='('){
//            count++;
//        }else if (str[i]==')'){
//            count--;
//        }
//        if (count<0){
//            cout<<"NO"<<'\n';
//            return;
//        }
//    }
//    if (count==0){
//        cout<<"YES"<<'\n';
//    }else{
//        cout<<"NO"<<'\n';
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int tc;
//    cin>>tc;
//    while (tc--){
//        string st;
//        cin>>st;
//        checkBar(st);
//    }
//}
