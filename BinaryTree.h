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

    bool equals(Node* node)
    {
        equals(this, node);
    }

    Operators content;
    Node* left;
    Node* right;
    Node* parent;
    bool leaf;
    int layer;

private:
    bool equals(Node* node1, Node* node2)
    {
        bool ans = true;
        if (node1->content.getValue() == node2->content.getValue())
        {
            if (node1->leaf == node2->leaf)
            {
                if (!node1->leaf)
                {
                    ans = (ans&&equals(node1->left, node2->left)&&equals(node1->right,node2->right));
                }
            }
            else
            {
                ans = false;
            }
        }
        else
        {
            ans = false;
        }
        return ans;
    }
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
