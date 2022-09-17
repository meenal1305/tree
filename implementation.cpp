//implementation of tree and traverse pre,post, in-order......
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

void traverse(node*root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    traverse(root->left);
    traverse(root->right);
    
    
}
void traverse1(node*root)
{
    if(root==NULL)
    {
        return;
    }
    traverse1(root->left);
     cout<<root->data<<" ";
    traverse1(root->right);
    
    
}
void traverse2(node*root)
{
    if(root==NULL)
    {
        return;
    }
    traverse2(root->left);
    traverse2(root->right);
    cout<<root->data<<" ";  
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
    cout<<"pre-order ->";
    traverse(a);
    cout<<endl;
    cout<<"IN-order ->";
     traverse1(a);
    cout<<endl;
    cout<<"Post-order ->";
     traverse2(a);
}
