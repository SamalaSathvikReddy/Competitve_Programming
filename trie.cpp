#include <bits/stdc++.h>
using namespace std;

struct TrieNode {
    TrieNode* children[26];
    bool isleaf;
    TrieNode() {
        isleaf = false;
        for (int i = 0; i < 26; i++) {
            children[i] = nullptr;
        }
    }
};

class Trie {
    private:
        TrieNode* root;
    public:
        Trie() {
            root = new TrieNode();
        }
        void insert(string word) {
            TrieNode* cur = root;
            for (auto ch : word) {
                if (cur->children[ch - 'a'] == nullptr) {
                    cur->children[ch - 'a'] = new TrieNode();
                }
                cur = cur->children[ch - 'a'];
            }
            cur->isleaf = true;
        }
        bool search(string word) {
            TrieNode* cur = root;
            for (auto ch : word) {
                if (cur->children[ch - 'a'] == nullptr) {
                    return false;
                }
                cur = cur->children[ch - 'a'];
            }
            return cur->isleaf;
        }
        bool startsWith(string word) {
            TrieNode* cur = root;
            for (auto ch : word) {
                if (cur->children[ch - 'a'] == nullptr) {
                    return false;
                }
                cur = cur->children[ch - 'a'];
            }
            return true;
        }
};
