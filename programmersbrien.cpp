////
////  programmersbrien.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/19.
////
//
//#include <string>
//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//bool check[27];
//bool upward[1001];
//int arr[1001];
//int n;
//int checkrule1(int index,int now){
//    if (check[now]==true) return -1;
//    for (int i=index+1;i<n;i++){
//        if (upward[i]==false&&arr[i]!=now)return -1;
//        else if (upward[i]==false&&arr[i]==now)return i;
//    }
//    return -1;
//}
//int checkrule2(int index,int now){
//    if (index==0)return -1;
//    if (check[now]==true) return -1;
//
//    bool up=false;
//    while(index<n){
//        index++;
//        if (upward[index]==false&&arr[index]!=now)return -1;
//        if (up==false){
//            if (upward[index]==true){
//                up=true;
//            }
//            else{
//                if (arr[index]==now){
//                    return -1;
//                }
//                else{
//                    return index;
//                }
//            }
//        }
//        else{
//            if (upward[index]==false){
//                if (arr[index]==now){
//                    up = false;
//                }
//                else{
//                    return index;
//                }
//            }
//            else{
//                return -1;
//            }
//        }
//    }
//    if (up==false){
//        return -1;
//    }
//    return index;
//}
//string solution(string sentence){
//    string answer="";
//    n=sentence.size();
//    fill(arr,arr+1001,-1);
//    for (int i = 0 ;i<n;i++){
//        if (sentence[i]-'a'<0){
//            upward[i]=true;
//            arr[i]=sentence[i]-'A';
//        }
//        else{
//            arr[i]=sentence[i]-'a';
//        }
//    }
//    int ok=0;
//    queue<char> q;
//    for (int i = 0 ;i<n;i++){
//        if (upward[i]==false){
//            check[arr[i]]=true;
//            ok=checkrule1(i, arr[i]);
//            if (ok>=0){
//                ok--;
//                q.push(arr[i]);
//            }
//            else{
//                ok=0;
//            }
//            ok=checkrule2(i, arr[i]);
//            if (ok>=0){
//                ok--;
//                q.push(arr[i]);
//            }
//            else{
//                ok=0;
//            }
//        }
//    }
//    while(!q.empty()){
//        cout<<q.front()<<'\n';
//        q.pop();
//    }
//    return answer;
//}
//int main(){
//    string sentence="hHaAAa";
//    cout<<solution(sentence);
//
//}
