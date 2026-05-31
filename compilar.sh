#!/bin/bash
mkdir -p bin
for file in src/aulas/*.c src/desafios/*.c src/projetos/*.c; do
    nome=$(basename "$file" .c)
    gcc "$file" -o "bin/$nome"
    echo "Compilado: $nome"
done
echo "Tudo compilado!"
