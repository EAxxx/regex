# Detectando logins e e-mails válidos

Um problema que existe em sistemas web é que os dados fornecidos pelo usuário
final nem sempre são válidos. Alguém poderia criar uma conta em um serviço web
usando um e-mail fantasma, por exemplo. Outro problema é que determinados logins
poderiam gerar problemas em etapas posteriores do banco de dados, por exemplo
devido à compatibilidade de sistemas antigos com acentos ou caracteres
especiais.

O programa receberá como entrada duas palavras: um login e um e-mail. Ele deve
escrever na tela: ACEITAR, caso ambos sejam válidos, ou REJEITAR, caso um ou
ambos (login e e-mail) sejam inválidos.

## Regras para logins válidos
* O login pode conter apenas letras e números
* Não pode começar com um número
* Não pode ter caracteres especiais, espaços, acentos,
  pontuação, etc.
* O nome de usuário deve ter pelo menos 5 caracteres, mas não mais que 10

## Regras para e-mails válidos
* Um endereço de e-mail sempre tem a forma `usuario@dominio`
* O nome de usuário deve começar com um caractere ascii, mas pode conter números
  mais adiante
* O nome de usuário pode ter palavras separadas por `.`, `-` ou `_`, mas não pode terminar
  em `.`, isto é, `teste.um@dominio.com` é um e-mail válido, mas
  `testeum.@dominio.com` não é.
* Nesta validação, não é permitido usar caracteres `+` para fazer tags em
  e-mails
* Todos os e-mails válidos fazem parte do domínio principal `@unicamp.br` ou de
  um subdomínio, por exemplo, `@dca.fee.unicamp.br`.


## Exemplos

Entrada | Saida
------- | -----
`m email@unicamp.br` | `REJEITAR`
`meulogin meulogin@unicamp.br` | `ACEITAR`
`meulogin meulogin@gmail.com` | `REJEITAR`


## Instruções adicionais

1. Vá diretamente ao conjunto de testes para verificar como tratar casos
   limítrofes ou mal-definidos.
1. Lembre-se de seguir as [instruções de submissão](docs/instrucoes.md).
1. Se desejar, proponha novos casos de teste.
