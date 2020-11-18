////
////  boj1541.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/18.
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
//    int n=s.size();
//    int ans=0;
//    int plus=0;
//    int tmp=0;
//    bool start=true;
//    for (int i = 0 ; i < n;i++){
//        if (s[i]=='-'){
//            if (start==true){
//                plus+=tmp;
//                tmp=0;
//                ans+=plus;
//                plus=0;
//                start=false;
//            }else{
//                plus+=tmp;
//                tmp=0;
//                ans-=plus;
//                plus=0;
//            }
//        }
//        else if (s[i]=='+'){
//            plus+=tmp;
//            tmp=0;
//        }
//        else{
//            tmp*=10;
//            tmp+=s[i]-'0';
//        }
//    }
//    if (start==true){
//        plus+=tmp;
//        tmp=0;
//        ans+=plus;
//    }else{
//    plus+=tmp;
//    ans-=plus;
//    }
//    cout<<ans<<'\n';
//}
