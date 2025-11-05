#include <stdio.h>
int main() {
int x = 10; // variável local
if (x > 5) {
int y = 20; // escopo restrito ao bloco if
printf("%d\n", y);
}
// printf("%d\n", y); // ERRO: y não existe aqui
return 0;
}
// Criadas ao entrar no bloco e destruídas ao sair dele.
