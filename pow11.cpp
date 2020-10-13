////
////  pow11.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/06.
////
//
//#include <iostream>
//using namespace std;
//
//int calc(int a, int b){
//    if (b==0){
//        return 1;
//    }else if (b==1){
//        return a;
//    }else if (b%2==0){
//        int tmp= calc(a,b/2);
//        return tmp*tmp;
//    }else{
//        return a*calc(a,b-1);
//    }
//}
//int calc2(int a,int b){
//    int ans=1;
//    while (b>0){
//        if (b%2==1){
//            ans*=a;
//        }
//        a=a*a;
//        b/=2;
//    }
//    return ans;
//}
//long long mul(long long a, long long b, long long c){
//    if (b==0){
//        return 1LL;
//    }else if (b==1){
//        return a%c;
//    }else if (b%2==0){
//        long long temp = mul(a,b/2,c);
//        return (temp*temp)%c;
//    }else{
//        return (a*mul(a,b-1,c))%c;
//    }
//}
//
//int main(void){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int a=3;
//    int b=3;
//    int ans = 1;
//    for (int i = 1 ; i < b; i++){
//        a*=b;
//    }
//    cout<<a;
//}
