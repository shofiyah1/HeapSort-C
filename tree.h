/*	Nama	:	Lolla Mariah	(201511018)
				Shofiyah		(201511031)
	Kelas	: 	D3-1A Teknik Informatika
	Program	:	Heap Sort 
	Tahun	: 	2022
*/


#ifndef tree_H
#define tree_H


struct node {
    int key;
    struct node *left, *right;
};

/* Author : Lolla Mariah */
/*****************************************/
/* Untuk Membuat Node Baru Pada Heap.*/
struct node* newNode(int item);
/* Untuk Memasukkan Node Pada Heap.*/
struct node* insert(struct node* node, int key);
/* Untuk Melakukan Traversal Secara Preorder */
void preorder(struct node* root);
/* * * HEAP SORT MIN TO MAX * * */
void heapifyAscending(int arr[], int n, int i);
void heapSortAscending(int arr[], int n);
/*****************************************/


/* Author : Shofiyah */
/*****************************************/
/*	Untuk Menampilkan Isi Array	*/
void TampilArray(int array[], int index);
/* Untuk Melakukan Traversal Secara Preorder */
void postorder(struct node* root);
/* Untuk Menukar Data Satu Dengan Yang Lainnya */
void swap(int *a, int *b);
/* * * HEAP SORT MAX TO MIN * * */
void heapifyDescending(int arr[], int n, int i);
void heapSortDescending(int arr[], int n);
/*****************************************/

#endif
