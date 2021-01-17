////
////  boj11655.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/12/27.
////
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//int arr[101];
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    string str;
//    getline(cin,str);
//    int n=str.size();
//    for (int i = 0 ; i < n;i++){
//        int tmp;
//        if (str[i]<='z'&&'a'<=str[i]){
//            tmp=str[i]-'a';
//            arr[i]=(tmp+13)%26+'a';
//        }
//        else if(str[i]<='Z'&&'A'<=str[i]){
//            tmp=str[i]-'A';
//            arr[i]=(tmp+13)%26+'A';
//        }else{
//            arr[i]=str[i];
//        }
//        char t=arr[i];
//        cout<<t;
//    }
//    cout<<'\n';
//}
