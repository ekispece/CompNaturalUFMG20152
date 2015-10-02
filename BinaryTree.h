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
    Node(T &content, int layer, Node<T>* parent)
    {
        this->left = nullptr;
        this->right = nullptr;
        this->leaf = true;
        this->layer = layer;
        this->parent = parent;
        this->content = content;
    }

    void insertChildren(T &contentLeft, T &contentRight)
    {
        Node<T>* left = new Node(contentLeft, this->layer+1, this);
        Node<T>* right = new Node(contentRight, this->layer+1, this);
        this->leaf = false;
        this->left = left;
        this->right = right;
        std::cout << "Left: " << left->content.getValue() << " " << right->content.getType() << std::endl;
        std::cout << "Right : " << right->content.getValue() << " " << right->content.getType();
        //insertLeftChild(contentLeft);
    }

    void insertLeftChild(T &contentLeft)
    {
        Node<T>* left = new Node(contentLeft, this->layer+1, this);
        this->leaf = false;
        this->left = left;
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
    Node<T>* getLeftmostChild()
    {
        Node<T>* it = getRoot();
        while (!it->leaf)
        {
            it = it->left;
        }
        return it;
    }

    int getSize()
    {
        Node<T>* n = getLeftmostChild();
        this->size = n->layer+1;
        return this->size;
    }

private:
    Node<T>* root;
    int size = 1;
};

#endif //TP1GENETICPROGRAMMING_BINARYTREE_H
