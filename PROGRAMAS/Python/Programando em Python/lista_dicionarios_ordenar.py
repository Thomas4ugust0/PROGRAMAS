# Lista de dicionários de exemplo
pessoas = [
    {"nome": "Carlos", "idade": 32, "pontuacao": 85},
    {"nome": "Ana", "idade": 25, "pontuacao": 92},
    {"nome": "Beatriz", "idade": 28, "pontuacao": 78}
]

# Ordenando pela chave 'idade' (crescente)
pessoas_por_idade = sorted(pessoas, key=lambda pessoa: pessoa["idade"])

print("Ordenado por Idade (Crescente):")
for p in pessoas_por_idade:
    print(p)

print("-" * 40)

# Ordenando pela chave 'pontuacao' (decrescente/maior para menor)
# Usamos reverse=True
pessoas_por_pontos = sorted(pessoas, key=lambda pessoa: pessoa["pontuacao"], reverse=True)

print("Ordenado por Pontuação (Decrescente):")
for p in pessoas_por_pontos:
    print(p)


'''
    # 1. Criando uma função normal(substitui lambda)
def extrair_idade(pessoa):
    return pessoa["idade"]

# 2. Passando a função para o key
pessoas_por_idade = sorted(pessoas, key=extrair_idade)
'''