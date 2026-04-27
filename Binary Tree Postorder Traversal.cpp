class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> st;
        TreeNode* last = NULL;
        while (root || !st.empty()) {
            if (root) {
                st.push(root);
                root = root->left;
            } else {
                auto node = st.top();
                if (node->right && last != node->right) root = node->right;
                else {
                    res.push_back(node->val);
                    last = node;
                    st.pop();
                }
            }
        }
        return res;
    }
};
