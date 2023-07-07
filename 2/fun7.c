#include <stdio.h>
#include <stdlib.h>

typedef struct T{
	int num;
	struct T* left;
	struct T* right;
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

int fun7(tree* root, int n);

int main(void)
{
	int n;

	scanf("%d", &n);
	
	printf("%d\n", fun7(&root, n));
	
	return 0;
}

int fun7(tree* root, int n)
{
	if(root==NULL)
		return 0xffffffff;
	if(root->num==n)
		return 0;
	else if(root->num<n)
		return 2*fun7(root->right, n)+1;
	else
		return 2*fun7(root->left, n);
}
