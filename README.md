# C em exemplos (foco teorico)

Repositorio com exemplos curtos de C separados por topico para consulta rapida. Cada pasta tem um `main.c` (e eventuais auxiliares) mostrando uma ideia central de nivel basico a intermediario.

## Estrutura das pastas
- `01-basicos-fluxo`: tipos primitivos, funcoes simples, for/switch e arrays.
- `02-strings-io`: leitura de texto com `fgets` e tratamento basico de erros.
- `03-ponteiros`: passagem por referencia, aritmetica de ponteiros e leitura de enderecos.
- `04-structs`: declaracao de `struct`, leitura de campos e limpeza do `\n` com `strcspn`.
- `05-memoria-dinamica/01-malloc-free`: alocacao, iteracao e liberacao manual.
- `05-memoria-dinamica/02-realloc`: crescimento de vetor com `realloc` preservando dados.
- `06-arquivos/01-escrever`: escrita em arquivo texto com `fprintf`.
- `06-arquivos/02-ler`: leitura linha a linha com `fgets` (usa `dados.txt` da pasta).
- `07-modulos-e-headers`: separacao em cabecalho/implementacao (`math_utils.h/.c`) e `main.c` linkando tudo.

## Como compilar/rodar
- **No VS Code**: abra o `main.c` do exemplo, aperte `F5` ou rode a task `C/C++: build active folder (all .c)`. A task compila todos os `.c` da pasta atual para lidar com exemplos que tem mais de um arquivo.
- **Linha de comando**: dentro da pasta do exemplo, rode `gcc -g *.c -o main.exe` (MinGW) e depois `./main.exe`.

Os `.exe` antigos na raiz foram deixados como estavam; os binarios novos ficam em cada pasta apos compilar.
