//
// Created by sergio on 10/2/15.
//

#ifndef TP1GENETICPROGRAMMING_BINARYTREE_H
#define TP1GENETICPROGRAMMING_BINARYTREE_H


template <class T> class Node
{
public:
    Node(T &content)
    {
        left = nullptr;
        right = nullptr;
        leaf = true;
        layer = 0;
        parent = nullptr;
        this->content = content;
    }

    void insertChilds(Node<T>* left, Node<T>* right)
    {
        this->leaf = false;
        this->left = left;
        this->right = right;
        left->parent = this;
        right->parent = this;
        left->layer = this->layer+1;
        right->layer = this->layer+1;
    }
    T content;
    Node* left;
    Node* right;
    Node* parent;
    bool leaf;
    int layer;
};

template <class T> class Tree
{
public:
    Tree(T& content)
    {
        Node<T>* root = new Node<T>(content);
        this->root = root;
    }

    Node<T>* getRoot() { return this->root; }
    int getSize() { return this->size; }
    Node<T>* getLeftmostChild()
    {
        Node<T>* it = getRoot();
        while (!it->leaf)
        {
            it = it->left;
        }
    }

private:
    Node<T>* root;
    int size;
};

#endif //TP1GENETICPROGRAMMING_BINARYTREE_H
