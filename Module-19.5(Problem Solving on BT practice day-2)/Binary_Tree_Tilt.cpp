#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* left;
        Node* right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
//Easy solution -->
class Solution {
public:
    int getTitSum(Node* root, int& sum)
    {
        if(root == NULL) return 0;
        int l = getTitSum(root->left, sum);
        int r = getTitSum(root->right, sum);
        //backtracking
        int x = root->val + l + r;
        sum += abs(l -r);
        return x;
    }   
    int findTilt(Node* root) {
        int sum = 0;
        getTitSum(root, sum);
        return sum;
    }
};
//complex and solution-->
class Solution {
public:
    void buildTilt(Node* root)
    {
        if(root == NULL) return;
        buildTilt(root->left);
        buildTilt(root->right);
        if(root->left == NULL and root->right == NULL)
        {
            return;
        }
        if(root->left == NULL and root->right != NULL)
        {
            root->val += root->right->val;
            return;
        }
        if(root->left != NULL and root->right == NULL)
        {
            root->val += root->left->val;
            return;
        }
        else 
        {
            root->val += (root->left->val + root->right->val);
        }
    }
    void getTitSum(Node* root, int& sum)
    {
        if(root == NULL) return;
        if(root->left && root->right)
        {
            sum += abs(root->left->val - root->right->val);
        }
        else if(root->left && !root->right)
        {
            sum += abs(0 - root->left->val);
        }
        else if(!root->left && root->right)
        {
            sum += abs(root->right->val - 0);
        }

        getTitSum(root->left, sum);
        getTitSum(root->right, sum);
    }
    int findTilt(Node* root) {
        if(root == NULL) return 0;
        buildTilt(root); 
        int sum = 0;
        getTitSum(root, sum);
        return sum;
    }
};
int main()
{
    //problem link: https://leetcode.com/problems/binary-tree-tilt/
    return 0;
}