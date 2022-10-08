//exclude duplicates...................
class node
{
    public:
    int val;
    node*left;
    node*right;
    node(int x)
    {
        val=x;
        left=right=NULL;
    }
};
node*createBST(node*root, int x)
{
    if(root==NULL)
    {
    node*newNode=new node(x);
        return newNode; 
    }
    if(x<root->val)
    {
        root->left=createBST(root->left, x);
    }

    if(x  > root->val)
    {
        root->right=createBST(root->right, x);
    }
    return root;
}
void preOrder(node* root)
{
    if(root == NULL)
        return;
     cout<<root->val<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

int main() {
    
    int n; cin>>n;
    
    node* root = NULL;
    for(int i = 0;i<n;i++)
    {
        int x; cin>>x;
        
        root = createBST(root, x);
    }
    
    preOrder(root);

}
