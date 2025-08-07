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
    void check(TreeNode* root , vector<int> &ans , int &count){
        if(root==NULL) return;
        bool flag = true;
        if(ans[ans.size()-1]<=root->val){
            ans.push_back(root->val);
            flag = false;
        }
        check(root->left , ans , count);
        check(root->right , ans , count);
        if(flag==false){
            count++;
            ans.pop_back();
        }
    }
    int goodNodes(TreeNode* root) {
        int count = 0;
        vector<int> ans;
        ans.push_back(root->val);
        check(root , ans, count );
        return count;
    }
};
