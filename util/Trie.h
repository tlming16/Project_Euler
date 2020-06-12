class Trie {
    Trie * child[26];
    bool is_word;
public:
    /** Initialize your data structure here. */
    Trie() {
        is_word=false;
        fill_n(child,26,nullptr);

    }
    // todo : prevent memory leak
    ~Trie() {
        for(int i=0;i<26;i++) {
            if (child[i]!=nullptr) {
                delete child[i];
            }
        }
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        Trie *t =this;
        for(char c:word) {
            if (! t->child[c-'a']) {
                t->child[c-'a']=new Trie();
            }
            t=t->child[c-'a'];
        }
        t->is_word=true;

    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        Trie * t =this;
        for(char c:word){
            if (!t->child[c-'a']) {
                return false;
            }
            t=t->child[c-'a'];
        }
        return t->is_word;

    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        Trie * t=this;
        for(char c:prefix){
            if (!t->child[c-'a']){
                return false;
            }
            t=t->child[c-'a'];
        }
        return true;

    }
};