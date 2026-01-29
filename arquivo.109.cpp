#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <stdbool.h>
#include <fstream> // Serve para abrir e escrever em arquivos 


using namespace std;

int main()
{

    // cria o objeto de arquivo 

    ofstream arquivoDEsaida;

    arquivoDEsaida.open("texto.txt", std:: ios_base::app);

    // escrevendo algo no arquivo
    arquivoDEsaida << "bbzao";


    //arquivo de saida
    arquivoDEsaida.close();


}