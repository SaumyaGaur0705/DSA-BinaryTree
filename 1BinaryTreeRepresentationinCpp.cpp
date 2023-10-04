/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *left, *right;
    Node()
    {
        this->data = 0;
        left = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->left = NULL;
        this->right = NULL;
    }
    Node(int data, Node* left, Node* right)
    {
        this->data = data;
        this->left = left;
        this->right = right;
    }
};
*/
Node* create(vector<int>& arr, int index) {
    // Check if the index is out of bounds or if the current element is a sentinel value (e.g., -1 for a null node).
    if (index >= arr.size()) {
        return NULL; // Return a null node.
    }

    // Create a new node with the current element's value.
    Node* root = new Node(arr[index]);

    // Recursively create left and right subtrees.
    root->left = create(arr, 2 * index + 1); // Left child index: 2*index + 1
    root->right = create(arr, 2 * index + 2); // Right child index: 2*index + 2

    return root;
}
Node* createTree(vector<int>&arr){
    // Write your code here.
    
     return create(arr, 0);
    
}
