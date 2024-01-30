#pragma once

//Commun sources
void MainMenu();

//One-Dimention Array
void Menu_Part_1();
bool Check(int size);
void InsetArr(int size, double* arr);
void task_1(int size, double* arr);
void task_2(double* arr, int size);
void task_3(double* arr, int size);
double sum(int size, double* arr);
int quantity(int size, double* arr);
bool Negative(double* arr, int size, int El1, int El2);
int SearchEl1(double* arr, int size);
int SearchEl2(double* arr, int size);
double* create_of_new_arr(double* arr, int size, int new_size);
void DisplayPart_1(double* Array, int n);
int Size_of_Array(double* arr, int size);

//Two-Dimention Array
void Menu_Part_2();
void Exercise_1_Part_2(int** Array, int n);
void Exercise_2_Part_2(int** Array, int n);
int SizeCheck();
bool DataCheck_Part_2(int** Array, int n);
void DisplayPart_2(int** Array, int n);
void Input_of_Matrix_Elements(int** Array, int N);
int Count_Negative_Elements(int** Array, int* ResultMul, int n, int i);
int Sum_Of_Elements(int j, int i, int** Array, int n);
int Comparison(int MaxSum, int MaxSumIntermediate);
void Initialization_Of_Result_Martix(int* ResultMul, int n);
int Maximum_Sum(int** Array, int n);

//Char Array
void Menu_Part_3();
bool FileCheck(char* Array, int& N);
void DisplayPart3(char* Array, int N);
bool DataCheck_Part_3(char* Array, int N);
void Exercise_1_Part_3(char* Array, int n);