// Stampare la lista
void stampa_lista(lista l){
  for(; l != NULL; l = l->next){
    cout<< l->value <<endl;
  }
}


// Eliminare la lista
void elimina_lista(lista l){
  nodo* nextnode;
  while(l != NULL){
    nextnode = l -> next;
    delete l;
    l = nextnode;
  }
}
