from abc import ABC, abstractmethod

class Profissional(ABC):
    @abstractmethod
    def resumo_funcao(self):
        pass

class Jogador(Profissional):
    def __init__(self, nome, numero_camisa, funcao):
        self.nome = nome
        self.numero_camisa = numero_camisa
        self.funcao = funcao

    @property
    def resumo_funcao(self):
        return f"Eu sou o {self.nome}, de camisa {self.numero_camisa} \
            e jogo como {self.funcao}"
    
    def treinar(self, equipamento):
        return f"{self.nome} está treinando usando: {equipamento.tipo}."
    
    '''DEPENDÊNCIA: Equipamento não faz parte de jogador, mas é necessário
    para o funcionamento do método treinar'''

class Goleiro(Jogador):
    def __init__(self, nome, numero_camisa, habilidade):
        super().__init__(nome, numero_camisa, "Goleiro")
        self.habilidade = habilidade

    def descrever_habilidade(self):
        return f"Posso {self.habilidade} pois sou {self.funcao}"
    
class Atacante(Jogador):
    def __init__(self, nome, numero_camisa, habilidade):
        super().__init__(nome, numero_camisa, "Atacante")
        self.habilidade = habilidade

    def descrever_habilidade(self):
        return f"Posso {self.habilidade} pois sou {self.funcao}"
    
    def comemoracao(self):
        return "GOOOOOOOOLLLLLLLLL!!!"

class Equipamento:
    def __init__(self, tipo):
        self.tipo = tipo

class Sede:
    def __init__(self, endereco, ano_fundacao):
        self.endereco = endereco
        self.ano_fundacao = ano_fundacao

    def exibir_info(self):
        return f"Fundado em {self.ano_fundacao}, com sede localizada em \
            {self.endereco}."

class Time:
    def __init__(self, nome, endereco_sede, ano_sede):
        self.nome = nome
        self.elenco = []
        self.sede = Sede(endereco_sede, ano_sede)
    '''COMPOSIÇÃO: O time instancia uma sede dentro dele, fazendo com que a sede 
    estabeleça relação forte com time(caso o time seja 'excluido' a sede também será)'''

    '''AGREGAÇÃO: O time recebe jogadores como objetos, mas o time pode deixar de existir sem
    afetar os jogadores (continuam existindo) pois estabelecem relação fraca entre si'''

    def contratar_jogador(self, jogador: Jogador):
        self.elenco.append(jogador)
        print(f"\n[+] Sucesso: {jogador.nome} foi contratado pelo {self.nome}!")

    def visualizar_dados(self):
        print(f"\n{'='*40}")
        print(f"DADOS DO TIME: {self.nome.upper()}")
        print(self.sede.exibir_info())
        print(f"{'-'*40}")
        print("ELENCO ATUAL:")
        if not self.elenco:
            print(" Nenhum jogador cadastrado no momento.")
        else:
            for jogador in self.elenco:
                print(f" - {jogador.resumo_funcao} | Especialidade: {jogador.habilidade}")

if __name__ == "__main__":
    print("Bem-vindo ao sistema de cadastro")
    print("Primeiro, vamos configurar o seu time.")
    
    nome_time = input("Nome do Time: ")
    end_sede = input("Endereço da Sede: ")
    ano_sede = input("Ano de Fundação: ")
    
    meu_time = Time(nome_time, end_sede, ano_sede)
    
    while True:
        print(" MENU ")
        print("1. Contratar Goleiro")
        print("2. Contratar Atacante")
        print("3. Visualizar Dados do Time")
        print("0. Sair do Sistema")
        print("="*46)
        
        opcao = input("Escolha uma opção: ")
        
        if opcao == '1':
            print("\nCadastro de Goleiro")
            nome = input("Nome: ")
            numero = input("Número da camisa: ")
            habilidade = input("Habilidade (ex: fazer defesas difíceis): ")
            novo_goleiro = Goleiro(nome, numero, habilidade)
            meu_time.contratar_jogador(novo_goleiro)
            
        elif opcao == '2':
            print("\nCadastro de Atacante")
            nome = input("Nome: ")
            numero = input("Número da camisa: ")
            habilidade = input("Habilidade (ex: chutar muito forte): ")
            novo_atacante = Atacante(nome, numero, habilidade)
            meu_time.contratar_jogador(novo_atacante)
            
        elif opcao == '3':
            meu_time.visualizar_dados()
            
        elif opcao == '0':
            print("\nEncerrando o sistema.")
            break
            
        else:
            print("\nOpção inválida. Por favor, tente novamente.")