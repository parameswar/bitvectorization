#include<stdio.h>
#include<stdlib.h>
char *create_set(int n)
{
	return calloc(n,sizeof(char));

}
addto_set(char *address,int value)
{
	address[value/8] = address[value/8] | ( 1 << (value%8));
}
deletefrom_set(char *address,int value)
{	
	address[value/8] = address[value/8] & ~(1 << (value%8));
}
int ismember(char *address,int value)
{	
	return ( address[value/8] & ( 1 << (value%8) ) );	
}	
main()
{
	char *s;
	s = create_set(10);
	addto_set(s,10);
	addto_set(s,11);
	addto_set(s,12);
	addto_set(s,13);
	addto_set(s,18);
	addto_set(s,19);
	addto_set(s,21);
	addto_set(s,22);
	addto_set(s,2);
	addto_set(s,24);
	addto_set(s,25);
	addto_set(s,26);
	addto_set(s,27);
	addto_set(s,28);
	deletefrom_set(s,10);
	if (ismember(s,5) ) printf("element present \n");
	else printf("not present \n");
}

	
