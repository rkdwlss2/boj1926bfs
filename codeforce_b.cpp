////
////  codeforce_b.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/11/29.
////
//
//#include <iostream>
//using namespace std;
//
//#define lli long long int
//
//lli indexArray[100001];
//lli colorArray[101];
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    lli t;
//    cin>>t;
//    while (t--){
//        lli n,k;
//        cin>>n>>k;
//        fill(indexArray,indexArray+100001,0);
//        fill(colorArray,colorArray+101,0);
//        for (lli i = 0 ; i < n;i++){
//            lli tmp;
//            cin>>tmp;
//            indexArray[i]=tmp;
//            colorArray[tmp]++;
//        }
//        lli realans=999999999;
//        lli big;
//        for (lli color =1;color<=100;color++){
//            if (colorArray[color]==0)continue;
//            lli ans=0;
//            for (lli i=0;i<n;i++){
//                if (i>=n)break;
//                if (indexArray[i]!=color){
//                    i=i+k-1;
//                    ans++;
//                    if (i>=(n-1)){
//                        break;
//                    }
//                }else{
//                    continue;
//                }
//            }
//            if (realans>ans){
//                realans=ans;
//            }
//        }
//        cout<<realans<<'\n';
//        
//    }
//}
