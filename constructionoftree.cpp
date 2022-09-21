//iterative way
class node{
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
 node*createNode(int x){
    if(x==-1)
    {
        return NULL;
    }
    node*a=new node(x);
    return a;
}
node* CreateTree(int arr[])
{
    int i=0;
    queue<node*>q;
    node* root = new node(arr[i]);
    q.push(root);
    while(q.size()>0)
    {
        node* temp = q.front();
        i++;
        temp->left = createNode(arr[i]);
       i++;
        temp->right = createNode(arr[i]);
      
        
        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
        
        q.pop();
        
    }

    return root;
    
}
void LevelOrder(node*root)
{
    queue<node*> q;
    q.push(root);
    while(q.size())
    {
        node*root=q.front();
        if(root->left)
        {
            q.push(root->left);
        }
        if(root->right)
        {
            q.push(root->right);
        }
        cout<<root->val<<" ";
        q.pop();
    }
}


int main() {
    int arr[] = {1,2,3,4,5,6,7,-1,-1,-1,-1,-1,-1,-1,-1};
    node* root = CreateTree(arr);
    LevelOrder(root);
    
}
