#pragma once
#include <vector>
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <conio.h>
#include <Windows.h>
#include <iomanip>

using namespace std;

class Individual
{
private:

public:
	int * chromosome; //���������
	int chromosome_size; //����� ���������
	double fitness_value; //�������� ����������������� �����
	int max_passenger_time;
	int max_waiting_time;
	vector< pair <int, pair<int, int>>> routs_gaps; //������� �������� ����� �� ������ �� �������� ���������

	Individual(void);
	Individual(const Individual &tmp);
	Individual(int chromosome_size, vector< pair <int, pair<int, int>>> gaps);
	int PrintIndivid(void);//����� ����� ��������
	int Mutation(double probability, int mut_number);//�������
	static int Getrandvalue(int min, int max);

	~Individual(void);
};

