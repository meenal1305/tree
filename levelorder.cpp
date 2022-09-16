class node
{
    public:
    int data;
    node*left;
    node*right;
    node(int x)
    {
        data=x;
        left=right=NULL;
    }
};

void LevelOrder(node*root)
{
    queue<node*> q;
    q.push(root);
    while(q.size()!=NULL)
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
        cout<<root->data<<" ";
        q.pop();
    }
}

int main() {
        
    node* a=new node(1);
    node* b=new node(2);
    node* c=new node(3);
    node* d=new node(4);
    node* e=new node(5);
    node* f=new node(6);
    node* g=new node(7);
    
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    LevelOrder(a);
}
