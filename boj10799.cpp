////
////  boj10799.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/12/26.
////
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    string str;
//    getline(cin,str);
//    int n=str.size();
//    int answer=0;
//    int count=0;
//    for (int i = 0 ; i <n;i++){
//        if (str[i]=='('){
//            count++;
//        }
//        else{
//            count--;
//            if (str[i-1]=='('){
//                answer+=count;
//            }else{
//                answer++;
//            }
//        }
//    }
//    cout<<answer<<'\n';
//}
