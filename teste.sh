#!/bin/bash

compilar_e_executar() {
    local arquivo_codigo=$1
    local nome_executavel=${arquivo_codigo%.cpp}

    echo "Compilando $arquivo_codigo..."
    g++ "$arquivo_codigo" -o "$nome_executavel"
    if [ $? -ne 0 ]; then
        echo "Erro na compilação. Verifique o código fonte."
        exit 1
    fi

    echo "Executando $nome_executavel..."
    ./"$nome_executavel"
}

echo "Escolha uma atividade para testar:"
for i in $(seq -w 1 10); do
    echo "$i. Atividade$i"
done
echo "0. Sair"
read -p "Digite o número da atividade: " escolha

if [ "$escolha" -ge 1 ] && [ "$escolha" -le 10 ]; then
    arquivo_codigo="Atividade$(printf "%02d" $escolha).cpp"
elif [ "$escolha" -eq 0 ]; then
    echo "Saindo..."
    exit 0
else
    echo "Escolha inválida."
    exit 1
fi

if [ ! -f "$arquivo_codigo" ]; then
    echo "Arquivo $arquivo_codigo não encontrado."
    exit 1
fi

compilar_e_executar "$arquivo_codigo"
