////
////  cf-690-b.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/12/15.
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
//        string s;
//        cin>>s;
//        int len=s.size()-1;
//        bool ok=false;
//        if (s[0]=='2'&&s[1]=='0'&&s[2]=='2'&&s[3]=='0'){
//            ok=true;
//        }else if (s[0]=='2'&&s[1]=='0'&&s[2]=='2'&&s[len]=='0'){
//            ok=true;
//        }else if (s[0]=='2'&&s[1]=='0'&&s[len-1]=='2'&&s[len]=='0'){
//            ok=true;
//        }else if (s[0]=='2'&&s[len-2]=='0'&&s[len-1]=='2'&&s[len]=='0'){
//            ok=true;
//        }else if (s[len-3]=='2'&&s[len-2]=='0'&&s[len-1]=='2'&&s[len]=='0'){
//            ok=true;
//        }
//        if (ok==true){
//            cout<<"YES"<<'\n';
//        }else{
//            cout<<"NO"<<'\n';
//        }
//    }
//}
