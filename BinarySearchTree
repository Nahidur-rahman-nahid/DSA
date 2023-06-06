#include<stdio.h>
#include<stdlib.h>
struct node{
    int value;
    struct node *left_child, *right_child;
    struct node *parent;
};

struct node *root_node = NULL;

struct node *new_node(int value){
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->value = value;
    temp->left_child = NULL;
    temp->right_child = NULL;
    return temp;
}

void display(struct node *root_node){
    if (root_node != NULL){
        display(root_node->left_child);
        printf("%d ", root_node->value);
        display(root_node->right_child);
    }
}

struct node* insertValue(struct node* node, int value){ // inserting nodes!{;
    if (node == NULL){
        return new_node(value);
    }
    if (value < node->value){
        node->left_child = insertValue(node->left_child, value);
    }
    else if (value > node->value){
        node->right_child = insertValue(node->right_child, value);
    }
    return node;
}

struct node* search (struct node* x, int key){
    if(x==NULL || key==x->value){
        return x;
    }else{
        if(key < x->value) return search(x->left_child, key);
        else return search(x->right_child, key);
    }
}

int treeMinimum(struct node *root_node){
    while(root_node->left_child!=NULL)
        root_node = root_node->left_child;

    return root_node->value;
}

int treeMaximum(struct node *root_node){
    while(root_node->right_child!=NULL)
        root_node = root_node->right_child;

    return root_node->value;
}

//void deletion(struct node *root_node, int z){
//
//}

int findSuccessor(int val){
    struct node* x=search(root_node, val);
    if (x->right_child!=NULL){
        return treeMinimum(x->right_child);
    }
    struct node* y=x->parent;
    while(y!=NULL && x==y->right_child){
        x = y;
        y = y->parent;
    }
    return y->value;
}

int main(){
    root_node = insertValue(root_node, 10);

    insertValue(root_node, 25);
    insertValue(root_node, 30);
    insertValue(root_node, 10);
    insertValue(root_node, 32);
    insertValue(root_node, 21);
    insertValue(root_node, 17);

    printf("Binary Search Tree: ");
    display(root_node);

    printf("\n");

    if(search(root_node, 17)!=NULL){
        printf("Found!!\n");
    }else{
        printf("Not found!!\n");
    }

    if(search(root_node, 13)!=NULL){
        printf("Found!!\n");
    }else{
        printf("Not found!!\n");
    }

    printf("Minimum value: %d\n", treeMinimum(root_node));
    printf("Maximum value: %d\n", treeMaximum(root_node));
    printf("The successor of 17 is %d\n", findSuccessor(17));

    return 0;
}
