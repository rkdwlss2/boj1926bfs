////
////  baek16968_2.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/14.
////
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//int go(string &s,int index,char last){
//    if (s.length()==index){
//        return 1;
//    }
//    char start =(s[index]=='c'?'a':'0');
//    char end =(s[index]=='c'?'z':'9');
//    int ans=0;
//    for (char i =start;i<=end;i++){
//        if (i!=last){
//            ans+=go(s,index+1,i);
//        }
//    }
//    return ans;
//}
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    string s;
//    cin >> s;
//    int ans=go(s,0,'-');
//    cout<<ans<<'\n';
//}
