////
////  boj10773.cpp
////  boj10039
////
////  Created by 강명진 on 2021/03/03.
////
//
//#include <iostream>
//#include <stack>
//using namespace std;
//
//
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    stack<int> s;
//    int n;
//    cin>>n;
//    for (int i = 0 ; i  < n;i++){
//        int tmp;
//        cin>>tmp;
//        if(tmp!=0){
//            s.push(tmp);
//        }
//        else{
//            if (!s.empty()){
//                s.pop();
//            }
//        }
//    }
//    int sum=0;
//    while(!s.empty()){
//        int tmp=s.top();s.pop();
//        sum+=tmp;
//    }
//    cout<<sum<<'\n';
//}
