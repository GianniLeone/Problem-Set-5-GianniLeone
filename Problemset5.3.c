#include <stdio.h>
 #include <stdlib.h>


int main()
{
	
	FILE* my_file = fopen("num.csv", "r");
	FILE* fp = fopen("num.csv", "r");
	char c;
	int number_of_values = 0;
    for (c = getc(fp); c != EOF; c = getc(fp)){ 
			if(c==',')
				number_of_values = number_of_values + 1; 
	}
	number_of_values++;
    // Close the file 
    fclose(fp); 

 int records[number_of_values];
int count = 0;
for (; count < sizeof(records)/sizeof(records[0]); ++count)
{
    int got = fscanf(my_file, "%d,", &records[count]);
    if (got != 1) break; // wrong number of tokens - maybe end of file
}
fscanf(my_file, "%d", &records[count+1]);
fclose(my_file);

float sum = 0;
for (int i = 0; i < number_of_values; i++)
    sum += records[i];

printf("Average: %f\n", sum/number_of_values);

  return 0;
}