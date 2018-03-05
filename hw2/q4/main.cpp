#include<iostream>
#include<cmath>

using namespace std;
/*using std::cin;
  using std::endl;*/
void selectionSort(double arr[],int N);

int main(){
int N{1000};
 int j{};
 double num{};
 double* arr{new double[N]};
 cout<<"enter number, 0 is equal to end of program"<<endl;
    while(true){
        cin >> num;
	if(num !=0 ){
	arr[j] = num;
        j++;}
	else
	  break;
}
    selectionSort(arr , j);
    delete[] arr;

}

void selectionSort(double arr[],int N){

  int small,temp;
  for (int i{}; i< N ; i++){
    small = i;
    for (int j{i+1}; j < N; j++){
      if(arr[j] < arr[small])
	small = j;
    }
    if (small != i){
      temp = arr[i];
      arr[i] = arr[small];
      arr[small] = temp;
    }
    cout<<arr[i]<<endl;
      }

}
