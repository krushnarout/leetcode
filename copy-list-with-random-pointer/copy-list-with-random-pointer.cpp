/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head) return 0;

        Node* it=head;
        while(it){
            Node* clone=new Node(it->val);
            clone->next=it->next;
            it->next=clone;
            it=it->next->next;
        }

        it=head;
        while(it){
            Node* clone=it->next;
            clone->random=it->random ? it->random->next : NULL;
            it=it->next->next;
        }
        
        it=head;
        Node* clone=it->next;
        while(it){
            Node* clone=it->next;
            it->next=it->next->next;
            if(clone->next){
                clone->next=clone->next->next;
            }
            it=it->next;
        }
        return clone;

    }
};
