// ������ � ���������� switch
#include <iostream>
int main()
{
	setlocale(LC_ALL, "rus");
	int k;
	puts("������ ������ ������(1 - ��, 2 - ���)");
	std::cin >> k;
	switch (k)
	{
		case 1:
		{ 
			puts("��� ����?(1 - ������, 2 - �����, 3 - ����� ���� � �����, 4 - ��� �����");
			std::cin >> k;
			switch (k)
				{
					case 1: puts("���� �� ���"); break;
					case 2: puts("������ �� ����� ������"); break;
					case 3: puts("������ ������� :("); break;
					case 4: puts("��������� �� ��������"); break;
				}
		break;
		}
		case 2: puts("�������� ���"); break;
		default: puts("������������ ����"); break;
	}
	return 0;
}