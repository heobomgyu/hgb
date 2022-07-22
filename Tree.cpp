#include<vector>

class Node;
class Branch;

class Tree {

private:
	Node* Root;
	std::vector<Branch*> Branchs;
	int depth;

public:
	Tree(Node* root = NULL) :Root(root) {}
	void set_Root(Node* root) { Root = root; }
	Node* get_Root() { return Root; }
	std::vector<Branch*> get_Branchs() { return Branchs; }

	void set_Branchs();
};

void set_Branchs()
{
	Node* p = Root.get_parent();
	std::vector<Node*> c(Root.getchild());

	while (c.size() > 0)
	{

		for (auto it = c.begin(); it != c.end(); it++)
		{
			Branch.push_back(new Branch(p, *it));
		}
		p = p.get_parent();
		c.clear();
		c = p.getchild();
	}
}