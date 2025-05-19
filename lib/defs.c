struct TreeNode {
	char* val;	
	struct TreeNode* children;
};

struct TreeNode* createTreeNode(char* v) {
	const size_t STR_ARG_LEN = strlen(v);
	if (STR_ARG_LEN == 0) {
		fprintf(stderr, "Error: cannot create a node with an empty char val\n");
		return NULL;
	}
	struct TreeNode* newNode = (struct TreeNode*)malloc( sizeof(struct TreeNode) );
	//string initializations
	newNode->val = (char*)malloc( sizeof(char) * STR_ARG_LEN );
	strncpy(newNode->val, v, STR_ARG_LEN);
	//initialize to no children
	newNode->children = NULL;

	return newNode;
}
