#include <stdio.h>
void main(){
	char *s="hello";
	char ss[]={'h','e'};
	printf("%s",&(*s));
	printf("%c",5[s]);
	int a[10]={1,2,3};
	int i=0;
	for(i=0;a[i]!=0;++i);
	printf("%d",i);
}