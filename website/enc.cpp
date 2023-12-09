#include <stdio.h>
void main (){
	char c;
	int key,r,start=97,stop=122;
	printf("enter a character: ");
	scanf("%c",&c);
	printf ("enter the key: ");
	scanf("%d",&key);
	key = key%26;
    if (c-key<stop){
    	r = start-(c-key);
    	r=r-1;
    	//r is de difference between start
    	// and c-key, we will subsract this
    	// 'r' from stop
    	c= stop-r;
    	printf ("%c",c);
    }
    	else{
    		c= c-key;
    		printf ("%c",c);
		}
	}
