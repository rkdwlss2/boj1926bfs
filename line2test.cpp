//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<string> rules={"STRING","NUMBER","NULL"};
//
//bool programRule(string PR,string program){//PR은 프로그램 룰(프로그램 이름 규칙) ex) line
//    if (programsize<1||programsize>10)return false;
//    if (PR!=program)return false;
//    return true;
//}
//
//bool fr_size(string flag_rule){//flag rules size check function
//    return flag_rule>=1&&flag_rule<=100;
//}
//
//bool fn_size(string flag_name){//flag name size check function
//    return flag_name>=2&&flag_name<=10;
//}
//bool stringCheck(string str,int opt){//opt가 0이면 전부 1일때는 flag_name이 대소문자인지 체크하는 함수
//    for (int i = 0 ; i < str.size();i++){
//        if (opt==1&&i==0)continue;
//        if ((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')){
//            continue;
//        }else{
//            return false;
//        }
//    }
//    return true;
//}
//bool flagRule(string flag_rule,string flag_name,string flag){//flag 룰 체크하는 함수
//    if (fr_size(flag_rule)==false)return false;
//    if (fn_size(flag_name)==false)return false;
//    if (flag_name[0]!='-')return false;
//    if (!stringCheck(flag_name,1))return false;
//    
//    
//    if (flag==rules[0]){
//        if (!stringCheck(flag,0))return false;
//    }
//    else if (flag==rules[1]){
//        for (int i = 0 ; i < flag.size();i++){
//            if (flag[i]>='0'&&flag[i]<='9'){
//                continue;
//            }else{
//                return false;
//            }
//        }
//        return true;
//    }else{
//        if (flag.size()==0)return true;
//        else return false;
//    }
//    
//}
//
//
//
//
//vector<bool> solution(string program, vector<string> flag_rules, vector<string> commands) {
//    vector<bool> answer;
//    for (int i = 0 ; i < commands.size();i++){
//        if (commands.size()<1||commands.size()>10)answer.push_back("False");
//    }
//    return answer;
//}
