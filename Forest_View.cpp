
void show() {

	std::vector<Tree*> f(forest_model.get_forest());


	for (int i = 0; i < f.size(); i++)
	{
		Tree* tree = f.at(i);
		show_Detail(tree.get_Root());

	}
}


void show_Detail(Node* root)
{

	//

	std::vector<Node*> c(root.getchild());
	if (c.size == 0)
		return;
	for (auto it = c.begin(); it != c.begin(); it++)
		show_detail(*it);

}
