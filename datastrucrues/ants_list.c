#include "ants_list.h"



ants_list_t* ants_new_list()
{
  ants_list_t* ret = NULL;
  ret = malloc(sizeof(ants_list_t));
  
  return ret;
}


int ants_list_add_head(ants_list_t* list, void* data)
{
  int ret = 0;
  ants_node_t* node_alloc = NULL;

  if (!list)
  {
    return -1;
  }

  node_alloc = malloc(sizeof(ants_node_t*));

  if (list->head == NULL)
  {
  }


  return ret;
}
