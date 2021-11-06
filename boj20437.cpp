////
////  boj20437.cpp
////  boj1926bfs
////
////  Created by 강명진 on 2021/10/17.
////
//
//#include <iostream>
//#include <string>
//#include <vector>
//
//
//using namespace std;
//
//int main() {
//    //freopen("input.txt", "r", stdin);
//    ios_base::sync_with_stdio(0);
//    cin.tie(0); cout.tie(0);
//
//    int T; cin >> T;
//    while(T--) {
//        string str;
//        int K;
//        cin >> str;
//        cin >> K;
//        
//        // str 의 알파벳 문자별로 등장 빈도수 저장
//        vector<int> count(26);
//        for (int i = 0; i < str.length(); i++)
//            ++count[str[i] - 'a']; // ex) count[0] = 3 은 'a' 가 str 에 3 번 등장했다는 뜻
//        
//        int answer3 = 987654321;
//        int answer4 = -1;
//        for (int i = 0; i < str.length(); ++i) {
//            //  빈도수가 K 개 미만인 문자들은 문자열도 못 만들므로 패스
//            if (count[str[i] - 'a'] < K)
//                continue;
//
//            int cnt = 0;
//            for (int j = i; j < str.length(); ++j) {  // 연속 문자열의 시작 문자 str[i]
//                if (str[i] == str[j])  // str[j] 와 같다면 카운팅! (자동으로 시작문자 = 끝문자 인 연속 문자열이 되는 것이나 마찬가지)
//                    ++cnt;
//                
//                if (cnt == K) {  // 카운트 수가 K 와 같을 때 길이 업데이트
//                    answer3 = min(answer3, j - i + 1);
//                    answer4 = max(answer4, j - i + 1);
//                    break;
//                }
//            }
//        }
//        
//        if (answer3 == 987654321 || answer4 == -1)
//            cout << -1 << "\n";
//        else
//            cout << answer3 << " " << answer4 << "\n";
//    }
//}
