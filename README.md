# DIGITAL-CLOCK

# ⏰ Relógio Digital em C++

![Language](https://img.shields.io/badge/Linguagem-C%2B%2B-blue)
![Platform](https://img.shields.io/badge/Plataforma-Windows-lightgrey)
![Status](https://img.shields.io/badge/Status-Funcional-success)
![License](https://img.shields.io/badge/Licença-Livre-green)

---

## 📘 Descrição do Projeto

Este projeto implementa um **relógio digital interativo** em **C++**, que exibe a hora em tempo real diretamente no terminal do Windows.  
O programa permite ao usuário **definir a hora inicial** e **controlar o relógio** durante a execução por meio do teclado.

O objetivo é demonstrar o uso de **manipulação de tempo**, **posicionamento de cursor no console** e **detecção de teclas em tempo real**, aplicando conceitos de **programação estruturada** e **controle de fluxo contínuo**.

---

## ⚙️ Funcionalidades

- 🕒 Exibição contínua da hora, minuto e segundo.
- ⌨️ Controle interativo via teclado:
  - **H** → adiciona +1 hora  
  - **M** → adiciona +1 minuto  
  - **ESC** → encerra o programa
- 🔄 Atualização automática do relógio a cada segundo.
- 🎯 Posicionamento fixo do relógio no terminal, sem "rolagem" de linhas.
- ⏱ Incrementos automáticos de tempo (60 segundos → 1 minuto, 60 minutos → 1 hora, etc.).

---

## 🧠 Conceitos Aplicados

- **Manipulação de tempo:** função `Sleep()` para pausar o programa 1 segundo por ciclo.  
- **Controle de posição no console:** `SetConsoleCursorPosition()` (biblioteca `windows.h`).  
- **Formatação de saída:** `iomanip` (`setw`, `setfill`) para manter o formato `hh:mm:ss`.  
- **Leitura de teclas em tempo real:** `GetAsyncKeyState()` para detectar teclas pressionadas sem interromper a execução.

---

## 🧩 Estrutura do Código

```cpp
#include <iostream>
#include <windows.h>
#include <iomanip>
