#include<stdio.h>
#include<conio.h>
void main(){
int a[10],b[10],c[20],m,n,i,j,k=0;
clrscr();
printf("Enter the Size of first array:");
scanf("%d",&m);
printf("\nEnter the sorted elements of first array:");
for(i=0;i<m;i++){
scanf("%d",&a[i]);
}
printf("\nEnter the Size of Second array:");
scanf("%d",&n);
printf("\nEnter the sorted elements of second array:");
for(i=0;i<n;i++){
scanf("%d",&b[i]);
}
i=0;
j=0;
while(i<m && j<n){
    if(a[i]<=b[j]){
      c[k]=a[i];
      i++;
    }
    else{
      c[k]=b[j];
      j++;
    }
    k++;
}
if(i>=m){
  while(j<n){
     c[k]=b[j];
     j++;
     k++;
  }
}
if(j>=n){
  while(i<m){
  c[k]=a[i];
  i++;
  k++;
  }
}
printf("\nBefore Merging first array:\n");
for(i=0;i<m;i++){
   printf("%d\n",a[i]);
}
for(i=0;i<n;i++){
   printf("%d\n",b[i]);
}
printf("\nAfter merging the resultant sorted array:");
for(i=0;i<m+n;i++){
    printf("%d\n",c[i]);
}
getch();
}