#include <stdio.h>
int main(){
  //1. Nhap so phan tu va gia tri cac phan tu int n;
  printf("Nhap so phan tu cua mang:");
  scanf("%d", &n);
  int numbers [n];
  printf("Nhap gia tri cac phan tu mang:\n"); 
  for (int i=0;i<n;i++){
    printf("numbers [%d]=",i);
    scanf("%d", &numbers[i]);
  }
  //2. Su dung thuat toan noi bot sap xep mang tang dan 
  for (int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
      if (numbers[j]>numbers[j+1]){
        int temp = numbers[j];
        numbers[j] = numbers [j+1]; 
        numbers[j+1] = temp;
      }
    }
  }
  //3. In mang sau khi da sap xep
  printf("Mang sau khi da sap xep tang dan:\n"); 
  for (int i=0;i<n;i++){
    printf("%d\t", numbers[i]);
  }
}