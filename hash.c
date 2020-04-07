#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 10

typedef struct Item{
	char* name;
	int data;
} Item;

struct Item* hashArray[SIZE];

int hash (char* input){
	int toInt=0;
	
	for(int i = 0; i < strlen(input); i++){
		int ascii = input[i];
		toInt += ascii;
	};
	return toInt;
};

int hashIndex(int num){
	return num % SIZE;
};




int main(){
	for(int i = 0; i<30; i++){
		printf("%s/n",  hashArray[i]->name);
	};
	return 0;
};
