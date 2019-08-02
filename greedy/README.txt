Greedy Algorithm [탐욕 알고리즘]
= 정의
.미리 정한 기준에 따라서 매번 가장 좋아 보이는 답을 선택하는 알고리즘.
.최적화기법으로 가장 최적인 해를 구한다. 반드시 보장하지 않는다.

= 용어
.가능 해(feasible solution) : 주어진 제약조건을 만족하는 해
.최적 해(optimal solution) : 가능 해 중 주어진 목적함수를 최소 또는 최대로 하는 해
.해 선택(selection procedure) : 지금 당시 가장 최적해를 집합에 추가
.적절성 검사(feasibility Check) : 새로운 부분해 집합이 적절한지 검사.
.해 검사(solution check) : 새로운 부분해 집합이 문제의 해가 되는지 검사.

= 유형
.부분집합형 : 한번에 한개의 입력을 고려하여, 입력이 제약조건 만족시 해집합에 포함. 
	한개의 입력은 남은 입력들 중에서 가장 큰 이익 주는 것으로 선택.
	[ex greedy. Kruskal]
	[선택-> 적절성검사-> 포함]
	solType Greedy(Type a[], int n){
		solType solution = empty;
		for(int i = 1; i <= n; i++){
			Type x = Selection(a); // greedy algo
			if Feasible(solution, x)
				solution = Union(solution, x);
		}
		return solution;
	}
.순서형 : 특정한 순서로 입력을 고려한다. 각 결정은 이미 내려진 결정을 이용하여 계산될 수
	있는 최적 평가 기준을 사용하여 만들어진다. 사용되는 최적 평가 기준이 Greedy.
	[ex greedy. Dijkstra]
	solType Greedy(Type a[], int n){
                solType solution = empty;
                for(int i = 1; i <= n; i++){
                        Type x = Selection(a); // greedy algo
                        solution = Union(solution, x);
                }
                return solution;
        }

= Greedy Algorithm 이용 예제
1. 최소비용신장트리(minimum cost spanning tree) 구하기.
.가중치 무방향 그래프에서 신장 트리의 비용은 신장 트리에 포함된 간선들의 비용이다
.최소 비용 신장트리는 최소의 비용을 갖는 신장트리이다
.간선들을 하나씩 처리함으로써 트리를 구성하는 방식.
.제약 조건 : 그래프내의 n-1 개의 간선을 포함하며, 사이클을 포함하지 않는다.
※ 부분집합형- 간선들의 부분 집합으로 해를 만든다※

_1.1 Kruskal Algorithm
.그래프의 간선들을 비용의 오름차순으로 차례차례 고려햐며, 사이클을 형성하지 않을 때 포함.
.시간복잡도: O(eloge)
..한 번에 하나씩 비용이 가장 작은 간선을 선택[선택]
..T에 이미 포함된 간선들과 사이클을 형성하지 않는 간선들만 차례로 T에 추가.[적절성검사]
..T에 n-1개의 간선들이 존재시 멈춘다.
[T는 해 트리, E는 간선들, (v,w)는 v에서 w 연결 비용]
{
	T = null
	while(num(T) < n-1 && E is not null){
		[선택]
		E에서 최소 비용 간선(v,w) 선택
		E에서 (v,w)를 삭제
		
		[적절성 검사]
		if((v,w)가 T에서 사이클 형성하지 않는다.)
			T에 (v,w)를 추가.
		else
			(v,w)를 거부.
	}
	if(T가 n-1개 미만)
		신장트리 없음
}

_1.2 Prim Algorithm
.지금까지 포함된 간선들의 비용의 합을 최소로 증가시키는 간선을 포함.
.시간복잡도: 인접행렬 구현시 O(n^2), 우선순위 큐를 사용시 O(elogv)
..트리 T에 인접한 간선들 중 T와 사이클 형성하지 않는 최소 비용 간선(u,v)을 포함.
..T에 n-1개의 간선이 포함될 때까지 이러한 추가단계 반복.
{
	TV = {1};
	for(T = null; num(T) < n-1; T <-(u,v) 추가){
		[u가 TV의 정점중 하나와 연결, v가 TV의 정점중 하나와도 연결 x]
		if(없으면) break;
		v를 TV에 추가
	}
	if(num(T) < n-1) 신장트리 없음.
}


2. 단일 출발지 최단경로 문제
.한 노드에서 연결된 다른 노드들로 가는 최단 거리를 구하는 알고리즘.
.모든 노드간 최단 거리 구하기 위해서는 플로이드 워셜 알고리즘 사용.
.가중치 방향 그래프, 출발지, 목적지
.단일 출발지 -> 모든 종점(간선의 길이가 양수일 경우만)

_2.1 Dijkstra Algorithm
[출발점 v를 포함하여]







