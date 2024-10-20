#include "MainForm.h"
#include <iostream>
#include "conio.h"
#include "windows.h"
#include <string>

using namespace System;
using namespace System::Windows::Forms;
using namespace BinaryTreeLab;

/*
namespace BinaryTreeLab2 {
    BTree* add_element(BTree* root, int value);
    BTree* del(BTree* root, int value);
    BTree* del_elements(BTree* root, int value);
    BTree* form_tree(std::string user);
    int get_size(BTree* tree, int cnt);
    int get_min_pos(BTree* tree, int value, int level);
    int get_min(BTree* tree);
    std::string get_tree(BTree* tree);
}
*/

/*
BTree* BinaryTreeLab2::add_element(BTree* root, int value) {
    if (!root) {
        root = new BTree;
        root->left = NULL;
        root->right = NULL;
        root->value = value;
        return root;
    }
    if (value <= root->value)
        root->left = add_element(root->left, value);
    else
        root->right = add_element(root->right, value);
    return root;
}
BTree* BinaryTreeLab2::del(BTree* root, int value) {
    if (root->value != value)
        return root;

    if (root->left == NULL && root->right == NULL)
        root = NULL;
    else if (root->left != NULL && root->right == NULL)
        root = root->left;
    else if (root->left == NULL && root->right != NULL)
        root = root->right;
    else if (root->left != NULL && root->right != NULL) {
        int val = root->right->value;
        root->left = add_element(root->left, val);
        root->right = del(root->right, root->right->value);
        root = del(root, value);
    }
    return root;
}

BTree* BinaryTreeLab2::del_elements(BTree* root, int value) {
    if (!root) {
        return NULL;
    }
    root = del(root, value);

    if (!root) {
        return NULL;
    }
    if (root->left != NULL)
        root->left = del_elements(root->left, value);
    if (root->right != NULL)
        root->right = del_elements(root->right, value);

    return root;
}

std::string BinaryTreeLab2::get_tree(BTree* tree) {
    if (!tree) {
        return "It's empty!";
    }
    std::string res = "";
    if (tree->left != NULL) {
        res += get_tree(tree->left);
    }
    if (tree->right != NULL) {
        res += get_tree(tree->right);
    }
    return std::to_string(tree->value);
}

int BinaryTreeLab2::get_min(BTree* tree) {
    if (tree == NULL)
        return NULL;
    int res;
    if (tree->left != NULL)
        res = get_min(tree->left);
    else
        res = tree->value;
    return res;
}

int BinaryTreeLab2::get_min_pos(BTree* tree, int value, int level) {
    if (!tree)
        return NULL;
    if (tree->value == value)
        return level;
    int res;
    if (tree->left != NULL)
        res = get_min_pos(tree->left, value, level + 1);
}

int BinaryTreeLab2::get_size(BTree* tree, int cnt) {
    if (!tree) {
        return 0;
    }
    int res = cnt;
    if (tree->left != NULL) {
        res = get_size(tree->left, res + 1);
    }
    if (tree->right != NULL) {
        res = get_size(tree->right, res + 1);
    }
    return res;
}

BTree* BinaryTreeLab2::form_tree(std::string user) {
    BTree* new_tree = NULL;
    int nums = 0;
    char* numc = NULL;
    int cnt = 0;
    //for (char& c : user) {
    for (int i = 0; i < user.length(); i++) {
        if (user[i] != ' ') {
            numc[cnt] = user[i];
            cnt++;
        }
        if (user[i] == ' ' || i == user.length() - 1) {
            int num = std::stoi(numc);
            new_tree = add_element(new_tree, num);
            numc = NULL;
            cnt = 0;
        }
    }
    return new_tree;
}
    */

/*
        get_tree(root)
        root = add_element(root, val)

        do {
            before = get_size(root, 1);
            root = del_elements(root, value);
        } while (before > get_size(root, 1));
        get_tree(root);

        get_min(root)
        
        get_min_pos(root, get_min(root), 0)
        
        get_size(root, 1)
            break;

*/
void main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    BinaryTreeLab::MainForm form;
    Application::Run(% form);
}


