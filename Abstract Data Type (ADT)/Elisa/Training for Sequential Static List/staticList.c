#include <stdio.h>
#include <stdlib.h>
#include "staticList.h"
#define MAX 100

struct list{
    Student student[MAX];
    int amount;
};

List *createList(){
    List *li = (List*)malloc(sizeof(List));

    if(li == NULL){
        return 0;
    }

    li->amount = 0;
    

    return li;
    
}

int freeList(List *li){
    if(li == NULL){
        return 0;
    }

    free(li);

    return 1;
}

int printList(List *li){
    if(li == NULL){
        return 0;
    }

    if(li->amount == 0){
        printf("The list is empty!!!\n");
    }

    for(int i=0; i<li->amount; i++){
        printf("%s\n", li->student[i].name);
        printf("%.2lf\n", li->student[i].grade);
        printf("%d\n", li->student[i].registerNumber);
    }

    return 1;
}

int insertAtBeginning(List *li, Student stud){
    if(li == NULL){
        return 0;
    }

    if(li->amount == MAX){
        return 0;
    }

    for(int i = li->amount-1; i >= 0; i--){
        li->student[i+1] = li->student[i];
    }

    li->student[0] = stud;
    li->amount++;

    return 1;
}