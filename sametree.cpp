/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p==NULL && q==NULL) return true;
        if (p==NULL || q==NULL) return false;
        TreeNode* curp=NULL;
        TreeNode* curq=NULL;

        queue <TreeNode* > qp;
        queue <TreeNode* > qq;
        qp.push(p);
        qq.push(q);

        while (!qp.empty() && !qq.empty()){
            curp=qp.front();
            qp.pop();
            curq=qq.front();
            qq.pop();

            if ( curp==NULL && curq==NULL) continue;

            if (curp && curq){
                if (curp->val != curq->val) return false;
                qp.push(curp->left);
                qp.push(curp->right);
                qq.push(curq->left);
                qq.push(curq->right);
            }
            else 
                return false;
        }
        if (qp.empty() && qq.empty()) return true;
        return false;
    }
};
// https://leetcode.com/problems/same-tree/description/