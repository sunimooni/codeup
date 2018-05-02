#include<stdio.h>
#include<string.h>
#include<unistd.h>
int main(){
	char a[100];
	int i=0;
	fgets(a,100,stdin);
	while(a[i]){
		if(a[i]!=' ')
			a[i] = a[i]-3;
		i++;
	}
	printf("%s\n",a);
	return 0;
}
