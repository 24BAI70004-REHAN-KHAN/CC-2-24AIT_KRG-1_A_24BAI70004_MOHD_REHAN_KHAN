/*
Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    int inOrderSuccessor(Node *root, Node *k) {
        Node * curr = root;
        Node * succ = nullptr;
        
        while( curr != nullptr && curr -> data != k -> data)
        {
            if(k -> data < curr -> data)
            {
                succ = curr;
                curr = curr -> left;
            }
            else
            {
                curr = curr -> right;
            }
        }
        if(curr == nullptr) return -1;
        if(curr -> right != nullptr) 
        {
            succ = curr -> right;
            while(succ -> left != nullptr)
            {
                succ = succ -> left;
            }
        }
        if(succ != nullptr) return succ -> data;
        return -1;
    }
};
