 ⏰ Relógio Digital em C++

![Language](https://img.shields.io/badge/Linguagem-C%2B%2B-blue)
![Platform](https://img.shields.io/badge/Plataforma-Windows-lightgrey)
![Status](https://img.shields.io/badge/Status-Funcional-success)
![License](https://img.shields.io/badge/Licença-Livre-green)

---

## 📘 Descrição do Projeto

Este projeto implementa um **relógio digital interativo** em **C++**, que exibe a hora em tempo real diretamente no terminal do Windows.  
O usuário pode **definir a hora inicial** e **controlar o relógio** durante a execução por meio do teclado.

O principal objetivo é demonstrar o uso de **manipulação de tempo**, **posicionamento de cursor no console** e **detecção de teclas em tempo real**, aplicando conceitos fundamentais de **programação estruturada** e **controle de fluxo contínuo**.

---

## ⚙️ Funcionalidades

- 🕒 Exibição contínua da hora, minuto e segundo.
- ⌨️ Controle interativo via teclado:
  - **H** → adiciona +1 hora  
  - **M** → adiciona +1 minuto  
  - **ESC** → encerra o programa
- 🔄 Atualização automática do relógio a cada segundo.
- 🎯 Posicionamento fixo do relógio na tela, sem rolagem de linhas.
- ⏱ Incrementos automáticos de tempo (60s → 1min, 60min → 1h, 24h → 0h).

---

## 🧠 Conceitos Aplicados

- **Manipulação de tempo:** uso da função `Sleep()` para pausa de 1 segundo por ciclo.  
- **Controle do cursor no console:** `SetConsoleCursorPosition()` (biblioteca `windows.h`).  
- **Formatação de saída:** manipulação com `setw` e `setfill` (`iomanip`) para manter formato `hh:mm:ss`.  
- **Leitura de teclas em tempo real:** `GetAsyncKeyState()` para detecção contínua de entrada sem bloquear a execução.  
- **Controle de fluxo:** laço `while(true)` com condições de incremento e saída controladas.

---

## 🧩 Estrutura do Código

``cpp
#include <iostream>
#include <windows.h>
#include <iomanip>
🔹 Principais partes:
Entrada inicial:
Solicita ao usuário os valores de hora, minuto e segundo de partida.

Laço principal (while):

Atualiza o relógio a cada segundo (Sleep(1000));

Incrementa corretamente segundos, minutos e horas;

Lê o teclado para aplicar os comandos interativos.

Finalização controlada:

Tecla ESC encerra o programa de forma limpa.

💻 Requisitos de Execução
Sistema operacional: Windows (usa funções da API windows.h).

Compilador: compatível com C++17 ou superior.

Terminal: prompt de comando ou terminal com suporte a UTF-8.

▶️ Como Compilar e Executar
Abra o terminal e compile o programa com o g++ (ou outro compilador C++):


g++ relogioDigital.cpp -o relogioDigital.exe
Execute o programa:

./relogioDigital
Insira a hora inicial quando solicitado e use os controles:

H → adiciona 1 hora

M → adiciona 1 minuto

ESC → encerra o relógio

## 🧩 Exemplo de Execução

Digite a hora inicial: 14
Digite o minuto inicial: 58
Digite o segundo inicial: 50

Controles:
[H] +1 hora
[M] +1 minuto
[ESC] sair

Relogio: 14h : 58min : 50s
(A hora é atualizada automaticamente a cada segundo.)

## 🧠 Aprendizados e Objetivos
Este projeto ensina e demonstra na prática:

Como manipular tempo e delays em C++.

Como atualizar a tela em tempo real sem limpar o console.

Como detectar teclas pressionadas sem pausa no programa.

Como estruturar loops infinitos com controle lógico e saída segura.

Uso básico de funções da API do Windows para manipulação do console.

## 📈 Possíveis Melhorias Futuras
Adicionar formato 12h / 24h alternável.

Implementar cronômetro e temporizador no mesmo programa.

Exibir data atual junto ao relógio.

Criar interface gráfica com bibliotecas como SFML ou Qt.

Adicionar alarme sonoro configurável.

## 🧑‍💻 Autores
Nome: Guilherme Holanda, Petrus Jucá, Davi Henry.
Instituição: IFCE — Instituto Federal do Ceará
Disciplina: Programação de Computadores / Estrutura de Dados
Data: Outubro de 2025
Linguagem: C++ (Windows Console)

## 📚 Referências
Documentação Microsoft — GetAsyncKeyState

Função Sleep() — API do Windows

Biblioteca iomanip (C++)

Documentação da API do Console do Windows

## 🧾 Licença
Este projeto é de uso educacional e livre, podendo ser modificado, estudado e redistribuído com os devidos créditos ao autor.

## 💡 Este projeto exemplifica o uso prático de manipulação de tempo, entrada de teclado e formatação de saída em C++.
Ideal para iniciantes e estudantes que desejam compreender o controle de loops e interação em tempo real no console.
