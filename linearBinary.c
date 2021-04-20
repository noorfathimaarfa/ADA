#include<stdio.h>
int arr[10],i,result;
void linearsearch(int b)
{
for(i=0;i<10;i++)
{
	if(arr[i]==b)
	break;
	
	
	if(i<10)
	{
	printf("element %d found in %d th location in the list\n",b,i);	
	break;
		}	
		else
		printf("element not found in the list\n");
	
}
}
int binarySearch( int l, int r, int b) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
        if (arr[mid] == b) 
            return mid; 
        if (arr[mid] > b) 
            return binarySearch( l, mid - 1, b); 
        return binarySearch( mid + 1, r, b); 
    } 
    return -1; 
}  
void main()
{
	
	int a,b,s;
	printf("\n1:Linear search\n2:Binary search\n");
	
	printf("enter the choice\n");
	scanf("%d",&s);
	

	
	
	
	printf("Enter the elements in an array\n");
	
	for(a=1;a<=10;a++)
	{
		printf("arr[%d] = ",a);
		scanf("%d",&arr);
	}
	switch(s)
	{
	case 1:
		printf("Enter the element to find in a inputed list\n");
		scanf("%d",&b);
		linearsearch(b);
		break;
    case 2:
    	printf("Enter the element to find in a inputed list\n");
		scanf("%d",&b);
		int result = binarySearch( 0, 9, b); 
   if (result == -1) 
    printf("The element is not present in array");
	else 
                    printf("The element is present at index %d", result); 
    
}
}
