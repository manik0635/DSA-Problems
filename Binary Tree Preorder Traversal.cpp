class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> st;
        if (root) st.push(root);
        while (!st.empty()) {
            auto n = st.top(); st.pop();
            res.push_back(n->val);
            if (n->right) st.push(n->right);
            if (n->left) st.push(n->left);
        }
        return res;
    }
};
