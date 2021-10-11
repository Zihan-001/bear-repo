#include <stdio.h>
#include<string.h>
 
int main()
{
    int i, pos, n = 6;
    char x[5] = "dsa", arr[6][10] = {"python", "oops", "dsa", "os", "dbms"}; 
 
 
 
 
    // position at which element
    // is to be inserted
    pos = 4;
 
    // increase the size by 1
    n++;
 
    // shift elements forward
    for (i = n-1; i >= pos; i--)
        strcpy(arr[i], arr[i - 1]);
 
    // insert x at pos
    strcpy(arr[pos - 1], x);
 
    // print the updated array
    for (i = 0; i < n; i++)
        printf("%s \n ", arr[i]);
    printf("\n");
 
    //element to be deleted
    int c, position = 3, m = 7;
    for (c = position - 1; c < m - 1; c++)
         strcpy(arr[c], arr[c+1]);
 
      printf("Resultant array:\n");
 
      for (c = 0; c < m - 1; c++)
         printf("%s\n", arr[c]);
         
    printf("19BCE2442");
 
}