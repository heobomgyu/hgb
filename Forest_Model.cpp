#include<vector>
class Tree;
class Forest_Controller;

class Forest_Model {

private:
	std::vector<Tree*> forest;
	Forest_Controller controller;

public:
	Forest_Model() { controller = new Forest_Controller(); }

	std::vector<Tree*> get_Forest() { return forest; }

	void addFree(Tree* tree)
	{
		forest.push_back(tree);
	}
};