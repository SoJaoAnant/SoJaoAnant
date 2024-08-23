#include <bits/stdc++.h>
using namespace std;

struct node
{
    char data;
    struct node *left;
    struct node *right;
};

struct node *create_node(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void preorder(struct node *root)
{
    if (root == NULL)
    {
        // hehe boi
    }
    else
    {
        cout << root->data;
        preorder(root->left);
        preorder(root->right);
    }
}
void connect_(struct node *root, struct node *l, struct node *r)
{
    root->left = l;
    root->right = r;
}

int main()
{
    struct node *p0 = create_node('A');
    struct node *p1 = create_node('N');
    struct node *p2 = create_node('A');
    struct node *p3 = create_node('N');
    struct node *p4 = create_node('T');

    /*
        A
      N   N
       A   T
    */

    connect_(p0, p1, p3);
    connect_(p1, NULL, p2);
    connect_(p3, NULL, p4);

    preorder(p0);

    return 0;
}