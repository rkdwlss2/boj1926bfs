////
////  boj1874-2.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/01/11.
////
//
//#include <iostream>
//#include <stack>
//#include <vector>
//using namespace std;
//
//int arr[100001];
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    cin>>n;
//    for (int i=0;i<n;i++){
//        cin>>arr[i];
//    }
////    int startNum=1;
//    int now=0;
//    stack<int> s;
//    vector<int> v;
//    for (int i=0;i<n;i++){
//        int tmp=arr[i];
//        while (now<tmp){
//            v.push_back(0);
//            s.push(++now);
//        }
//        int t;
//        if (s.size()>=1){
//            t=s.top();
//        }else{
//            cout<<"NO"<<'\n';
//            return 0;
//        }
//        
//        bool ok=false;
//        while (s.size()>=1&&t>=tmp){
//            v.push_back(1);
//            if (t==tmp){
//                ok=true;
//            }
//            s.pop();
//            if (!s.empty()){
//                t=s.top();
//            }
//        }
//        if (ok==false){
//            cout<<"NO"<<'\n';
//            return 0;
//        }
//    }
//    for (auto i: v){
//        if (i==0){
//            cout<<'+'<<'\n';
//        }else{
//            cout<<'-'<<'\n';
//        }
//    }
//    
//}
