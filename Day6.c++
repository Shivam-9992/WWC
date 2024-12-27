#include <iostream>
#include <queue>

using namespace std;

const int MAX_CHILDREN = 10; // Maximum number of children for each node

// Definition for a tree node
struct TreeNode {
    int val;
    TreeNode* children[MAX_CHILDREN]; // Array of pointers to children
    int childCount; // Number of children

    TreeNode(int x) : val(x), childCount(0) {
        for (int i = 0; i < MAX_CHILDREN; ++i) {
            children[i] = nullptr; // Initialize children to nullptr
        }
    }

    // Function to add a child
    bool addChild(TreeNode* child) {
        if (childCount < MAX_CHILDREN) {
            children[childCount++] = child;
            return true;
        }
        return false; // No space for more children
    }
};
void bfs(TreeNode* root) {
    if (root == nullptr) return;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* current = q.front();
        q.pop();
        cout << current->val << " "; // Process the current node

        // Enqueue all children of the current node
        for (int i = 0; i < current->childCount; ++i) {
            q.push(current->children[i]);
        }
    }
}
void dfs(TreeNode* root) {
    if (root == nullptr) return;

    cout << root->val << " "; // Process the current node

    // Recur for all children of the current node
    for (int i = 0; i < root->childCount; ++i) {
        dfs(root->children[i]);
    }
}
int main() {
    // Create a sample tree
    TreeNode* root = new TreeNode(1);
    TreeNode* child1 = new TreeNode(2);
    TreeNode* child2 = new TreeNode(3);
    TreeNode* child3 = new TreeNode(4);
    TreeNode* child4 = new TreeNode(5);

    // Add children to the root
    root->addChild(child1);
    root->addChild(child2);
    
    // Add children to child1
    child1->addChild(child3);
    child1->addChild(child4);

    cout << "BFS Traversal: ";
    bfs(root);
    cout << endl;

    cout << "DFS Traversal: ";
    dfs(root);
    cout << endl;


    return 0;
}