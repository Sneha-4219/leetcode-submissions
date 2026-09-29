class LRUCache {
public:
    class Node {
        public: 
            int key;
            int val;
            Node* prev;
            Node* next;

            Node(int k, int v) {
                key = k;
                val = v;
                prev = next = NULL;
            }
    };
    Node* head = new Node(-1, -1);
    Node* tail = new Node(-1, -1);

    unordered_map<int, Node*>m;
    int limit;
    
    LRUCache(int capacity) {
        limit = capacity;
        head->next = tail;
        tail->prev = head;
    }

    void add(Node* node) {
        node->next = head->next;
        head->next->prev = node;
        head->next = node;
        node->prev = head;
    }

    void remove(Node* node) {
        node->next->prev = node->prev;
        node->prev->next = node->next;
    }
    
    int get(int key) {
        if(m.find(key) == m.end()) {
            return -1;
        } else {
            Node* node = m[key];
            remove(node);
            add(node);
            return node->val;
        }
    }
    
    void put(int key, int value) {
        if(m.find(key) != m.end()) {
            Node* node = m[key];
            node->val = value;

            remove(node);
            add(node);
        } else {
            if(m.size() == limit) {
                Node* node = tail->prev;
                remove(node);
                m.erase(node->key);
            }

            Node* newNode = new Node(key, value);
            add(newNode);
            m[key] = newNode;
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */