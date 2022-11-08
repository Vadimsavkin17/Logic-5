#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	int n, m;
	int c = 0;
	int k = 0;
	printf("������� ���������� ������: ");
	scanf_s("%d", &n);
	m = n;
	int** G = new int* [n];
	int* H = new int[n];
	for (int i = 0; i < n; i++)
	{
		G[i] = new int[m];
	}

	for (int i = 0; i < n; i++) // ���� �� �������
	{
		for (int j = 0; j < m; j++) // ���� �� ��������
		{
			if (i == j)
			{
				G[i][j] = 0;
			}
			else if (i != j)
			{
				G[i][j] = rand() % 3;

				G[j][i] = G[i][j];
			}
		}
	}


	for (int i = 0; i < n; i++) // ���� �� �������
	{
		for (int j = 0; j < m; j++) // ���� �� ��������
		{
			if (G[i][j] != 0)
			{
				k++;
			}
			if (G[i][j] != 0 and i > j)
			{
				c++;
			}
			printf("%d ", G[i][j]);
		}
		H[i] = k;
		k = 0;
		printf("\n");
	}
	printf("\n\n");
	printf("������ ����� = %d\n", c);




	for (int i = 0; i < n; i++) {
		if (H[i] == 0) {
			printf("������������� ������� %d\n", i + 1);
		}
		if (H[i] == 1) {
			printf("�������� ������� %d\n", i + 1);
		}
		if (H[i] == n - 1) {
			printf("������������ ������� %d\n", i + 1);
		}
	}
	return 0;
}