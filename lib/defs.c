#include <stdlib.h>
#include <stdio.h>
#include "defs.h"

struct TreeNode {
	char* val;	
	struct TreeNode* children;
};

struct TreeNode* createTreeNode(char* v) {
	/*
	 * creates an individual tree node 
	 * argument: initial value for tree node
	 */
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

int addChildren(struct TreeNode* dest, struct TreeNode* ch) {
	/*
	 * assigns linked list or individual node 'ch' to a node 'dest'
	 * argument: linked list of children
	 */
	if (dest == NULL || ch == NULL) {
		fprintf(stderr, "Error: destination or children cannot be null\n");
		return -1;
	}
	dest->children = ch;
	return 1;
}
