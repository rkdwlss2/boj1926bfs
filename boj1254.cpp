////
////  boj1254.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/12/01.
////
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    string str;
//    cin>>str;
//    for (int i = 0 ; i <str.size();i++){
//        int left=i;
//        int right=str.size()-1;
//        if (left>right)continue;
//        bool check=true;
//        while (left<right){
//            if (str[left]!=str[right]){
//                check=false;
//                break;
//            }
//            left++;
//            right--;
//        }
//        if (check){
//            cout<<str.size()+i<<'\n';
//            return 0;
//        }
//    }
//}
