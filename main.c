#include <stdio.h>
#include <stdlib.h>
#include<time.h>

void bubble_sort(int n)
{


int array[100], c, d, swap ;




srand(time(NULL));
	for(int j=0; j<n;j++)
	{

		array[j] = rand();
		printf("%d ",array[j]);
	}

  for (c = 0 ; c < n - 1; c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use < */
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }
  printf("\n");
for(int i=0; i<n; i++) printf("%d ",array[i]);
}






int main()
{

    int size;

	printf("Enter the num of numbers you want to sort: ");

	scanf("%d", &size);


	bubble_sort(size);



    return 0;
}
