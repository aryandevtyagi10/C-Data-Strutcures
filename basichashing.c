#include <stdio.h>
#include <stdlib.h>
#define SIZE 13  

int hashFunction(int key) {
    return key % SIZE;
}
void insert(int hashTable[], int key) {
    int index = hashFunction(key);
    if (hashTable[index] == -1) {
        hashTable[index] = key;
    } else {
        printf("Collision detected at index %d for key %d\n", index, key);
    }
}
void display(int hashTable[]) {
    for (int i = 0; i < SIZE; i++) {
        if (hashTable[i] != -1) {
            printf("Index %d: %d\n", i, hashTable[i]);
        }
    }
}
int main() {
    int hashTable[SIZE];
    for (int i = 0; i < SIZE; i++) {
        hashTable[i] = -1;
    }
    insert(hashTable, 12);
    insert(hashTable, 22); 
    insert(hashTable, 35);  
    insert(hashTable, 47);  
    insert(hashTable, 53);  
    display(hashTable);
    return 0;
}