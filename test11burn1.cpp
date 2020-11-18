////
////  test11burn1.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/14.
////
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int n;
//int cache[100001],s[100001];
//bool check[100001];
//
//int lis(int start){
//    int& ret =cache[start+1];
//    if (ret !=-1)return ret;
//    ret=1;
//    for (int next=start+1;next<n;++next){
//            if (start==-1||s[start]<s[next]){
//                ret=max(ret,lis(next)+1);
//            }
//    }
//    return ret;
//}
//
//int solution(vector<int> &A) {
//    sort(A.begin(),A.end());
//    for (int i = 0 ; i < A.size();i++){
//        s[i]=A[i];
//    }
//    n=A.size();
////    fill(cache,cache+100001,-1);
////    int a1=lis(-1)-1;
//    int now=s[0];
//    int ans=0;
//    check[0]=true;
//    int max=s[n-1];
//    int maxan=0;
//    for (int i = 1 ; i <n;i++){
//        if (now!=s[i]){
//            ans++;
//            now=s[i];
//            check[i]=true;
//        }
//        if (max==s[i]){
//            maxan++;
//        }
//    }
//    int ans1=0;
//    for (int i = 0;i<n;i++){
//        if (check[i]==false){
//            if (ans1==0){
//                now=s[i];
//                ans1++;
//            }
//            else if (now!=s[i]){
//                ans1++;
//            }
//        }
//    }
//    if (maxan>=2){
//        ans1--;
//    }
//    return ans+1+ans1;
//}
//
//int main(){
//    vector<int> a={2,4,5,3,2,1};
//    cout<<solution(a)<<'\n';
//}
