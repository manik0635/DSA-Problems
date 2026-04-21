class Solution {
public:
    int f(TreeNode* r) {
        if (!r) return 0;
        int l = f(r->left);
        if (l == -1) return -1;
        int ri = f(r->right);
        if (ri == -1) return -1;
        if (abs(l - ri) > 1) return -1;
        return max(l, ri) + 1;
    }
    bool isBalanced(TreeNode* root) {
        return f(root) != -1;
    }
};
