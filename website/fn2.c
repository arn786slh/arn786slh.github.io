#include <stdio.h>
void tables2 (int x){
int	c=1;

	for (c=1;c<=10;c++){
		printf ("\n%d X %d = %d",x,c,x*c);
		
	}
}
void summation (int x){
int c,s=0;
for (c=1;c<=x;c++){
s=s+c;
}	
printf ("\n%d",s);	
	
}
void factorial (int x){
	int c,f=1;
	for (c=1;c<=x;c++){
		f=f*c;
	}
	printf ("%d",f);
}
/*
for loop is used when the loop runs for finite number of times
while loop can be used when loop has to run infinitely
*/
void tables (int x){
int	c=1;

	while (c<=10){
		printf ("\n%d X %d = %d",x,c,x*c);
		c++;
	}
}
void allFactors (int x){
	int c=1;
	while (c<=x){
		if (x%c==0)
		printf ("%d, ",c);
		c++;
	}
}

void main (){
	//ask for a number and printf its table
		//ask for a number and printf all its factors
		int n;
		int ch;
		printf ("\nenter a number: ");
		scanf ("%d",&n);
		printf ("\n1.Tables\n2.All factors\n3.Summation\n4.Factorials\n");
			scanf ("%d",&ch);
		
	if (ch==1){
		//print its table 
		tables2 (n);
		
		
	}
		else if(ch==2){
			//print all factors
			allFactors (n);
		}
		else if (ch==3){
			summation(n);
		}
		else if (ch==4){
			factorial (n);
		}
		
}