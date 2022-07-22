class Node;

class Branch {

private:
	Node* B_parent;
	Node* B_child;

public:
	Branch(Node* p, Node* c) :B_parent(p), B_child(c) {}
	Node* get_parent_Node() { return B_parent; }
	Node* get_child_Node() { return B_child; }
};