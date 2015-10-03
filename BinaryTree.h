//
// Created by sergio on 10/2/15.
//

#ifndef TP1GENETICPROGRAMMING_BINARYTREE_H
#define TP1GENETICPROGRAMMING_BINARYTREE_H


#include <sstream>

class Node
{
public:
    Node(Operators& content)
    {
        left = nullptr;
        right = nullptr;
        leaf = true;
        layer = 0;
        parent = nullptr;
        this->content = content;
    }
    Node(Operators& content, int layer, Node* parent)
    {
        this->left = nullptr;
        this->right = nullptr;
        this->leaf = true;
        this->layer = layer;
        this->parent = parent;
        this->content = content;
    }

    void insertChildren(Operators& contentLeft, Operators& contentRight)
    {
        this->leaf = false;
        this->left = new Node(contentLeft, this->layer+1, this);
        this->right = new Node(contentRight, this->layer+1, this);
        //insertLeftChild(contentLeft);
    }

    void insertLeftChild(Operators& contentLeft)
    {
        Node* left = new Node(contentLeft, this->layer+1, this);
        this->leaf = false;
        this->left = left;
    }

    Operators content;
    Node* left;
    Node* right;
    Node* parent;
    bool leaf;
    int layer;
};

class Tree
{
public:
    Tree(){};
    Tree(Operators& content)
    {
        Node* root = new Node(content);
        this->root = root;
    }

    Node* getRoot() { return this->root; }
    Node* getLeftmostChild()
    {
        Node* it = getRoot();
        while (!it->leaf)
        {
            it = it->left;
        }
        return it;
    }

    int getSize()
    {
        Node* n = getLeftmostChild();
        this->size = n->layer+1;
        return this->size;
    }
    std::string getMathematicalExpression()
    {
        return getMathematicalExpression(this->root);
    }

private:
    std::string getMathematicalExpression(Node* node)
    {
        std::stringstream result;
        if(!node->leaf)
        {
            std::string left = getMathematicalExpression(node->left);
            std::string right = getMathematicalExpression(node->right);
            result << "(" << left << node->content.getValue() << right << ")" ;
        }
        else
        {
            return node->content.getValue();
        }
        return result.str();
    }
    Node* root;
    int size = 1;
};

#endif //TP1GENETICPROGRAMMING_BINARYTREE_H
