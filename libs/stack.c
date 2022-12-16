//Guilherme Bortoletto
//Ryan Sakurai
//Vinicius Castro

#include "stack.h"

#define INVALID -1


void stack_init(Stack *stack) {
    stack->array_size = 1;
    stack->array = malloc(stack->array_size * sizeof(U));
    stack->top_index = INVALID;
}


void stack_destroy(Stack *stack) {
    free(stack->array);
}


void stack_push(Stack *stack, U data) {
    //se o vetor estiver cheio, ele dobra de tamanho
    if(ptamanho(p) == p->t_vetor)
    {
        p->vetor = (U*) realloc(p->vetor, (p->t_vetor*2) * sizeof(U));
        p->t_vetor *= 2;
    }

    p->i_topo++;
    p->vetor[p->i_topo] = dado;
}


U stack_pop(Stack *stack) {
    if(!pvazia(p))
    {
        U retorno = p->vetor[p->i_topo];

        p->i_topo--;

        /* se o tamanho da pilha for 1/4 do tamanho do vetor ou menos,
           o vetor é divido ao meio */
        if(p->t_vetor>1 && ptamanho(p) <= p->t_vetor/4)
        {
            p->vetor = (U*) realloc(p->vetor, (p->t_vetor/2) * sizeof(U));
            p->t_vetor /= 2;
        }
        //t_vetor==1 é excluido pois, nesse caso, o vetor já é minimo

        return retorno;
    }    
}


U stack_get_top(Stack *stack) {
    if(!pvazia(p))
        return p->vetor[p->i_topo];
}


unsigned stack_get_size(Stack *stack) {
    return p->i_topo + 1;
}


bool stack_is_empty(Stack *stack) {
    if(ptamanho(p))
        return false;
    else
        return true;
}
