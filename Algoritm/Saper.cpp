//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//int sap() {
//	int num(10);
//	//cout << "Enter size: ";
//	//cin >> num;
//	char** matrix = new char* [num];
//	bool** m = new bool* [num];
//	
//	for (int i = 0; i < num; i++)
//	{
//		matrix[i] = new char[num];
//		m[i] = new bool[num];
//		for (int j = 0; j < num; j++)
//		{
//			matrix[i][j] = '#';
//			m[i][j] = false;
//			cout << setw(2) << matrix[i][j];
//		}
//		cout << endl;
//	}
//
//	for (int i = 0; i < num; i++)
//	{
//		int q = 0 + rand() % (num - 1);
//		for (int j = 0; j < num; j++) 
//		{
//			if (j == q)
//			{
//				matrix[i][j] = '0';
//				m[i][j] = true;
//			}
//			else
//			{
//				matrix[i][j] = '#';
//				m[i][j] = false;
//			}
//		}
//	}
//	
//	while(true)
//	{
//		bool question = false,
//			dom = false;
//		int x,
//			y;
//		cout << "Enter x: "; cin >> x;
//		cout << "Enter y: "; cin >> y;
//		if (m[x][y] == true)
//		{
//			cout << "You right!" << endl
//				<< "tebe ostalos naiti " << --num << " naiti" << endl;
//			dom = true;
//		}
//		else
//		{
//			cout << "You stupid!" << endl
//				<< "tebe ostalos naiti " << num << " naiti" << endl;
//		}
//		system("pause");
//		system("cls");
//
//		for (int i = 0; i < num; i++)
//		{
//			for (int j = 0; j < num; j++)
//			{
//				if (dom == true && m[i][j] == true)
//				{
//					matrix[i][j] = '0';
//					cout << setw(2) << matrix[i][j];
//				}
//				else
//				{
//					matrix[i][j] = '#';
//					cout << setw(2) << matrix[i][j];
//				}
//				dom = false;
//			}
//			cout << endl;
//		}
//		if (num == 0)
//		{
//			break;
//		}
//	}
//
//	return 0;
//}