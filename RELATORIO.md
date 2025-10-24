🧾 Relatório do Projeto — Relógio Digital em C++
🟢 1. Identificação

Projeto: Relógio Digital em C++
Autores: Petrus Jucá, Guilherme Holanda, Davi Henry
Instituição: IFCE — Instituto Federal do Ceará
Disciplina: Redes de Telecomunicações
Data: Outubro de 2025
Linguagem: C++ (Windows Console)

🧭 2. Introdução

Este projeto tem como objetivo desenvolver um relógio digital interativo utilizando a linguagem C++.
O programa exibe a hora em tempo real no terminal do Windows, permitindo que o usuário defina uma hora inicial e interaja com o relógio por meio de comandos do teclado.

O desenvolvimento buscou explorar conceitos de controle de tempo, formatação de saída e leitura de teclas em tempo real, demonstrando na prática o uso de estruturas de repetição, manipulação de console e funções da API do Windows.

⚙️ 3. Objetivos Específicos

Exibir a hora em tempo real (hh:mm:ss) no console.

Permitir ajuste da hora e minuto durante a execução.

Implementar controle não bloqueante (sem uso de cin dentro do loop).

Demonstrar o uso de funções da biblioteca windows.h (Sleep, SetConsoleCursorPosition, GetAsyncKeyState).

Aplicar conceitos de laços, formatação (iomanip), e manipulação de tempo.

🧩 4. Desenvolvimento
🔹 4.1 Estrutura do Programa

O código foi dividido em três partes principais:

Entrada inicial:
O programa solicita ao usuário os valores iniciais de hora, minuto e segundo.

Loop principal:
Um laço while(true) é utilizado para atualizar o relógio continuamente:

A cada segundo, a variável segundo é incrementada.

Quando segundo == 60, ele zera e incrementa minuto.

Quando minuto == 60, ele zera e incrementa hora.

Quando hora == 24, ele volta para 0 (simulando 24h do dia).

Controle de teclas:
Utiliza GetAsyncKeyState() para detectar teclas pressionadas:

H → adiciona +1 hora.

M → adiciona +1 minuto.

ESC → encerra o programa.

🔹 4.2 Formatação e Exibição

A saída é formatada com:

setfill('0') << setw(2)


para manter o padrão hh:mm:ss.
A função SetConsoleCursorPosition() mantém o relógio fixo na tela, sem gerar novas linhas a cada atualização.

💡 5. Diagrama de Estados (FSM)

O sistema foi modelado como uma máquina de estados finitos (FSM) composta por quatro etapas:

Estado	Descrição	Transição
INICIALIZAÇÃO	Lê a hora inicial inserida pelo usuário.	Após leitura → EXIBIÇÃO
EXIBIÇÃO	Mostra o horário atual no console.	Após 1s → ATUALIZAÇÃO
ATUALIZAÇÃO	Incrementa o tempo em 1 segundo.	Após cálculo → VERIFICAÇÃO
VERIFICAÇÃO DE TECLA	Lê o teclado (H, M ou ESC).	H/M → EXIBIÇÃO; ESC → FIM

O ciclo repete continuamente até o usuário pressionar ESC.

🧠 6. Resultados Obtidos

O programa executa corretamente todas as funções previstas:

Exibe a hora em tempo real.

Permite controle manual de hora e minuto.

Atualiza o relógio sem travar o console.

Mantém o texto fixo em uma única linha (sem flicker).

Finaliza de forma limpa ao pressionar ESC.

A experiência demonstra o funcionamento contínuo de um sistema controlado por tempo, o uso de funções do Windows e a manipulação eficiente do console.

📊 7. Testes Realizados
Teste	Ação	Resultado
1	Definir hora inicial 00:00:00	Relógio iniciou corretamente
2	Incrementar com tecla H	+1 hora com sucesso
3	Incrementar com tecla M	+1 minuto com sucesso
4	Esperar 60 segundos	Incremento automático de minuto correto
5	Pressionar ESC	Programa finalizado corretamente

Todos os testes foram bem-sucedidos, comprovando o funcionamento estável da lógica temporal e do controle interativo.

🧮 8. Código-Fonte Principal

O código completo está disponível no arquivo relogioDigital.cpp
.
Trecho representativo da lógica principal:

while (true) {
    SetConsoleCursorPosition(hConsole, pos);
    cout << "Relogio: "
         << setw(2) << setfill('0') << hora << "h : "
         << setw(2) << setfill('0') << minuto << "min : "
         << setw(2) << setfill('0') << segundo << "s" << flush;

    Sleep(1000);

    ++segundo;
    if (segundo == 60) { segundo = 0; ++minuto; }
    if (minuto == 60) { minuto = 0; ++hora; }
    if (hora == 24) { hora = 0; }

    if (GetAsyncKeyState('H') & 0x8000) hora = (hora + 1) % 24;
    if (GetAsyncKeyState('M') & 0x8000) minuto = (minuto + 1) % 60;
    if (GetAsyncKeyState(VK_ESCAPE) & 0x8000) break;
}

📈 9. Conclusão

O projeto Relógio Digital em C++ cumpriu todos os objetivos propostos, apresentando um funcionamento estável e interativo.
Através dele, foi possível compreender na prática conceitos fundamentais de manipulação de tempo, controle de laços, tratamento de entrada assíncrona e posicionamento de texto em console.

O exercício também demonstra a importância das máquinas de estados finitos (FSM) para estruturar sistemas contínuos e previsíveis, como relógios, cronômetros e semáforos.

📚 10. Referências Bibliográficas

Microsoft Docs – GetAsyncKeyState

Microsoft Docs – SetConsoleCursorPosition

C++ Reference – iomanip

C++ Reference – iostream

🧾 11. Anexos

📎 Arquivos do repositório:

relogioDigital.cpp → Código-fonte principal

README.md → Documentação completa

diagrama_estado.png → Diagrama da FSM

relatorio.pdf → Este relatório em PDF

✅ Resumo Final:
O projeto foi implementado com sucesso, funcionando de forma contínua e precisa, com código limpo, modular e bem documentado.
Demonstra o domínio de lógica temporal, formatação e entrada de dados em tempo real no console.
