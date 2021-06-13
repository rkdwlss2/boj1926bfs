////
////  boj11652.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/12/25.
////
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//#define lli long long int
//vector<lli> v;
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    cin>>n;
//    for (int i = 0 ; i <n;i++){
//        lli tmp;
//        cin>>tmp;
//        v.push_back(tmp);
//    }
//    sort(v.begin(),v.end());
//    lli big=0;
//    lli now=v[0];
//    lli count=1;
//    for (int i = 1 ; i <n;i++){
//        if (now==v[i]){
//            count++;
//        }else{
//            if (big<count)big=count;
//            count=1;
//            now=v[i];
//        }
//    }
//    if (big<count)big=count;
//    count=1;
//    now=v[0];
//    for (int i = 1 ; i <n;i++){
//        if (now==v[i]){
//            count++;
//        }else{
//            if (big==count){
//                cout<<v[i-1]<<'\n';
//                return 0;
//            }
//            count=1;
//            now=v[i];
//        }
//    }
//    if (big==count){
//        cout<<v[n-1]<<'\n';
//    }
//}
