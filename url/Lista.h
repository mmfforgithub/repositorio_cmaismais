#include <iostream>
class Lista
{
    public:
        std::string url;
        int cadastro;
        Lista *elo;
        Lista** Inserir(Lista*, std::string, int);
        Lista** Excluir(Lista**, std::string, bool*) ;
        void Listar(Lista*);
        Lista* Pesquisar(Lista**, std::string);
}