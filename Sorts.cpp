#include <iostream>

void PrintArray(int *array, int n) {
  for (int i = 0; i < n; ++i)
    std::cout << array[i] << " " << std::flush;
  std::cout << std::endl;
}

//merge sort
void Merger(int arr[], int lo, int  mi, int hi){
    int *temp = new int[hi-lo+1];//temporary merger array
    int i = lo, j = mi + 1;//i is for left-hand,j is for right-hand
    int k = 0;//k is for the temporary array
    while(i <= mi && j <=hi){
        if(arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }
    //rest elements of left-half
    while(i <= mi)
        temp[k++] = arr[i++];
    //rest elements of right-half
    while(j <= hi)
        temp[k++] = arr[j++];
    //copy the mergered temporary array to the original array
    for(k = 0, i = lo; i <= hi; ++i, ++k)
        arr[i] = temp[k];

    delete []temp;
}
void MergeSortHelper(int arr[], int lo, int hi){
    int mid;
    if(lo < hi){
        mid = (lo + hi) >> 1;
        MergeSortHelper(arr, lo, mid);
        MergeSortHelper(arr, mid+1, hi);
        Merger(arr, lo, mid, hi);
    }
}
void MergeSort(int arr[], int arr_size){
    MergeSortHelper(arr, 0, arr_size-1);
}

//selection sort
inline void Swap(int &a, int &b){
  int k = a;
  a = b;
  b = k;
}

void SelectionSort(int arr[], int arr_size){
  for(int i = 0; i < arr_size - 1; ++i){
    int min = i;
    for(int j = i+1; j < arr_size; ++j)
      if(arr[j] < arr[min])
        min = j;
    Swap(arr[min], arr[i]);
  }
}

//Quick sort
inline int rand(int p, int q){
    int size = q - p + 1;
//    srand(time(NULL));
    return (p + rand() % size);
}
int Partition(int arr[], int lo, int hi){
    //produce ramdom subscript
    int t = rand(lo, hi);
    Swap(arr[t], arr[hi]);

    int index = lo - 1;
    int key = arr[hi];
    for(int i = lo ; i < hi; i++){
        if(arr[i] <= key)
            Swap(arr[++index], arr[i]);
    }
    Swap(arr[++index], arr[hi]);
    return index;
}
void QuickSortHelper(int arr[], int lo, int hi){
    if(lo < hi){
        int index = Partition(arr, lo, hi);
        QuickSortHelper(arr, lo, index-1);
        QuickSortHelper(arr, index+1, hi);
    }
}

void QuickSort(int arr[], int arr_size){
    QuickSortHelper(arr, 0, arr_size-1);
}

//insertion sort
void InsertionSort(int arr[], int arr_size){
  if(arr_size > 1){
    int size = arr_size;
    for(int i = 1; i < size; ++i){
      int j = i - 1;
      int key = arr[i];
      while(j >= 0 && arr[j] > key){
        arr[j+1] = arr[j];
        --j;
      }
      arr[j+1] = key;
    }
  }
}

//bubble sort
void BubbleSort(int *array, int n) {
  bool swapped = true;
  int j = 0;
  int temp;

  while (swapped) {
    swapped = false;
    j++;
    for (int i = 0; i < n - j; ++i) {
      if (array[i] > array[i + 1]) {
        temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
        swapped = true;
      }
    }
  }
}


int main() {
  int array[] = {94, 42, 50, 95, 333, 65, 54, 456, 1, 1234};
  int n = sizeof(array)/sizeof(array[0]);

  std::cout << "Before Merge Sort :" << std::endl;
  PrintArray(array, n);

  MergeSort(array, n);

  std::cout << "After Merge Sort :" << std::endl;
  PrintArray(array, n);
  return (0);
}
