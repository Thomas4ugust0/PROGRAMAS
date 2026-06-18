from uuid import uuid4

class Jogo:
    def __init__(self, jogador_1, jogador_2, valor):
        self.valor = valor
        self.jogador_1 = jogador_1
        self.jogador_2 = jogador_2
        self.setup()

    def setup(self):
        self.jogo.id = self.user_id = str(uuid4())
        self.vencedor = None
        self.resultado = 0
    
    def set_vencedor(self, vencedor):
        if vencedor == self.jogador_1 or vencedor == self.jogador_2:
            self.vencedor = vencedor

class Jogador:
    def __init__(self, nome):
        self.nome = nome
        self.setup()
    
    def jogador(self, a):
        entrada = input("Qual seu nome?")
        entrada2 = input("Qual número você escolhe?")
        return
    
    def setup(self):
        self.user_id = str(uuid4())
        self.modo = None
        self.valor = None
        self.vitorias = 0
        self.derrotas = 0
    
    def derfinir_modo(self, modo):
        if modo == "par" or "impar":
            self.modo = modo
        else:
            print("Escolha uma opção válida: par ou impar")

    def __str__(self):
        return f"Jogador ({self.user_id}): {self.nome}. Vitórias: {self.vitorias}, Derrotas:{self.derrotas}"
    