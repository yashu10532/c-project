#define size 3
int a[size],top=-1;
void push()
{
    int element;
    if(top==size-1)
    {
        printf("stack is full,can't to push\n");
        return ;
    }
    else
    {
        printf("Enter the element to push:");
        scanf("%d",&element);
        top++;
        a[top]=element;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("Stack Underflow!\Stack is empty:\n");
        return ;
    }
    else
    {
        printf("Enter the poped element :%d\n",a[top]);
        top--;
    }
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("Stack is empty\n");
        return ;
    }
    else
    {
        printf("Stack elements:\n");
        for(i=top;i>=0;i--)
        {
            printf("%d\n",a[i]);
        }
    }
}

