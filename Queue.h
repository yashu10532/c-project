#define SIZE 3

void qinsert();
void qDelete();
void qdisplay();

int a[SIZE], f = -1, r = -1;
 void qinsert()
{
    int element;
    if (r == SIZE - 1)
    {
        printf("Queue is full, leads to overflow\n");
        return;
    }
    else
    {
        printf("Enter the element to insert: ");
        scanf("%d", &element);
        r++;
        a[r] = element;
        if (f == -1) f = 0;
    }
}

void qDelete()
{
    int element;
    if (f == -1)
    {
        printf("Queue is Empty, leads to underflow\n");
    }
    else if (f == r)
    {
        element = a[f];
        f = r = -1;
        printf("Deleted element is %d\n", element);
    }
    else
    {
        element = a[f];
        f++;
        printf("Deleted element is %d\n", element);
    }
}

void qdisplay()
{
    int i;
    if (f == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue elements: ");
        for (i = f; i <= r; i++)
        {
            printf("%d\t", a[i]);
        }
        printf("\n");
    }
}
