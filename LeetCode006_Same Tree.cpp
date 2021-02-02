/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode *p, TreeNode *q) {
        if (!p && !q) return true;
        else if (!p && q || !q && p) return false;
        else if (isSameTree(p->left, q->left) && isSameTree(p->right, q->right) && p->val == q->val)
            return true;
        else return false;
    }
};
