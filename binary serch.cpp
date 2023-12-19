#include <stdio.h>
main()
{
int i, beg, end, mid, n, ser, a[50];
printf("Enter number of elements\n");
scanf("%d",&n);
printf("Enter %d integers\n", n);
for(i = 0; i < n; i++)
scanf("%d",&array[i]);
printf("Enter value to find\n");
scanf("%d", &ser);
beg = 0;
end = n - 1;
mid = (beg+end)/2;
while (beg <= end) 
{
if(array[mid] < ser)
beg = mid + 1;
else if (array[mid] == ser)
{
printf("%d found at location %d.\n", ser, mid+1);
break;
}
else
end = mid - 1;
mid = (beg + end)/2;
}
if(beg > end)
printf("Not found! %d isn't present in the list.\n", ser);
return 0;
}
