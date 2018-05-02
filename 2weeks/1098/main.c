#include<stdio.h>
#include<stdlib.h>
int main(){
	int w,h,n, l,d,x,y;
	int** array;
	printf("input w h : ");
	scanf("%d %d",&w,&h);
	array = (int **)malloc(sizeof(int)*(h+1));
	for(int i=0;i<h+1;i++){
		array[i]=(int *)malloc(sizeof(int)*(w+1));
		for(int j=0;j<w+1;j++){
			array[i][j] = 0;
		}
	}
	printf("input num : ");
	scanf("%d", &n);
	for(int i=0; i<n;i++){
		printf("l d x y : ");
		scanf("%d %d %d %d",&l,&d,&x,&y);
		for(int j=0;j<l;j++){
			array[x][y] = 1;
			if(d){ // 세로
				x++;
			}else{
				y++;
			}
		}	
	}
	for(int i=1;i<h+1;i++){
		for(int j=1;j<w+1;j++)
			printf("%d ",array[i][j]);
		printf("\n");
	}
	return 0;
}
