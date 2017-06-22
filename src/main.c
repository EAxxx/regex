/* Validador de logins
 *
 * Este programa realiza a validacao de logins e e-mails
 */

#include <stdio.h>
#include <regex.h>

 int main() {

  /* Variaveis que receberao as entradas do sistema*/
  char login[50];
  char email[50];

  /* Armazena uma expressao regular */
  regex_t regex_login;

  /* Guarda mensagens de erro */
  int ret;

  /* Receber entradas */
  scanf("%s %s\n", login, email);

  /* Compila uma expressao regular */
  ret = regcomp(&regex_login, "[a-z]*", 0);
  if (ret != 0) {
    printf("Erro: expressao regular nao compilada!\n");
    return 1;
  }

  /* Executa avaliador de expressao regular e busca um match */
  if (regexec(&regex_login, login, 0, NULL, 0) == 0) {
    printf("ACEITAR\n");
  } else {
    printf("REJEITAR\n");
  }

  return 0;
}
