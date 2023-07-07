#include <stdio.h>

typedef struct leaf{
	int data;
	struct leaf* left;
	struct leaf* right;
}tree;

tree b13={1001, NULL, NULL};
tree b12={99, NULL, NULL};
tree b11={40, NULL, NULL};
tree b10={35, NULL, NULL};
tree b9={20, NULL, NULL};
tree b8={7, NULL, NULL};
tree b7={1, NULL, NULL};
tree b6={107, &b12, &b13};
tree b5={45, &b11, NULL};
tree b4={22, &b9, &b10};
tree b3={6, &b7, &b8};
tree b2={50, &b5, &b6};
tree b1={8, &b3, &b4};
tree root={36, &b1, &b2};

int fun7(int w1, tree* w0)
{
	if(w0==NULL)
		return -1;
	if(w0->data>w1)
		return 2*fun7(w1, w0->left);
	else if(w0->data<w1)
		return 2*fun7(w1, w0->right)+1;
	else 
		return 0;
}

int main(void)
{
	int w1;
	tree* w0=&root;

	scanf("%d", &w1);
	
	printf("%d\n", fun7(w1, w0));
	
	return 0;
}
