////
////  boj10610.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/26.
////
//
//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    string s;
//    cin>>s;
//    int n=s.size();
//    string big;
//    bool ok=false;
//    int sum=0;
//    for (int i = 0 ; i < s.size();i++){
//        sum+=s[i]-'0';
//    }
//    if (sum%3!=0){
//        cout<<-1<<'\n';
//        return 0;
//    }
//    sort(s.begin(),s.end());
//    reverse(s.begin(), s.end());
//    if (s[s.size()-1]!='0'){
//        cout<<-1<<'\n';
//        return 0;
//    }
//    cout<<s<<'\n';
////    do {
////        if (atoi(s.c_str())%30==0){
////            big=s;
////            cout<<big<<'\n';
////            ok=true;
////            break;
////        }
////    }while(prev_permutation(s.begin(),s.end()));
//
//}
