////
////  boj1316.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/01/23.
////
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//bool arr[26];
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    cin>>n;
//    int count=0;
//    for (int i =0;i<n;i++){
//        string str;
//        cin>>str;
//        int prev=-1;
//        for (int j=0;j<26;j++){
//            arr[j]=false;
//        }
//        bool ok=true;
//        for (int j=0;j<str.size();j++){
//            int now=str[j]-'a';
//            if (prev!=now&&arr[now]==true){
//                ok=false;
//            }else{
//                prev=now;
//                arr[now]=true;
//            }
//        }
//        if (ok==true){
//            count++;
//        }
//    }
//    cout<<count<<'\n';
//}
