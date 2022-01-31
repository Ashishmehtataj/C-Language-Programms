#include<stdio.h>
void traversing(int array[],int noe){
	if(noe==0){
		printf("Empty array");
	}else{
		for(int i=0;i<noe;i++){
			printf("%d ",array[i]);
		}
	}
}
void insertion(int array[],int newdata,int index,int noe,int size){
	if(index<0 || index >=size){
		printf("Invalid choice\n");
	}else{
		for(int i=size-1;i>=index;i--){
			array[i+1] = array[i];
		}
		array[index] = newdata;
	}
}
void deletion(int array[],int index,int noe){
	while(index<noe){
		array[index-1] = array[index];
		index = index+1;
	}
	if(index>=noe){
		printf("Invalid index please enter a valid index\n");
	}
}
void updation(int array[],int index,int newdata,int noe){
	if(index>noe){
		printf("Invalid index please select a valid choice\n");
	}else{
		for(int i=0;i<noe;i++){
			if(i==index){
				array[index] = newdata; 
				break;
			}
		}
	}
}
void reverse(int array[],int first,int last,int noe){
	int temp;
	for(int i=0;i<noe;i++){
		temp = array[first];
		array[first] = array[last];
		array[last] = temp;
		first++;
		last--;
	}
}
void sorting(int array[],int noe){
	int temp;
	for(int i=0;i<noe;i++){
		for(int j=i+1;j<noe;j++){
			if(array[i] > array[j]){
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}
void searching(int array[],int data,int noe){
	for(int i=0;i<noe;i++){
		if(array[i] = data){
			printf("Data found at location %d\n",i+1);
			break;
		}
	}
}
int  main(){
	int	size=100;
	int array[100] = {1,2,3,4};
	int noe=4,choice,newindex,newdata;
	printf("\n -------------- All operation in array-------------------\n");
	while(choice!=8){
		printf("Enter 1 for INSERTION\n");
		printf("Enter 2 for DELETION\n");
		printf("Enter 3 for TRAVERSING\n");
		printf("Enter 4 for UPDATION\n");
		printf("Enter 5 for REVERSE ARRAY\n");
		printf("Enter 6 for SORT ARRAY\n");
		printf("Enter 7 for SEARCH ITEM IN ARRAY\n");
		printf("Enter 8 for EXIT\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter index you want to insert new data : ");
				scanf("%d",&newindex);
				printf("Enter data you want to insert : ");
				scanf("%d",&newdata);
				insertion(array,newdata,newindex,noe,size);
				noe = noe +1;
				printf("Data insert successfully\n");
				break;
			
			case 2:
				printf("Enter index you want to insert new data : ");
				scanf("%d",&newindex);
				deletion(array,newindex,noe);
				noe = noe-1;
				printf("Data delete successfully\n");
				break;
			
			case 3:
				traversing(array,noe);
				printf("\n");
				break;
						
			case 4:
				printf("Enter newdata : ");
				scanf("%d",&newdata);
				printf("Enter newindex : ");
				scanf("%d",&newindex);
				updation(array,newindex,newdata,noe);
				printf("Data updata successfully\n");
				break;
			
			case 5:
				printf("Traversing a array in reverse array : ");
				reverse(array,0,noe-1,noe);
				printf("\n");
				break;
			
			case 6:
				sorting(array,noe);
				printf("Sorted array successfully\n");
				break;
			
			case 7:
				printf("Enter data your want to search : ");
				scanf("%d",newdata);
				searching(array,newdata,noe);
				break;
			
			case 8:
				exit(0);
				break;
				
			default:
				printf("Invalid choice please select a valid choice\n");
				break;
		}
	}
}
