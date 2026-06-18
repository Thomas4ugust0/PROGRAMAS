def mesclar_sem_perdas(d1, d2):
    # Criamos uma cópia do primeiro dicionário para não alterá-lo diretamente
    resultado = d1.copy()
    
    for chave, valor in d2.items():
        # Se a chave já existir no resultado, precisamos tratar o conflito
        if chave in resultado:
            # Se o valor atual já for uma lista, apenas adicionamos o novo valor
            if isinstance(resultado[chave], list):
                resultado[chave].append(valor)
            # Se não for uma lista, convertemos em uma lista com os dois valores
            else:
                resultado[chave] = [resultado[chave], valor]
        # Se a chave não existir, apenas adicionamos normalmente
        else:
            resultado[chave] = valor
            
    return resultado

# Testando a mesclagem segura
dic1 = {"nome": "Ana", "idade": 28,}
dic2 = {"nome":"Thomas", "idade":19, "cidade": "Brasília"}

resultado_seguro = mesclar_sem_perdas(dic1, dic2)

print("\nResultado evitando a perda de chaves repetidas:")
print(resultado_seguro)