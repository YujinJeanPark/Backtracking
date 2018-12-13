/****************************************************************
부분집합의 합 구하기 문제를 푸는 되추적 알고리즘  
문제: n개 양의 정수(무게)와 양의 정수 W를 가지고, 합이 W가 되는 
모든 정수의 조합을 모두 구하시오.

입력: 양의 정수 n, (감소하지 않는 순으로) 정렬된 양의 정수의 배열 w
(범위는 1부터 n), 양의 정수 W
출력: 합이 W가 되는 모든 정수의 조합 
*****************************************************************/

#include <iostream>
using namespace std;

void sum_of_subsets(index i, int weight, int total)
{
	if(promising(i))
		if(weight == W)
			cout << include[1]에서 include[i]까지;
		else {
			include[i+1] = "yes";	// w[i+1]을 포함한다.
			sum_of_subsets(i+1, weight+w[i+1], total-w[i+1]);
			include[i+1] = "no";	// w[i+1]을 포함하지 않는다. 
			sum_of_subsets(i+1, weight, total-w[i+1]);			
		}
}

bool promising(index i)
{
	return (weight + total >= W) && (weight == W || weight + w[i+1] <= W);
}


int main()
{
	sum_of_subsets(0, 0, W);
}
