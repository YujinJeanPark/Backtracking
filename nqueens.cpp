/****************************************************************
n-���ո� ������ Ǫ�� ������ �˰���
����: ���� ����ǿ� � �� ���ո��� ���� ��, ��, �밢���� ���� ��
���� n�� ���ո��� �����ÿ�.

�Է�: ���� ���� n
���: n x n ���� ����ǿ� n�� ���ո��� ���� �������� �ʰ� ���� ��
�ִ� ������ ��� ���. �� ����� �ε��� ������ 1���� n������ ����
�迭 col�� �̷������. ���⼭ col[i]�� i��° �࿡ �ִ� ���ո��� ����
�ִ� ���̴�. 
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
				col[i+1] = j;		// (i+1)��° �࿡ �ִ� ���ո��� n���� ���� 
				queens(i+1);		// ���� �� �ִ��� ���� �˻��Ѵ�. 
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
