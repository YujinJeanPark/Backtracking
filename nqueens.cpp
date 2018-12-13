/****************************************************************
n-여왕말 문제를 푸는 되추적 알고리즘
문제: 서양 장기판에 어떤 두 여왕말도 같은 행, 열, 대각선에 있지 않
도록 n개 여왕말을 놓으시오.

입력: 양의 정수 n
출력: n x n 서양 장기판에 n개 여왕말을 서로 위협받지 않고 놓을 수
있는 가능한 모든 방법. 각 출력은 인덱스 범위가 1부터 n까지인 정수
배열 col로 이루어진다. 여기서 col[i]는 i번째 행에 있는 여왕말이 놓여
있는 열이다. 
*****************************************************************/

#include <iostream>
using namespace std;

void queens(index i)
{
	index j;
	
	if(promising(i))
		if(i == n)
			cout << col[1] through col[n];
		else
			for(j=1; j<=n; j++) {
				col[i+1] = j;		// (i+1)번째 행에 있는 여왕말을 n개의 열에 
				queens(i+1);		// 놓을 수 있는지 각각 검사한다. 
			}
}

bool primising(index i)
{
	index k;
	bool switch;
	
	k = 1;
	switch = true;
	while(k < i && switch) {
		if(col[i] == col[k] || abs(col[i] - col[k]) == i-k)
			switch = false;
		k++;
	}
	return switch;
}

int main()
{
	queens(0);
}
