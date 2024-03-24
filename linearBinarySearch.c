#include<stdio.h>
#include<stdlib.h>
void linear_search(int[],int,int);
void binary_search(int[],int,int,int);
int main()
{
int ch, n, arr[50],i, key;
printf("Enter The Number of elements: ");
scanf("%d",&n);
printf("Enter the elements: ");
for(i = 0; i < n; i++)
scanf("%d",&arr[i]);
printf("Enter the key element: ");
scanf("%d",&key);
while(1)
 {
printf("\nChoose the correct option ");
printf("\n1.Linear Search.\n2.Binary Search.\n3. Exit \n Enter Your choice: ");
scanf("%d",&ch);
switch(ch)
 {
case 1:
linear_search(arr,n,key);
break;
case 2:
binary_search(arr,0,n-1,key);
break;
case 3:
exit(0);
default: 
printf("Invalid choice");
 }
}
return 0;
}
void linear_search(int arr[],int n,int key){
int i,flag=0;
for(i = 0; i < n; i++){
if(arr[i] == key){
printf("\nKey element found at %d\n",(i+1));
flag = 1;
break;
}
}
if (flag==0)
printf("\nKey element not found.\n");
}
void binary_search(int arr[],int l,int u,int key){
int mid = (l + u)/2, flag = 0;
while(l <= u){
if(arr[mid] == key)
 {
printf("\nKey element found at %d\n",mid+1);
flag = 1;
break;
}
 else if(arr[mid] > key)
u = mid - 1;
else
l = mid + 1;
mid = (l + u)/2;
}
if(flag == 0)
printf("\nKey element not found\n");
}