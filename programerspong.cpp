////
////  programerspong.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/19.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int minarray[1000001];
//int reversemin[1000001];
//int solution(vector<int> a){
//    int answer=0;
//    int n=a.size();
//    if (n==1||n==2){
//        return n;
//    }
//    int min=1000000001;
//    for (int i=0;i<n;i++){
//        if (min>a[i]){
//            min=a[i];
//        }
//        minarray[i]=min;
//    }
//    min=1000000001;
//    for (int i=n-1;i>=0;i--){
//        if (min>a[i]){
//            min=a[i];
//        }
//        reversemin[i]=min;
//    }
//    int answer1=2;
//    for (int i=1;i<n-1;i++){
//        if (!(minarray[i-1]<a[i]&&a[i]>reversemin[i+1])){
//            answer1++;
//        }
//    }
//    return answer1;
//}
