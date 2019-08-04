/* baekjoon 문제 5585 거스름돈 
   문제 분석
   지불할 돈이 m이라고 할때, 1000-m 크기를 갖는 배낭문제.
   해 선택 전략 : 단위가 큰 것 부터.
   적절성 검사 : 거스름돈 초과여부.
*/
#include<stdio.h>

int main(){
	int m, repay, count = 0, i = 0;
	int coin[6] = {500,100,50,10,5,1};
	scanf("%d",&m);
	repay = 1000 - m;
	while(1){
		if(repay - coin[i] == 0){ count++; break;}
		if(repay - coin[i] < 0){ i++; continue; }
		else{ repay = repay - coin[i]; count++; }
	}
	printf("%d",count);
	return 0;
}
