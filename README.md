
# 🕹️ Jogo da Velha (Tic-Tac-Toe) em C

Este é um projeto simples do **Jogo da Velha**, desenvolvido em **linguagem C** com foco na **modularização** e na aplicação do **Princípio da Responsabilidade Única (SRP)**.  
O objetivo é demonstrar como organizar um projeto C em múltiplas pastas, utilizando um **Makefile** para automatizar a compilação.

---

## 🚀 Estrutura do Projeto

O projeto está dividido em três seções principais, garantindo que cada arquivo trate de uma única responsabilidade:

```

projeto/
├── include/      # Definições (Headers .h)
├── src/          # Código Fonte (Implementações .c)
└── Makefile      # Automação de Compilação

```

---

## 📦 Detalhe da Modularização

| Arquivo        | Pasta        | Responsabilidade |
|----------------|--------------|------------------|
| **defs.h**     | include      | Definições de constantes globais (ex.: `TAM = 3`). |
| **visual.\***  | include/src  | Apenas o desenho do tabuleiro e mensagens na tela. |
| **tabuleiro.\*** | include/src | Manipulação da matriz, validação de coordenadas e marcação de posições. |
| **regras.\***  | include/src | Lógica de verificação de vitória (linhas, colunas, diagonais) e empate. |
| **main.c**     | src          | Coordenador central: loop do jogo, turnos e validação da entrada do usuário. |

---

## ⚙️ Como Compilar

Este projeto usa um **Makefile** para gerenciar a compilação.  
O Makefile já está configurado para procurar os arquivos `.h` na pasta **include** e os `.c` na pasta **src**.

### ✔️ Pré-requisito
- Ter o **GCC** instalado.

### 🔧 Compilação
No diretório raiz do projeto, execute:

```

make

```

O Makefile irá gerar o executável chamado **jogodavelha**.

---

## 🎮 Como Jogar

Após a compilação, execute:

```

./jogodavelha

```

O jogo solicitará **Linha** e **Coluna** para cada jogada, utilizando o índice **0, 1 ou 2**.

---

## 🧹 Limpeza

Para remover arquivos temporários (.o) e o executável, utilize:

```

make clean

```

---

Feito! Se quiser, posso gerar também um **Makefile**, o **código base dos módulos**, ou até a **estrutura completa do projeto**.
```
