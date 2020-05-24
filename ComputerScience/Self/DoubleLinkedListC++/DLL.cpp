#include "DLL.h"

int main(){
    int array[3] = {0,1,-9};
    int length = 0;

    DLL * dll = arrayToDLL(array,3);

    
    insertBefore(dll, -1, 0);
    length = findLength(dll);
    printDLL(dll);
    
    insertAfter(dll, 3, 3);
    length = findLength(dll);
    printDLL(dll);
    
    insertBefore(dll, 0, 3);
    length = findLength(dll);
    printDLL(dll);

    insertAfter(dll, 1, 3);
    length = findLength(dll);
    printDLL(dll);

    int Largest = printNodeData(findLargestPointer(dll));
    int Smallest = printNodeData(findSmallestPointer(dll));
    int Sum = findSum(dll);
    int smallest = findSmallestPointer(dll)->data;
    return 0;
}

void insertBeforeFirst(DLL * list, int data){
    node * temp1;
    temp1 = new node;

    node * temp2;
    temp2 = list->head;

    temp1->data = data;
    temp1->next = temp2;
    temp1->prev = temp2->prev;

    temp2->prev = temp1;

    if(temp1->prev == NULL){
        list->head = temp1;
    }
}

void insertAfterLast(DLL * list, int data){
    node * temp1;
    temp1 = new node;

    node * temp2;
    temp2 = list->head;

    while(temp2->next!=NULL){
        temp2 = temp2->next;
    }//Go to last first way;
    //temp2 = list->tail;//Go to last 2nd way

    temp1->data = data;
    temp1->next = temp2->next;
    temp1->prev = temp2;

    temp2->next = temp1;

    if(temp1->next == NULL){
        list->tail = temp1;
    }
}

void insertBefore(DLL * list, int data, int pos){
    int n = 0;

    if(findLength(list) <= pos || pos < 0){
        return;
    }

    node * temp1;
    temp1 = new node;

    node * temp2;
    temp2 = list->head;

    while(temp2->next!=NULL && n != pos){
        n ++;
        temp2 = temp2->next;
    }

    temp1->data = data;
    temp1->next = temp2;
    temp1->prev = temp2->prev;

    if(temp2->prev!= NULL){
        temp2->prev->next = temp1;
    }
    temp2->prev = temp1;

    if(temp1->prev == NULL){
        list->head = temp1;
    }
}
void insertAfter(DLL * list, int data, int pos){
    int n = 0;
    int len = findLength(list);

    if(findLength(list) <= pos || pos < 0){
        return;
    }

    node * temp1;
    temp1 = new node;

    node * temp2;
    temp2 = list->head;

    while(temp2->next!=NULL && n != pos){
        n ++;
        temp2 = temp2->next;
    }

    temp1->data = data;
    temp1->next = temp2->next;
    temp1->prev = temp2;

    if(temp2->next!= NULL){
        temp2->next->prev = temp1;
    }
    temp2->next = temp1;

    if(temp1->next == NULL){
        list->tail = temp1;
    }
}

node * findLargestPointer(DLL * list){
    node * temp1 = list->head;
    node * temp2 = list->head;
    while(temp2!=NULL){
        if(temp1->data < temp2->data){
            temp1 = temp2;
        }
        temp2 = temp2->next;
    }
    return temp1;
}
/*
node * findSmallestPointer(DLL * list){
    node * temp1 = list->head;
    for(node * temp2 = list->head; temp2 != NULL; temp2 = temp2->next)
        if(temp1->data > temp2->data)
            temp1 = temp2;
    return temp1;
}*/
node * findSmallestPointer(DLL * list){
    node * temp1 = list->head;
    node * temp2 = new node;
    if(temp1 == NULL){
        return temp2;
    }
    if(temp1->next != NULL){
        temp2 = temp1->next;
    }else{
        return temp1;
    }
    DLL * dll = new DLL;
    dll->head = temp2;

    node * temp3 = findSmallestPointer(dll);
    if(temp3->data > temp1->data){
        return temp1;
    }
    return temp3;
}
int findSum(DLL * list){
    int n = list->head->data;
    node * temp1 = list->head;
    while(temp1->next!=NULL){
        temp1 = temp1->next;
        n += temp1->data;
    }
    return n;
}
int findLength(DLL * list){
    node * temp;
    temp = list->head;

    int temp1 = 0;

    while(temp!=NULL){
        temp1++;
        temp = temp->next;
    }
    return temp1;
}

void printDLL(DLL * list){
    node * temp1 = list -> head;
    cout<<"NULL <-> ";
    while(temp1 != NULL){
        cout << temp1->data << " <-> ";
        temp1 = temp1->next;
    }
    cout<<"NULL"<<endl;

    node * temp2 = list -> tail;
    cout<<"NULL <-> ";
    while(temp2 != NULL){
        cout << temp2->data << " <-> ";
        temp2 = temp2->prev;
    }
    cout<<"NULL"<<endl;
}

int printNodeData(node * Node){
    return Node->data;
}

DLL *arrayToDLL(int * array, int length){
    DLL * list = new DLL;

   list->head = NULL;
   list->tail = NULL;

   for (int i = 0; i < length; i++)
   {
      // add array[i] to the list

      if (list->head == NULL)
      {
         list->head = new node;
         list->head->data = array[i]; // (*head).data = a[i];
         list->head->prev = NULL;
         list->head->next = NULL;
         list->tail = list->head;
      }
      else
      {
        list->tail->next = new node;
        list->tail->next->prev = list->tail;
        list->tail = list->tail->next;
        list->tail->next = NULL;
        list->tail->data = array[i];
      }
   }

   return list; // return ptr to new list
}