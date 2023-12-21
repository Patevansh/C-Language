#include <stdio.h>
    void main()
    {
 
        int array[20];
        int i, low, mid, high, key, size, j;
 
        printf("Enter the size of an array\n");
        scanf("%d", &size);
 
        printf("Enter the array elements\n");
        for (i = 0; i < size; i++) 
        {
            scanf("%d", &array[i]);
        }
        for(i=0;i<size;i++){
        	for(j=0;j<size;j++){
        		if(array[i]<array[j]){
        			int temp=array[i];
        			array[i]=array[j];
        			array[j]=temp;
				}
			}
		}
		for(i=0;i<size;i++){
			printf(" %d",array[i]);
		}
		printf("\n");
 
        printf("Enter the key\n");
        scanf("%d", &key);
 
        /*  search begins */
 
        low = 0;
        high = (size - 1);
 
        while (low <= high) 
        {
            mid = (low + high) / 2;
 
            if (key == array[mid]) 
            {
                printf("SUCCESSFUL SEARCH\n");
                return;
            }
 
            if (key < array[mid])
                high = mid - 1;
 
            else
                low = mid + 1;
 
        }
 
        printf("UNSUCCESSFUL SEARCH\n");
 
    }
