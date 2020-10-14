////
////  baek16968.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/14.
////
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    string s;
//    cin>>s;
//    int n =s.size();
//    int pre=s[0]-'c';
//    int answer=1;
//    answer*=(pre==1)?10:26;
//    for (int i=1;i<n;i++){
//        int tmp=s[i]-'c';
//        if (tmp!=pre){
//            answer*=(tmp==1)?10:26;
//        }
//        else{
//            answer*=(tmp==1)?9:25;
//        }
//        pre=tmp;
//    }
//    if (n==0){
//        cout<<0<<'\n';
//    }
//    else{
//        cout<<answer<<'\n';
//    }
//}
