/*	Nama	:	Lolla Mariah	(201511018)
				Shofiyah		(201511031)
	Kelas	: 	D3-1A Teknik Informatika
	Program	:	Heap Sort 
	Tahun	: 	2022
*/

#include "header.h"
int main()
{
	loading_screen();
	struct node* root = NULL;
	int array[100];
	int index = 0;
	int opsi;
	int data;
	while(1){
		printf("\t|====================================|\n");
		printf("\t|         PROGRAM HEAP SORT          |\n");
		printf("\t|====================================|\n");
		printf("\t| 1. Input Number       	     |\n");
		printf("\t| 2. Preorder         	 	     |\n");
		printf("\t| 3. Postorder         	 	     |\n");
		printf("\t| 4. Display Array		     |\n");
		printf("\t| 5. Max HeapSort	  	     |\n");
		printf("\t| 6. Min HeapSort	    	     |\n");
		printf("\t| 7. User Guide			     |\n");
		printf("\t| 8. About Us			     |\n");
		printf("\t| 9. Exit                            |\n");
		printf("\t|====================================|\n");
		printf("\n\t  Pilih : "); scanf("%d", &opsi);
	
		switch(opsi){
			case 1:
				system("cls");
				printf("\t\t\t-------------------------------------\n");
				printf("\t\t\t|                                   |\n");
				printf("\t\t\t             Insert Data :");
				scanf("%d",&data);
				printf("\t\t\t|                                   |\n");
				printf("\t\t\t|                                   |\n");
				printf("\t\t\t-------------------------------------\n");
				printf("\t\t\tPress Any Key To Continue...");
				if(root == NULL){
					root=insert(root,data);
					array[index] = data;
				}
				else{
					insert(root,data);
					array[index] = data;
				}
				index++;
				break;
			case 2:
				system("cls");
				printf("\--------------PREORDER---------------\n");
				printf("-------------------------------------\n");
				preorder(root);
			case 3:
				system("cls");
				printf("\--------------POSTORDER--------------\n");
				printf("-------------------------------------\n");
				postorder(root);
				break;
			case 4:
				system("cls");
				printf("\------------DISPLAY ARRAY------------\n");
				printf("-------------------------------------\n");
				TampilArray(array, index);
				break;
			case 5:
				system("cls");
				printf("\-------------MAX HEAPSORT------------\n");
				printf("-------------------------------------\n");
				heapSortDescending(array, index);
				TampilArray(array, index);
				break;
			case 6:
				system("cls");
				printf("\-------------MIN HEAPSORT------------\n");
				printf("-------------------------------------\n");
				heapSortAscending(array, index);
				TampilArray(array, index);
				break;
			case 7:
				system("cls");
				panduan();
				break;
			case 8:
				system("cls");
				aboutUs();
				break;
			case 9:
				printf("\n\t  Anda telah keluar dari program.\n");
				exit(1);
			default: 
				printf("\t|  Angka yang diinputkan salah!      |\n");
				break;	
		}
		getch();
		system("cls");
	}
	return 0;
}

void panduan(){
	FILE *ft = fopen("panduan.txt","rt"); 
	char s[1000];
	if(ft == NULL){
		printf("\n file tidak dapat dibuka \n");
		exit(1);
	}
	while (fgets(s,100,ft)){
		printf("%s",s);
	}
	fclose(ft);
}

void aboutUs(){  
	printf("\n\t-----------------------------------------------");
	printf("\n\t|NAMA\t:Lolla Mariah\t   		      |\n");
	printf("\t|NIM \t:211511018\t                      |\n");
	printf("\t|KELAS\t:1A D3 TEKNIK INFORMATIKA\t      |\n");
	printf("\t----------------------------------------------|");
	printf("\n\t|NAMA\t:Shofiyah\t                      |\n");
	printf("\t|NIM \t:211511031\t                      |\n");
	printf("\t|KELAS\t:1A D3 TEKNIK INFORMATIKA\t      |\n");
	printf("\t-----------------------------------------------\n");
	printf("\t| Dibuat Tahun 2022                           |");
	printf("\n\t-----------------------------------------------");
}
