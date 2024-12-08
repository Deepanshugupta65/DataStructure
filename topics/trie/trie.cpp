#include <iostream>
using namespace std;

class TrieNode {
public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch) {
        data = ch;
        for (int i = 0; i < 26; i++) {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie {
public:
    TrieNode* root;

    Trie() {
        root = new TrieNode('\0'); // Initialize root node with null character
    }

    void insertUtil(TrieNode* root, string word) {
        if (word.length() == 0) {
            root->isTerminal = true; // Mark the end of the word
            return;
        }

        int index = word[0] - 'A';
        TrieNode* child;

        if (root->children[index] != NULL) {
            child = root->children[index];
        } else {
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        insertUtil(child, word.substr(1));
    }

    void insertWord(string word) {
        insertUtil(root, word);
    }

    bool searchUtil(TrieNode* root, string word) {
        if (word.length() == 0) {
            return root->isTerminal;
        }

        int index = word[0] - 'A';
        TrieNode* child;

        if (root->children[index] != NULL) {
            child = root->children[index];
        } else {
            return false;
        }

        return searchUtil(child, word.substr(1));
    }

    bool searchWord(string word) {
        return searchUtil(root, word);
    }

    bool deleteUtil(TrieNode* root, string word) {
        if (word.length() == 0) {
            if (!root->isTerminal) {
                cout << "Word does not exist in the trie." << endl;
                return false;
            }
            root->isTerminal = false;
            return true; // Word deleted successfully
        }

        int index = word[0] - 'A';
        TrieNode* child = root->children[index];

        if (child == NULL) {
            cout << "Word does not exist in the trie." << endl;
            return false;
        }

        bool canDeleteChild = deleteUtil(child, word.substr(1));

        // If the child is deletable and not part of another word
        if (canDeleteChild) {
            bool isChildUnused = true;
            for (int i = 0; i < 26; i++) {
                if (child->children[i] != NULL) {
                    isChildUnused = false;
                    break;
                }
            }

            if (isChildUnused && !child->isTerminal) {
                delete child;
                root->children[index] = NULL;
            }
        }

        return false; // Do not delete the current node
    }

    void deleteWord(string word) {
        deleteUtil(root, word);
    }
};

int main() {
    Trie* t = new Trie();
    t->insertWord("ARM");
    t->insertWord("DO");
    t->insertWord("TIME");
    t->insertWord("TIS");

    cout << "Present or not (ARM): " << t->searchWord("ARM") << endl;
    cout << "Present or not (DO): " << t->searchWord("DO") << endl;

    t->deleteWord("DO");

    cout << "Present or not after deletion (DO): " << t->searchWord("DO") << endl;
    cout << "Present or not (TIME): " << t->searchWord("TIME") << endl;

    delete t; // Free the allocated memory
    return 0;
}
