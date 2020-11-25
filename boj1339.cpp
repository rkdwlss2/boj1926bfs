////
////  boj1339.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/22.
////
//
//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//const int alphabets=26;
//int count1;
//int a[alphabets];
//int n;
//int s[11][11];
//bool num[10];
//int ans1=0;
//void go(int index,int big){
//    if (index==count1){
//        int ans=0;
//        for (int i = 0 ; i < n;i++){
//            int num=0;
//            for (int j = 0 ; j<11;j++){
//                if (s[i][j]!=-1){
//                    num*=10;
//                    num+=a[s[i][j]]-1;
//                }
//            }
//            ans+=num;
//        }
//        ans1=max(ans1,ans);
//        return;
//    }
//    for (int i = 0 ; i < alphabets;i++){
//        if (a[i]==0){
//            for (int j = 1 ;j<=10;j++){
//                if (num[j]==false){
//                    a[i]=j;
//                    num[j]=true;
//                    go(index+1,j);
//                    num[j]=false;
//                    a[i]=0;
//                }
//            }
//            break;
//        }
//    }
//
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    for (int i = 0 ; i<11;i++){
//        fill(s[i],s[i]+11,-1);
//    }
//    fill(a,a+26,-1);
//    for (int i = 0 ; i < n;i++){
//        string tmp;
//        cin>>tmp;
//        for (int j=0;j<tmp.size();j++){
//            s[i][j]=tmp[j]-'A';
//            a[s[i][j]]=0;
//        }
//
//    }
//    for (int i=0;i<alphabets;i++){
//        if (a[i]==0){
//            count1++;
//        }
//    }
//    go(0,9);
//    cout<<ans1<<'\n';
//}
