//
//  algospotAho_corasic.cpp
//  boj1926bfs
//
//  Created by 강명진 on 2020/11/19.
//

#include <iostream>
#include <vector>
using namespace std;
#define ALPHABETS 26

int charToNum(char charator){return charator-'A';}
struct LinkedListNode{
    int elem;
    LinkedListNode* next;
    
}
struct TrieNode{
    TrieNode* children[ALPHABETS];
    int terminate;
    TrieNode* fail;
    vector<int> output;
    TrieNode():terminate(-1),
};
int main(){
    ios::sync_with_stdio(0);
    
}
