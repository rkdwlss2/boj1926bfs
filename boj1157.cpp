////
////  boj1157.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/12/20.
////
//
//#include <iostream>
//#include <string>
//
//int arr[26];
//
//using namespace std;
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    string str;
//    cin>>str;
//    for (int i = 0 ; i < str.size();i++){
//        int tmp=str[i];
//        if (tmp-'A'>26){
//            arr[tmp-'a']++;
//        }else{
//            arr[tmp-'A']++;
//        }
//    }
//    int Max=-1;
//    int MaxIndex=-1;
//    for (int i = 0 ; i < 26;i++){
//        if (Max<arr[i]){
//            Max=arr[i];
//            MaxIndex=i;
//        }
//    }
//    int count=0;
//    for (int i = 0 ; i <26;i++){
//        if (Max==arr[i]){
//            count++;
//        }
//    }
//    if (count>=2){
//        cout<<'?'<<'\n';
//    }else{
//        char answer=MaxIndex+'A';
//        cout<<answer<<'\n';
//    }
//}
