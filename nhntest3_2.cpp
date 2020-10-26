////
////  nhntest3_2.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/24.
////
//
//#include <iostream>
//#include <string>
//#include <stack>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    string s;
//    cin>>s;
//    stack<char> stack1;
//    stack<pair<int,int>> stack2;
//    int tmpcount=0;
//    for (int i = 0 ; i<s.size();i++){
//        if (('1'<=s[i]&&s[i]<='9')&&(s[i+1]!='(')){
//            tmpcount=s[i]-'0';
//        }
//        else{
//            if (tmpcount>0){
//                while(tmpcount--){
//                    stack1.push(s[i]);
//                }
//                tmpcount=0;
//            }
//            else{
//                if (s[i]=='('){
//                    stack1.push(s[i]);
//                }
//                else if (s[i]==')'){
//                    string tmpstring="";
//                    while (stack1.top()!='('){
//                        tmpstring+=stack1.top();
//                        stack1.pop();
//                    }
//                    stack1.pop();
//                    char frontstring=stack1.top();
//                    stack1.pop();
//                    if ('1'<=frontstring&&frontstring<='9'){
//                        int frontint=frontstring-'0';
//                        while (frontint--){
//                            for (int ta=tmpstring.size()-1;ta>=0;--ta){
//                                stack1.push(tmpstring[ta]);
//                            }
//                        }
//                    }
//                    else{
//                        for (int ta=tmpstring.size()-1;ta>=0;--ta){
//                            stack1.push(frontstring);
//                            stack1.push(tmpstring[ta]);
//                        }
//                    }
//                }
//                else {
//                    stack1.push(s[i]);
//                }
//            }
//        }
//    }
//    vector<char> v;
//    while(!stack1.empty()){
//        v.push_back(stack1.top());
//        stack1.pop();
//    }
//    reverse(v.begin(),v.end());
//    for (auto a : v){
//        cout<<a;
//    }
//    cout<<'\n';
//}
