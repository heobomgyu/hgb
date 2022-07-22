#include<string>
#include<vector>

class Node {

private:
	std::string Node_name;
	int Node_num;
	Node* Node_parent;
	std::vector<Node*> Node_child;

public:

	Node(int num, std::string name)
	{
		Node_num = num;
		Node_name = name;
		Node_parent = NULL;
	}
	void set_num(int num) { Node_num = num; }
	void set_parent(Node* p) { Node_parent = p; }
	void set_child(std::vector<Node*> child) { Node_child = child; }
	int get_num() { return Node_num; }
	Node* get_parent() { return Node_parent; }
	std::vector<Node*> get_child() { return Node_child; }
};