
#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::cout << "Сохранить данные в файл ? 0 - нет, 1 - да:" << endl;
    int a;
    std::cin >> a;
  if (a == 0)
     {
         std::cout << "Без сохранения в файл" << endl;
         int i, j, n, m, massiv1[10][10], massiv2[10][10];
         cout << "Введите число строк от 1 до 10" << endl;
         cin >> n;
         cout << "Введите число столбцов от 1 до 10" << endl;
         cin >> m;

         srand(time(0));

         for (i = 0; i < n; i++) {
             for (j = 0; j < m; j++) {
                 massiv1[i][j] = 1 + rand() % 99;
             }
         }
         for (i = 0; i < n; i++) {
             for (j = 0; j < m; j++) {
                 massiv2[i][j] = 1 + rand() % 99;
             }
         }
         cout << "Рандомные числа матрицы 1" << endl;
         for (i = 0; i < n; i++) {
             for (j = 0; j < m; j++) {
                 cout << massiv1[i][j] << "\t";
             }
             cout << endl;
         }
         cout << endl;

         cout << "Рандомные числа матрицы 2" << endl;
         for (i = 0; i < n; i++) {
             for (j = 0; j < m; j++) {
                 cout << massiv2[i][j] << "\t";
             }
             cout << endl;
         }      
  }
  else if (a == 1)
     {
         std::cout  << "Сохранение в файл..." << endl;
      
     string fileName;
     cout << "Введите наименование файла: ";
     cin >> fileName;
     fileName += ".csv"; // Создание файла
     ofstream fout;
     fout.open(fileName.c_str(), ios::app);
      
    int i, j, n, m, massiv1[10][10], massiv2[10][10];
    cout << "Введите число строк от 1 до 10" << endl;
    cin >> n;
    cout << "Введите число столбцов от 1 до 10" << endl;
    cin >> m;

    srand(time(0));

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            massiv1[i][j]=1+rand() % 99;
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            massiv2[i][j] = 1 + rand() % 99;
        }
    }
    fout << "Рандомные числа матрицы 1" << endl;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            fout << massiv1[i][j]<< " ";
        }
        fout << endl;
    }
    fout << endl;

    fout << "Рандомные числа матрицы 2" << endl;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            fout << massiv2[i][j]<< " ";
        }
        fout << endl;
    }
    fout.close();
     }
}



    
//  std::cout << "Hello World!\n";
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.


