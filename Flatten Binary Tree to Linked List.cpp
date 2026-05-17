class Solution {
public:
    void flatten(TreeNode* root) {
        TreeNode* cur = root;

        while (cur) {
            if (cur->left) {
                TreeNode* t = cur->left;
                while (t->right) t = t->right;

                t->right = cur->right;
                cur->right = cur->left;
                cur->left = NULL;
            }
            cur = cur->right;
        }
    }
};
