/* bTree.cpp
 * Project Euler
 * Problem 18 - Maximum path sum I */

#include "bTree.h"

btree::btree()
{
    root = nullptr;
}

btree::~btree()
{
    destroy_tree();
}

void btree::destroy_tree(node *leaf)
{
    if (leaf != nullptr)
    {
        destroy_tree(leaf->left);
        destroy_tree(leaf->right);
        delete leaf;
    }

}

void btree::insert(int key, node *leaf)
{
    if (key < leaf->key_value)
    {
        if (leaf->left != nullptr)
        {
            insert(key, leaf->left);
        }
        else
        {
            leaf->left = new node;
            leaf->left->key_value = key;
            leaf->left->left = nullptr; // New leaf's left node must start as empty.
            leaf->left->right = nullptr; // New leaf's right node must start as empty.
        }

    }
    else if (key >= leaf->key_value)
    {
        if (leaf->right != nullptr)
        {
            insert(key, leaf->right);
        }
        else
        {
            leaf->right = new node;
            leaf->right->key_value = key;
            leaf->right->left = nullptr; // New leaf's left node must start empty.
            leaf->right->right = nullptr; // New leaf's right node must start empty.
        }
        
    }

}

node *btree::search(int key, node *leaf)
{
    if (leaf != nullptr)
    {
        if (key == leaf->key_value)
        {
            return leaf;
        }
        if (key < leaf->key_value)
        {
            return search(key, leaf->left);
        }
        else
        {
            return search(key, leaf->right);
        }
        
    }
    else
    {
        return nullptr;
    }
    
}

void btree::insert(int key)
{
    if (root != nullptr)
    {
        insert(key, root);
    }
    else
    {
        root = new node;
        root->key_value = key;
        root->left = nullptr; // New leaf left has to be empty.
        root->right = nullptr; // New leaf right has to be empty.
    }
    
}