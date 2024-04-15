#include <iostream>
#include <string>
#include <fstream>


class PRODUTO{
    
    //IMPLEMENTAÇÃO
    private:
        std::string produto_nome;
        std::string produto_tipo;
        int produto_preco=0;
        int produto_estoque=0;

    public:
    //INTERFACE

        //ABRIR ARQUIVO PARA LEITURA
        void abrir_arquivo(){
            std::string nome_arquivo = "catalogo.txt";
            std::ifstream arquivo(nome_arquivo);
            //verificar abertura
            if (!arquivo.is_open()){
                std::cout<<"Erro ao abrir o arquivo"<<std::endl;
            }
        }
            
            
        //leitura do arquivo

        //cin>>produto_nome
        //cin>>produto_tipo      todas essas se jutnarão em registrar()
        //cin>>produto_preco
        //cin>>produto_estoque

        //fechar arquivo

        /*Serão necessários métodos para as atribuições, para display dos itens da implementação,
        por exemplo um método void atribuir_estoque() que manipulará o atributo produto_estoque
        e outra como void imprimir_estoque(), estes métodos serão agrupados em métodos que atribuirão/
        imprimirão todas as informações de uma vez*/
        


};