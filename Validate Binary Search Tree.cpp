class Solution {
public:
    bool f(TreeNode* r, long mn, long mx) {
        if (!r) return true;
        if (r->val <= mn || r->val >= mx) return false;
        return f(r->left, mn, r->val) && f(r->right, r->val, mx);
    }

    bool isValidBST(TreeNode* root) {
        return f(root, LONG_MIN, LONG_MAX);
    }
};
