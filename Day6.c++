/*
#####       Implement BFS and DFS       #####
#include <iostream>
#include <queue>

using namespace std;

const int MAX_CHILDREN = 10;

struct TreeNode
{
    int val;
    TreeNode *children[MAX_CHILDREN];
    int childCount;

    TreeNode(int x) : val(x), childCount(0)
    {
        for (int i = 0; i < MAX_CHILDREN; ++i)
        {
            children[i] = nullptr;
        }
    }

    bool addChild(TreeNode *child)
    {
        if (childCount < MAX_CHILDREN)
        {
            children[childCount++] = child;
            return true;
        }
        return false;
    }
};
void bfs(TreeNode *root)
{
    if (root == nullptr)
        return;

    queue<TreeNode *> q;
    q.push(root);

    while (!q.empty())
    {
        TreeNode *current = q.front();
        q.pop();
        cout << current->val << " ";

        for (int i = 0; i < current->childCount; ++i)
        {
            q.push(current->children[i]);
        }
    }
}
void dfs(TreeNode *root)
{
    if (root == nullptr)
        return;

    cout << root->val << " ";

    for (int i = 0; i < root->childCount; ++i)
    {
        dfs(root->children[i]);
    }
}
int main()
{
    TreeNode *root = new TreeNode(1);
    TreeNode *child1 = new TreeNode(2);
    TreeNode *child2 = new TreeNode(3);
    TreeNode *child3 = new TreeNode(4);
    TreeNode *child4 = new TreeNode(5);

    root->addChild(child1);
    root->addChild(child2);

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

*/

/*

#####       Duble the array and sum them        #####

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int sum = 0;

    for (int i = 0; i < 5; ++i)
    {
        arr[i] *= 2;
        sum += arr[i];
    }

    cout << "Sum of double elements: " << sum << endl;

    return 0;
}

*/

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    cout << a << " " << b;
    cout << endl;
    swap(a, b);
    cout << a << " " << b;
    return 0;
}