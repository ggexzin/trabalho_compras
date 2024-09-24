#include <iostream>
using namespace std;

const int max_produtos = 100; // variável global para omáximo de produtos

struct Produto{     // estrutura de um produto
    string nome;
    float preço;
    int quantidade;
};


void adicionarProduto(Produto produtos[], int& quantidadeAtual){     // função para adicionar um produto
    quantidadeAtual = 0;
    if (quantidadeAtual < max_produtos )
    {
        cout << "Qual o nome do produto? ";
        cin >> produtos[quantidadeAtual].nome;
        cout << "Qual o preço do produto? ";   // se o limite ainda não foi atingido este bloco de codigo será executado
        cin >> produtos[quantidadeAtual].preço;
        cout << "Qual a quantidade do produto? ";
        cin >> produtos[quantidadeAtual].quantidade;
        
    }else{
        
        cout << "Atingiste o limite máximo de produtos!" << endl;   //caso o limite tenha sido atingido aparecerá este mensagem

    }
    
}

void exibirProdutos(const Produto produtos[], int quantidadeAtual){

        
    for (int i = 0; i < quantidadeAtual; ++i){                                            //função para exibir os produtos criados (não funciona)
        cout << "O nome do produto é: " << produtos[i].nome << endl;
        cout << "O preço do produto é: " << produtos[i].preço << endl;
        cout << "A quantidade do produto é: " << produtos[i].quantidade << endl;
        cout << endl; 
    }


}

float calcularValorTotal(Produto produto[], int quantidadeAtual) {
    float valorTotal = 0.0;
    for (int i = 0; i < quantidadeAtual; i++){                                      //função para calcular o valor total dos produtos em stock (não funciona)
        valorTotal += produto[i].preço * produto[i].quantidade;
    }
    return valorTotal;
}

int main() {
    system ("clear");
    int quantidadeAtual = 0;
    Produto max_produtos[100];
    Produto produto;
    int escolhas;


    cout << "1. Adicionar um produto" << endl;
    cout << "2. Exibir todos os produtos" << endl;
    cout << "3. Calcula e exibe o valor total de stock" << endl;
    cout << "4. Sair" << endl;
    cin >> escolhas;
    
    switch (escolhas) {
        case 1:
            adicionarProduto(max_produtos, quantidadeAtual); 
            main();
            system ("clear");
            break;
    
        case 2:
            exibirProdutos(max_produtos, quantidadeAtual); 
            main();
            system ("clear");
            break;
    
        case 3:
            cout << "O valor total do stock é: " << calcularValorTotal(max_produtos, quantidadeAtual) << endl; 
            main();
            system ("clear");
            break;
        
        case 4:
            cout << "A sair... " << endl; 
            break;

        default:
            cout << "Escolha errada, tente novamente!" << endl;
            break;
    }


    
    return 0;
}
