int a[20];
int no_elements;

void array_creation()
{
    int i;
    printf("Enter the number of elements you want to process in array\n");
    scanf("%d",&no_elements);
    printf("enter the %d elements.\n",no_elements);
    for(i=0; i<no_elements; i++)
    {
        scanf("%d",&a[i]);
    }
}

void array_accessing()
{
    int i;
    array_creation();
    for(i=0; i<no_elements; i++)
    {
        printf("%d\n",a[i]);
    }
}

void array_insertation(){
    int i,element,position;
    array_creation();
    printf("Enter the elements to insert the element into the array.\n");
    scanf("%d",&element);
    printf("Enter the position where you want to insert\n");
    scanf("%d",&position);
    no_elements++;
    for(i=no_elements; i>=position; i--)
    {
        a[i] = a[i-1];
    }
    a[i]=element;
    for(i=0; i<no_elements; i++)
    {
        printf("%d\n",a[i]);
    }
}


void array_deletion()
{
    int i,deletion;
    array_creation();
    printf("Enter the position you want to delete\n");
    scanf("%d",&deletion);
    for(i=deletion-1; i<=no_elements; i++)
    {
        a[i]=a[i+1];
    }
    no_elements--;
    for(i=0; i<no_elements; i++)
    {
        printf("%d\n",a[i]);
    }
}

void array_sorting()
{
    int i,j,temp=0;
    for(i=0; i<no_elements; i++)
    {
        for(j=0; j<no_elements; j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=1; i<=no_elements; i++)
    {
        printf("%d\n",a[i]);
    }
}

void array_searching()
{
    int i,search_element,temp=0;
    array_creation();
    printf("Enter the element you want to search:\n");
    scanf("%d",&search_element);
    for(i=0;i<no_elements;i++)
    {
        if(search_element == a[i])
        {
            printf("The search element is %d and it is in the position %d",search_element,i+1);
            temp++;
        }
    }
    if(temp != 1)
    {
        printf("search element is failed");
    }
}
