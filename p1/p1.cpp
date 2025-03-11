#include <stdio.h>

int main()
 {
    int start = 41;  
    int rows = 5;   

    for (int i = 1; i <= rows; i++)
	 {  // Loop for rows
        for (int j = 0; j < i; j++)
		 {  // Loop for columns
            printf("%d ", start + j);
        }
        printf("\n");  
    }
