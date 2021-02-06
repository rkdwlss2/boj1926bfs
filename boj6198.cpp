////
////  boj6198.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/01/12.
////
//
//#include <iostream>
//#include <stack>
//#include <vector>
//using namespace std;
//#define lli long long int
//
//stack<int> s;
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    lli n;
//    cin>>n;
//    vector<int> v(n);
//    for (lli i=0;i<n;i++){
//        cin>>v[i];
//    }
//    lli ans=0;
//    for (int i=0;i<n;i++){
//        while (!s.empty()&&s.top()<=v[i])s.pop();
//        ans+=(lli)s.size();
//        s.push(v[i]);
//    }
//    cout<<ans;
//}
//
//
