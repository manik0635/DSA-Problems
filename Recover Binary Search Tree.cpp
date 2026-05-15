class Solution {
public:
    TreeNode *a = NULL, *b = NULL, *p = NULL;

    void dfs(TreeNode* r) {
        if (!r) return;
        dfs(r->left);

        if (p && p->val > r->val) {
            if (!a) a = p;
            b = r;
        }
        p = r;

        dfs(r->right);
    }

    void recoverTree(TreeNode* root) {
        dfs(root);
        swap(a->val, b->val);
    }
};
