///*/
//Ћюбое целое число N>0 можно представить в виде суммы натуральных слагаемых,
//каждое из которых €вл€етс€ степенью числа 2. —уммы, различающиес€ лишь пор€дком 
//слагаемых, считаютс€ одинаковыми.
//Ќайти   Ц число способов, которыми можно представить число N в виде суммы 
//натуральных слагаемых, каждое из которых €вл€етс€ степенью числа 2.
//Ќапример,
//7 = 4+2+1 = 4+1+1+1 = 2+2+2+1 = 2+2+1+1+1 = 2+1+1+1+1+1 = 1+1+1+1+1+1+1
//и K = 6.
///**/

#include <iostream>
#include <iomanip>

using namespace std;

void check_warring(int number) {
	if (!cin){
		cout << "Input Error!" << endl;
		cin.clear();
	}
}
void permutation_number_in_matrix(int size, int* matrix) {
	for (int i = 0; i < size; i++)
	{
		if (matrix[i] < matrix[i + 1])
		{
			int mtr = matrix[i];
			matrix[i] = matrix[i + 1];
			matrix[i + 1] = mtr;
		}
	}
}

int dima() {
	//„исло дл€ разложени€
	int number_for_decomposition = 0,
		K = 0;
	cout << "Enter some number to decomposition: ";
	cin >> number_for_decomposition;
	check_warring(number_for_decomposition);
	
	//Ёту переменную можно заменить на первую переменную (поставил эту переменную дл€ красоты)
	int enter_number_for_size_matrix = number_for_decomposition;
	int** matrix_sum = new int* [enter_number_for_size_matrix];

	for (int i = 0; i < enter_number_for_size_matrix; i++)
	{
		matrix_sum[i] = new int[enter_number_for_size_matrix];
		for (int j = 0; j < enter_number_for_size_matrix; j++)
		{
			matrix_sum[i][j] = 0;
		}
	}
	cout << endl;

	//Ќачало работы над матрицей
	/******************************************************/
	for (int i = 0; i < enter_number_for_size_matrix-1; i++)
	{
		for (int j = 0; j < enter_number_for_size_matrix; j++)
		{
			if (i == 0)
			{
				matrix_sum[i][j] = 1;
			}
			else {
				/*for (int t = 0; t < enter_number_for_size_matrix; t++)
				{*/
					if (matrix_sum[i - 1][j] == matrix_sum[i - 1][j + 1])
					{
						matrix_sum[i][j] = matrix_sum[i][j] + matrix_sum[i][j + 1];
						matrix_sum[i][j + 1] -= matrix_sum[i][j + 1];
					}
				
			}
		}
		K++;
		// опирование строчек
		for (int g = 0; g < enter_number_for_size_matrix; g++)
		{
			matrix_sum[i + 1][g] = matrix_sum[i][g];/////////////////
		}
	}

	for (int i = 0; i < enter_number_for_size_matrix; i++)
	{
		for (int j = 0; j < enter_number_for_size_matrix; j++)
		{
			cout << setw(2) << matrix_sum[i][j];
		}
		cout << endl;
	}
	cout << endl << "K: " << K;
	return 0;
}
 
//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//void check_warring(int number) {
//	if (!cin){
//		cout << "Input Error!" << endl;
//		cin.clear();
//	}
//}
//void permutation_number_in_matrix(int size, int* matrix) {
//	for (int i = 0; i < size; i++)
//	{
//		if (matrix[i] < matrix[i + 1])
//		{
//			int mtr = matrix[i];
//			matrix[i] = matrix[i + 1];
//			matrix[i + 1] = mtr;
//		}
//	}
//}
//
//int dima() {
//	int number(0),
//		** matrix = new int* [number];
//
//	cout << "Enter number: ";
//	cin >> number;
//	check_warring(number);
//
//	//«аполн€ем матрицу нул€ми
//	for (int i = 0; i < number; i++)
//	{
//		matrix[i] = new int[number];
//		for (int j = 0; j < number; j++)
//		{
//			matrix[i][j] = 0;
//		}
//	}
//	//
//	for (int i = 0; i < number; i++)
//	{
//		for (int j = 0; j < number; j++)
//		{
//			cout << setw(2) << matrix[i][j];
//		}
//		cout << endl;
//	}
//
//	return 0;
//}

//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//int max_1(int *mtr, int end, int start, int num = 0) {
//	for (int i = 0; i < end; i++)
//	{
//		if (mtr[i] == 1) {
//			num++;
//		}
//	}
//	return num;
//}
//
//int dima() {
//
//	int length,
//		K = 0;
//	cout << "Enter lenght: "; cin >> length;
//
//	int	** matrix = new int* [length];
//
//
//	for (int i = 0; i < length; i++)
//	{
//		matrix[i] = new int[length];
//		for (int j = 0; j < length; j++)
//		{
//			if (i == 0)
//			{
//				matrix[i][j] = 1;
//			}
//			else {
//				matrix[i][j] = 0;
//			}
//		}
//	}
//	//////////////////////////////////////
//	//Ќачало
//	for (int i = 0; i < length - 1; i++)
//	{
//		int g = 0;
//		for (int j = 0; j < length - 1; j++)
//		{
//			
//			if (matrix[i][j] == matrix[i][j + 1])
//			{
//				matrix[i + 1][g] = matrix[i][j] + matrix[i][j + 1];
//				g++;
//				break;
//			}
//		}
//		if (i != length - 1)
//		{
//			for (int w = 0; w < length; w++)
//			{
//				matrix[i][w] = matrix[i][w];
//			}
//		}
//	}
//
//	
//	////////////////////////////////////
//	//¬вывод
//	for (int i = 0; i < length; i++)
//	{
//		for (int j = 0; j < length; j++)
//		{
//			cout << setw(2) << matrix[i][j];
//		}
//		cout << endl;
//	}
//
//	return 0;
//}