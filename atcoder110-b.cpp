////
////  atcoder110-b.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/12/05.
////
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    string s;
//    cin>>n>>s;
//    int zeroIndex=-1;
//    for (int i=0;i<n;i++){
//        if (s[i]=='0'){
//            zeroIndex=i;
//            break;
//        }
//    }
//    if (zeroIndex>2){
//        cout<<0<<'\n';
//        return 0;
//    }else if (zeroIndex==-1){
//        cout<<0<<'\n';
//        return 0;
//    }else{
//        for (int i=zeroIndex;i<n;i++){
//            if ((i-zeroIndex)%3==0){
//                if (s[i]=='1'){
//                    cout<<0<<'\n';
//                    return 0;
//                }
//            }else{
//                if (s[i]=='0'){
//                    cout<<0<<'\n';
//                    return 0;
//                }
//            }
//        }
//    }
//    
//    if (n%3==0){
//        if (s[0]=='1'&&s[1]=='1'){
//            cout<<10000000000-n/3+1<<'\n';
//            return 0;
//        }else if (s[0]=='0'){
//            cout<<10000000000-n/3<<'\n';
//        }
//    }
////    if (s[0]=='0'){
////
////    }
//    cout<<10000000000-n/3<<'\n';
//}
