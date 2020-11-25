////
////  acd108-b.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/24.
////
//
//#include <iostream>
//#include <stack>
//using namespace std;
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    stack<char> stack;
//    int n;
//    cin>>n;
//    int ans=0;
//    for (int i=0;i<n;i++){
//        char tmp;
//        cin>>tmp;
//        if (tmp=='x'){
//            if (!stack.empty()){
//                if (stack.top()=='o'){
//                    stack.pop();
//                    if (!stack.empty()){
//                        if (stack.top()=='f'){
//                            stack.pop();
//                            ans++;
//                        }else{
//                            stack.push('o');
//                            stack.push('x');
//                        }
//                    }
//                }else{
//                    stack.push('x');
//                }
//            }
//            
//        }
//        else{
//            stack.push(tmp);
//        }
//    }
//    cout<<n-3*ans<<'\n';
//}
