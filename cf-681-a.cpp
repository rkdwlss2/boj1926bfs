////
////  cf-681-a.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/12/19.
////
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int tc;
//    cin>>tc;
//    while (tc--){
//        int n;
//        cin>>n;
//        string s1,s2;
//        cin>>s1>>s2;
//        int ans1=0,ans2=0;
//        for (int i = 0 ; i <n;i++){
//            if (s1[i]<s2[i]){
//                ans2++;
//            }else if (s1[i]>s2[i]){
//                ans1++;
//            }
//        }
//        if (ans1>ans2){
//            cout<<"RED"<<'\n';
//        }
//        else if (ans1<ans2){
//            cout<<"BLUE"<<'\n';
//        }else{
//            cout<<"EQUAL"<<'\n';
//        }
//    }
//}
