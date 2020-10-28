////
////  bitmaskeratonesche.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2020/10/26.
////
//
//#include <iostream>
//
//using namespace std;
//#define MAX_N 32
//
//int n;
//unsigned char sieve[(MAX_N+7)/8];
//
//bool isPrime(int k){
//    return sieve[k>>3]&(1<<(k&7));
//}
//
//void setComposite(int k){
//    sieve[k>>3]&=~(1<<(k&7));
//}
//
//void eratosthenes(){
//    memset(sieve,255,sizeof(sieve));
//    setComposite(0);
//    setComposite(1);
//    for (int i=2;i<=sqrt(n);++i){
//        if (isPrime(i)){
//            for (int j=i*i;j<=n;j+=i){
//                setComposite(j);
//            }
//        }
//    }
//}
//
//int main(){
//    eratosthenes();
//    cout<<isPrime(7)<<'\n';
//}
