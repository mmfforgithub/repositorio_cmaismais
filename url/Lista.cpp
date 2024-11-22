# include "Lista.h"

void Lista::Listar(Lista *I){
    Lista *aux = I;
    while(aux != NULL){
        std::cout << aux -> url << " - " << aux -> cadastro << "\n";
        aux = aux -> elo;
    }
};

Lista **Lista::Inserir(Lista **R , std::string U, int I){
    Lista *novo = new Lista ();
    novo -> url = U;
    if(R[0] == NULL){
        R[0] = novo;
        R[1] = novo;
        R[1] -> elo = NULL;
    }else{
        Lista *antes = NULL;
        Lista *atual = R[0];
        while(atual != NULL && novo -> cadastro < atual -> cadastro){
            antes = atual;
            atual = atual -> elo;
        }
        while(atual != NULL && novo -> cadastro == atual -> cadastro && novo -> url > atual -> url){
            antes = atual;
            atual = atual -> elo;
        }
        }if(antes == NULL){
            novo -> elo = atual;
            R[0] = novo;
        }else if(atual == NULL){
            antes -> elo = novo;
            R[1] = novo;
            R[1] -> elo = NULL;
        }else{
            antes -> elo = novo;
            novo -> elo = atual;
        }
    return R;
};

Lista **Lista::Pesquisar(Lista **R, std:string U){

};

Lista **Lista::Excluir(Lista **R , std::string U, bool *achei){
    Lista *antes = NULL;
    Lista *atual = R[0];
    *achei = false;
    while ((atual != NULL) && (atual - > url != U)){
        ant = atual;
        atual = atual -> elo;
    }
    if(atual == NULL){
        *achei = false;
        return R;
    }else{
        *achei = true;
        if(atual == R [0]){
            R[0] = R[0] -> elo;
        }else if(atual == R [1]){
            R[1] = ant;
            R[1] -> elo = NULL;
        }else{
            ant -> elo = atual -> elo;
        }
        delete (atual);
    }
    return R;
};

