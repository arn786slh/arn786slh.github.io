#include <stdio.h>
int main (){
	char sex,ms;
	int age;
	printf ("enter your age,sex, marital status");
	scanf ("%d %c %c",&age,&sex,&ms);
	if ((ms=='M')||(ms=='U'&& sex=='M'&& age>30)||(ms=='U'&& sex=='F'&& age>25))
	{
	printf ("driver should be insured\n");
}
	else
	{
	printf ("dirver should not be insured");
}
	
return 0;
}