#include<bits/stdc++.h>
using namespace std;

int n;
int i,j,x;
int temp;
int arr[100];

void bubble_sort();
void perpindahan_posisi();
void display();

int main(){
	
	printf("Masukkan banyaknya angka yang ingin diurutkan : "); scanf("%d", &n);
	for (i=0; i<n; i++){
		printf("Masukkan angka ke-%d : ", i+1); scanf("%d", &arr[i]);
	}
	
	printf("\nSebelum diurutkan : ");	
	for (i=0; i<n; i++){
		printf("%d, ", arr[i]);
	}
	printf("\n");
	
	bubble_sort();
	//masuk fungsi untuk mengurutkan angka
	//bubble_sort, perpindahan_posisi, display
	
	printf("\nSetelah diurutkan : ");
	display();
	
	printf("\nProgram selesai");
}

void bubble_sort(){
	
	printf("\nStep by step urutan : \n");
	for(i=0; i<n; i++){
		for(j=0; j<n-i-1; j++){
			
			if(arr[j]> arr[j+1]){
				perpindahan_posisi();
			}		
		}
	display();
	printf("\n");
	}
	
}

void perpindahan_posisi(){
	
	temp = arr[j];
	arr[j] = arr[j+1];
	arr[j+1] = temp;
	
}

void display(){
	
	for(j=0; j<n; j++){
		printf("%d, ", arr[j]);
	}

}
//create by Ardhiya Shita
