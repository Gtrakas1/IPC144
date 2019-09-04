/*Gtrakas1
108459173
IPC_144_SWW*/

#include<stdio.h>
#define NUMS 3
int main()
{
	int day, temph = 0, templ = 0;
	float average=0.0;

	printf("---=== IPC Temperature Analyzer ===---\n"); //single statement


	for (day = 1; day <= NUMS; ++day) // creating 'for' loop for days
	{				//code block 'for' loop
		printf("Enter the high value for day %d: ", day);
		scanf("%d", &temph);
		printf("\n");
		printf("Enter the low value for day %d: ", day);
		scanf("%d", &templ);
		printf("\n");
		while (temph <= templ || temph > 40 ||templ < -40)//nested while loop to test values after the 'for' codeblock is finished
		{					//code block after 'while' has tested values from for loop and failed.
		printf("Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n\n");
		printf("Enter the high value for day %d: ", day);
		scanf("%d", &temph);
		printf("\n");
		printf("Enter the low value for day %d: ", day);
		scanf("%d", &templ);
		printf("\n");
		}
		average += temph + templ;	// added to start to get the average temp
	}
	average /= (NUMS * 2); // Nums * 2 is temph and templ per day to get both values
	printf("The average (mean) temperature was: %.2f\n", average); // total average temp
	return 0;
}