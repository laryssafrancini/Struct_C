# 📘 Gerenciador de Estudantes em C

Este projeto é um programa em **linguagem C** que permite ao usuário cadastrar informações de estudantes e salvar esses dados em um arquivo de texto. Além de registrar, o programa também lê e exibe os dados cadastrados diretamente no terminal.

---

## 🚀 Funcionalidades

- Permite inserir informações de estudantes:
  - Nome
  - Idade
  - Média (nota final)
  - Curso

- Armazena os dados em um arquivo chamado **`estudante.txt`**.
- Exibe no terminal todos os registros salvos.
- O usuário pode encerrar o cadastro digitando **`sair`** no campo do nome.

---

## 🖥️ Interações com o Usuário

Ao executar o programa, o usuário verá as seguintes etapas:

1. O programa pede para inserir as informações do estudante.
2. O usuário fornece:
   - **Nome**
   - **Idade**
   - **Média**
   - **Curso**
3. Esses dados são salvos no arquivo `estudante.txt`.
4. O processo pode ser repetido para quantos estudantes o usuário desejar.
5. Para encerrar o cadastro, basta digitar **`sair`** no campo de **Nome**.
6. Após encerrar, o programa lê o arquivo e mostra todos os estudantes cadastrados.

---

## 📂 Estrutura do Arquivo Gerado

O arquivo `estudante.txt` armazena os dados no seguinte formato:


### Exemplo:
Maria 20 8.50 Engenharia
João 22 7.90 Sistemas
Ana 19 9.10 Direito

Digite as informaçoes do estudante (nome,idade,media,curso):
Nome (ou 'sair' para encerrar): Maria
Idade: 20
Media: 8.5
Curso: Engenharia

Nome (ou 'sair' para encerrar): João
Idade: 22
Media: 7.9
Curso: Sistemas

Nome (ou 'sair' para encerrar): sair

//Finalização informações listadas
Informações dos estudantes salvas no arquivo:
Nome: Maria, Idade: 20, Media: 8.50, Curso: Engenharia
Nome: João, Idade: 22, Media: 7.90, Curso: Sistemas
