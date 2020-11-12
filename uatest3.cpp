//#include <string>
//#include <vector>
//#include <iostream>
//using namespace std;
//int n;
//bool win[10001];
//int solution(int money, vector<string> expected, vector<string> actual) {
//    int answer = -1;
//    n=expected.size();
//    for (int i = 0 ; i <n;i++){
//        if (expected[i]==actual[i]){
//            win[i]=true;
//        }
//    }
//    int now=money;
//    int bet=100;
//    for (int i = 0 ; i <n;i++){
//        if (win[i]==true){
//            now+=bet;
//            bet=100;
//        }else{
//            now-=bet;
//            if (now<=0){
//                return 0;
//            }
//            bet*=2;
//            if (bet>now){
//                bet=now;
//            }
//        }
//    }
//    return now;
//}
//int main(){
//    vector<string> expected={"T", "T", "H", "H", "H"};
//    vector<string> actual={ "H", "H",  "T",  "H", "T"};
//    cout<<solution(1200,expected,actual)<<'\n';
//}
