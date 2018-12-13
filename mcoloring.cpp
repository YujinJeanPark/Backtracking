/****************************************************************
m-색칠하기 문제를 푸는 되추적 알고리즘 
문제: 비방향그래프에서 m개의 색만 사용하여 인접한 정점이 같은 색이
되지 않게 정점을 색칠할 수 있는 모든 방법을 구하시오.

입력: 양의 정수 n과 m, 그리고 n개의 정점을 가진 비방향그래프.
그래프는 행과 열의 인덱스가 모두 1부터 n까지인 2차원 배열 W로 표현
된다. 여기서 i번째 정점과 j번째 정점 사이에 이음선이 존재하면
W[i][j]는 true이고, 그렇지 않으면 false이다.
출력: 최대로 m개의 색을 가지고 인접한 정점이 같은 색이 되지 않게
그래프에 색칠하는 가능한 모든 경우. 출력은 인덱스가 1부터 n까지인
배열 vcolor이다. 여기서 vcolor[i]값은 i번째 정점에 할당된 색(1부터
m사이의 정수)이다.  
*****************************************************************/

void m_coloring(index i)
{
	int color;
	
	if(promising(i))
		if(i == n)
			cout << vcolor[1]에서 vcolor[n]까지;
		else
			for(color=1; color <=m; color++) {
				vcolor[i+1] = color;
				m_coloring(i+1);
			} 
} 

bool promising(index i)
{
	index j;
	bool switch;
	
	switch = true;
	j = 1;
	while(j < i && switch) {
		if(W[i][j] && vcolor[i] == vcolor[j])
			switch = false;
		j++;
	}
	return switch;
}

int main()
{
	m_coloring(0);
}
