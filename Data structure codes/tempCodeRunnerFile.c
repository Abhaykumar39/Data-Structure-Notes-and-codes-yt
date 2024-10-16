int main()
{
    int array[max],n,i;
    printf("enter the size of array ");
    scanf("%d",&n);
    printf("enter the elemnet : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    selection(array,n);

    printf("the sorted element is : ");
    for(i=0;i<n;i++)
    {
        printf("%d",array[i]);
    }
}