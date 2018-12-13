/****************************************************************
�κ������� �� ���ϱ� ������ Ǫ�� ������ �˰���  
����: n�� ���� ����(����)�� ���� ���� W�� ������, ���� W�� �Ǵ� 
��� ������ ������ ��� ���Ͻÿ�.

�Է�: ���� ���� n, (�������� �ʴ� ������) ���ĵ� ���� ������ �迭 w
(������ 1���� n), ���� ���� W
���: ���� W�� �Ǵ� ��� ������ ���� 
*****************************************************************/

#include <iostream>
using namespace std;

void sum_of_subsets(index i, int weight, int total)
{
	if(promising(i))
		if(weight == W)
			cout << include[1]���� include[i]����;
		else {
			include[i+1] = "yes";	// w[i+1]�� �����Ѵ�.
			sum_of_subsets(i+1, weight+w[i+1], total-w[i+1]);
			include[i+1] = "no";	// w[i+1]�� �������� �ʴ´�. 
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
