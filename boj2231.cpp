////
////  boj2231.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/01/23.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//int n;
//int Size=0;
//vector<int> ans;
//vector<int> realans;
//int answer=1000001;
//void makeSize(){
//    int tmp=n;
//    while(tmp>0){
//        tmp/=10;
//        Size++;
//    }
//}
//
//void go(int index,int count){
//    if (index>n)return;
//    if (count>Size)return;
//    if (count<=Size){
//        int sum=0;
//        int num=0;
//        int ten=1;
//        for (int i =0;i<ans.size();i++){
//            num+=ans[i]*ten;
//            ten*=10;
//            sum+=ans[i];
//        }
//        sum+=num;
//        if (sum==n){
//            if (answer>num){
//                realans=ans;
//                answer=num;
//            }
//        }
////        return;
//    }
//    for (int next=0;next<10;next++){
//        if (index==Size-1&&next==0)continue;
//        ans.push_back(next);
//        count++;
//        go(index+1,count);
//        count--;
//        ans.pop_back();
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    makeSize();
//    go(0,0);
//    if (realans.size()==0){
//        cout<<0<<'\n';
//        return 0;
//    }
//    for (int i = realans.size()-1;i>=0;i--){
//        cout<<realans[i];
//    }
//    cout<<'\n';
//}
