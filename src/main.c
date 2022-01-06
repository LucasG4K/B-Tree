#include "btree.h"

int main(){

	int reg[] = {7,9,12,22,10,55,40,74,85,91,80,61,31,98, /*novos itens*/ 1, 33, 99, 54, 13};
	
	Record r;
  	Pagina *btree = CreateBTree();

  	for(int i=0; i<18; i++){
    	r.key = reg[i];
    	Insere(&btree, r);
  	}

	Imprime(&btree, 0);
	
	printf("=======================\n");

	int rem[] = {55, 91, 7, 1, 9, 40, 80};

	for(int i=0; i<6; i++){
    	Retira(&btree, rem[i]);
  	}

  	Imprime(&btree, 0);
	
	return 0;

}