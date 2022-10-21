#include<stdio.h>
#include<assert.h>
const int N=640000;
char heap[N]={0};

size_t heap_size=0;

void *heap_alloc(size_t size){
	assert(heap_size+size<=N);
	void *memory_allocated=heap+heap_size;
	heap_size+=size;
	return memory_allocated;
}

void heap_free(void *p){

}

void heap_search(){

}


int main(){
	char *root=heap_alloc(10);
	for(int i=0;i<10;i++){
		root[i]=i+'a';
	}
}
