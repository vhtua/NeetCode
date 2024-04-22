class Node {
  public:
    int val;
    Node* next;
    Node* prev;
    Node(int x): val(x), next(nullptr), prev(nullptr) {}
};


class MyLinkedList {
public:
    int size;
    Node *head;

    MyLinkedList(): head(nullptr), size(0) {}
    
    int get(int index) {
        if (index >= 0 && index < size) {
            Node *itr = head;
            for (int i = 0; i <= index; ++i) {
                
            }
        }

        return -1;
    }
    
    void addAtHead(int val) {
        size++;
    }
    
    void addAtTail(int val) {
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if (index <= size) {
            size++;
        }
    }
    
    void deleteAtIndex(int index) {
        if (index >= 0 && index < size) {
            size--;
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */