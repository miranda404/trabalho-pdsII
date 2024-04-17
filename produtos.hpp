#include <iostream>
#include <string>
#include <fstream>
#include <vector>


class PRODUTO{
    
    //IMPLEMENTAÇÃO
    private:
        std::string nome;
        int tipo=0;                  //1=eletrodomesticos,2=movel,3=decoracao
        int faixa_preco=0;
        int estoque=0;

    public:
    //INTERFACE

        //ABRIR ARQUIVO PARA LEITURA
        void ler_arquivo(){
            std::ifstream arq("C:\\Users\\lucas\\Desktop\\TRABALHO\\catalogo.txt");      //CRIADA DE UM OBJETO DA CLASSE IFSTREAM
            if(!arq){
                std::cout<<"ERRO AO ABRIR O ARQUIVO!"<<std::endl;       
            }
            
            else{   //LEITURA
                std::vector<PRODUTO> produtos;      
                PRODUTO temp;
                while(arq>>temp.nome>>temp.tipo>>temp.faixa_preco>>temp.estoque){  //Enquanto ler, atribuir a temp
                    produtos.push_back(temp);       //Aqui, ele coloca cada objeto dentro de um vetor <produtos>
                }

                arq.close();           //FECHA O ARQUIVO

                /*for(int i=0;i<produtos.size();i++){     //PARA TESTES
                    std::cout<<produtos[i].nome<<" "<<produtos[i].tipo<<std::endl;
                }*/

                    //ORGANIZAR ARQUIVO
                std::vector<std::vector<PRODUTO>> matriz_eletrodomesticos;  //serão 1 vetor pra cada tipo
                std::vector<std::vector<PRODUTO>> matriz_moveis;
                std::vector<std::vector<PRODUTO>> matriz_decoracao;

                


            }


            
        }
        
        
        




        };
            




















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
        


