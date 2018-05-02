#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,m,max,x,y,increase,xx,yy;
	int** array;
	scanf("%d %d",&n,&m);
	max = n*m;
	array = (int **)malloc(sizeof(int)*n);
	printf("----------1\n");
	for(int i=0;i<n;i++){
		array[i]= (int *)malloc(sizeof(int)*m);
		for(int j=0;j<m;j++){
			array[i][j] =0;
		}
	}
	xx=n,yy=m;
	x=n;y=0;
	increase = -1;
	for(int i=0;i<n;i++){
		x+=increase;
		array[x][y]=max;
		max--;
	}
	m--;
	increase = 1;
	printf("------3\n");
	while(m||n){
		printf("7");
		for(int i=0;i<m;i++){
			y += increase;
			array[x][y]=max;
			max--;
		}
		n--;
		printf("8");
		for(int i=0;i<n;i++){
			x += increase;
			array[x][y]=max;
			max--;
		}
		m--;
		increase = -increase;
	}
	printf("-------44\n");
	for(int i=0;i<xx;i++){
                for(int j=0;j<yy;j++){
                        printf("%d ",array[i][j]);
                }
		printf("\n");
        }
	return 0;


}
