// 3 ������������ ������
// ��������� ������������ ������

#include <iostream> //����������� �����-������

using namespace std; // ������������ ���� std

// ���������� ����������
int n, y, i, j, **x;

int main() // �������� ���� ���������
{
    setlocale(LC_ALL, "Russian");
    cin >> n;
    cin >> y;
    x = new int *[n];
    for (i = 0; i < n; i++)
        x[i] = new int[y];

    for (i = 0; i < n; i++)
        for (j = 0; j < y; j++)
            x[i][j] = rand() %20;


for (i = 0; i < n; i++)
{
cout<<"\n";
        for (j = 0; j < y; j++)
            cout << "a["<<i<<"]"<<"["<<j<<"] = 4"<<x[i][j]<<"  " ;



}
}