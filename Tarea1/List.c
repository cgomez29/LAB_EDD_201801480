#include "List.h"

    void add(List* list,Nodo* nuevo){
    if(list->head == NULL){
        list->head = nuevo;
    }else if(nuevo->val <= list->head->val){
        nuevo->rigth = list->head;
        list->head->left = nuevo;
        list->head = nuevo;
    }else{
        Nodo* aux = list->head;
        while(aux->rigth != NULL){
            if(aux->val > nuevo->val){
                    Nodo* ant = aux->left;
                    ant->rigth = nuevo;
                    nuevo->left = ant;
                    nuevo->rigth = aux;
                    aux->left = nuevo;
                    return;
                }else if(nuevo->val <= aux->rigth->val){
                    Nodo *siguiente = aux->rigth;
                    aux->rigth = nuevo;
                    nuevo->left = aux;
                    nuevo->rigth = siguiente;
                    siguiente->left = nuevo;
                    return;
                }
            aux = aux->rigth;
        }
        aux->rigth = nuevo;
        nuevo->left = aux;
    }
}

void delete_nodo(List* list, int index)
{
    Nodo* aux = list->head;
    int contador = 0;
    if (aux == NULL)
    {
        printf("No hay valores en la Lista");
    }
    while (aux != NULL)
    {

        if (contador == index)
        {            
            if (aux->rigth == NULL && aux->left == NULL)
            {
                list->head = NULL;
                break;
            } else if(aux->rigth == NULL)
            {
                aux->left->rigth = NULL;
                break;
            } else if (aux->rigth != NULL && aux->left == NULL)
            {
                list->head = aux->rigth;
                break;
            }
            else 
            {
                aux->left->rigth = aux->rigth;
                aux->rigth->left = aux->left;
                break;
            }
        }
        contador++;
        aux = aux->rigth;
    }
    
}

void get(List* list, int index)
{
    Nodo* aux = list->head;
    int contador = 0;
    if (aux == NULL ) {
        printf("No hay valores en la Lista");
    }
    while (aux != NULL)
    {   
        if (contador == index) {
            printf("Valor: %i \n", aux->val);
            break;
        }
        contador++;
        aux = aux->rigth;
    }
}


void liberar(List* list)
{
    Nodo* aux = list->head;
    Nodo* temp;
    while (aux != NULL)
    {
        temp = aux->rigth;
        free(aux);
        aux = temp;
    }
}

void imprimir(List* list){
    Nodo* aux=list->head;
    if (aux == NULL)
    {
        printf("No hay valores en la Lista");
    }
    while(aux!=NULL){
        printf("El valor es %i \n",aux->val);
        aux=aux->rigth;
    }
}

List* newList(){
    List* nueva=(List*) malloc(sizeof(List));
    nueva->head=NULL;
    return nueva;
}

void generar(List* l){
    FILE * fp;
    fp=fopen("./cadigo.txt","w");
    if(fp==NULL){
        printf("Error");
        return;
    }
    char cad[1024];
    sprintf(cad,"digraph G{ \n node[shape=\"box\"];\n");
    fputs(cad,fp);
    Nodo* aux=l->head;
    guardarRecursivo(aux,fp,cad);
    sprintf(cad,"}\n");
    fputs(cad,fp);
    fclose(fp);
}

void guardarRecursivo(Nodo* aux,FILE* fp,char c[]){
    if(aux==NULL){
        return;
    }else{
        if(aux->rigth!=NULL){
            sprintf(c,"node%p[label=\"%i\",color=\"red\"]\n",&(*aux),aux->val);
            fputs(c,fp);
            guardarRecursivo(aux->rigth,fp,c);
            sprintf(c,"node%p->node%p[color=\"green\"];\n node%p->node%p[color=\"green\"];\n",&(*aux),
                &(*aux->rigth),&(*aux->rigth),&(*aux));
            fputs(c,fp);
        }else{
            sprintf(c,"node%p[label=\"%i\", color=\"red\"]\n",&(*aux),aux->val);
            fputs(c,fp);
        }
    }
}