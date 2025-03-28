#ifndef SORT_H
#define SORT_H

void selectionSort(int arr[], int n, int& countCmp);

void bubbleSort(int arr[], int n, int& countCmp);

void merge (int arr[], int left, int mid, int right, int& countCmp);
void mergeSort (int arr[], int left, int right, int& countCmp);

int binarySearch(int a[], int item, int left, int right, int& countCmp);
void binaryInsertionSort(int a[], int n, int& countCmp);

void insertionSort(int arr[], int n, int& countCmp);

int partition(int arr[], int low, int high, int& countCmp);
void quickSort(int arr[], int low, int high,int& countCmp);

void countingSort(int arr[], int n, int& countCmp);

void flashSort(int arr[], int n,int& countCmp);

void shellSort(int a[], int n, int& countCmp);

void shakerSort(int a[], int n, int& countCmp);

void heapRebuild(int i, int a[], int n, int& countCmp);
void heapConstruct(int a[], int n, int& countCmp);
void heapSort(int a[], int n, int& countCmp);

void radixSort(int a[], int n, int& countCmp);

void GenerateRandomData(int a[], int n);
void GenerateSortedData(int a[], int n);
void GenerateReverseData(int a[], int n);
void GenerateNearlySortedData(int a[], int n);

void GenerateData(int a[], int n, int dataType);

double measureSortingTime(string algorithm, int arr[], int n, int& countCmp);
void writeResults(string algorithm, string order, int size, double time, int countCmp);
void runExperiments();

#endif