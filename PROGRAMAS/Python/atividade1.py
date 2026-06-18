from abc import ABC, abstractmethod

# ====================================================================
# 1. CLASSE ABSTRATA (Contratos de atributos e métodos)
# ====================================================================
class ContratoTrabalhador(ABC):
    
    @property
    @abstractmethod
    def resumo_identificacao(self):
        """Contrato de atributo (propriedade) obrigatório"""
        pass

    @abstractmethod
    def calcular_rendimento(self):
        """Contrato de método obrigatório"""
        pass
    
    @abstractmethod
    def descrever_atividade(self):
        """Contrato de método obrigatório"""
        pass


# ====================================================================
# 2. GENERALIZAÇÃO E ENCAPSULAMENTO (Público, Protegido, Privado)
# ====================================================================
class Pessoa(ContratoTrabalhador):
    def __init__(self, nome: str, idade: int, profissao: str):
        self._nome = nome          # PROTEGIDO (acessível às subclasses)
        self.__idade = idade       # PRIVADO (acessível apenas por esta classe)
        self.profissao = profissao # PÚBLICO (atributo generalista)

    # Métodos de acesso (Getters/Setters) para manter o encapsulamento
    @property
    def nome(self):
        return self._nome

    @nome.setter
    def nome(self, novo_nome):
        if len(novo_nome) < 2:
            raise ValueError("O nome deve ter pelo menos 2 caracteres.")
        self._nome = novo_nome

    @property
    def idade(self):
        return self.__idade
    
    # Implementando o contrato de atributo
    @property
    def resumo_identificacao(self):
        return f"{self._nome}, {self.__idade} anos - {self.profissao}"


# ====================================================================
# 3. POLIMORFISMO (Comportamentos diferentes para o mesmo método)
# ====================================================================
class ProfissionalMensalista(Pessoa):
    def __init__(self, nome: str, idade: int, profissao: str, salario_mensal: float):
        super().__init__(nome, idade, profissao)
        self.__salario_mensal = salario_mensal # Atributo privado específico

    # Polimorfismo: Calcula rendimento de forma fixa
    def calcular_rendimento(self):
        return self.__salario_mensal

    # Polimorfismo: Descreve atividade como assalariado
    def descrever_atividade(self):
        return f"Atua como {self.profissao} com contrato fixo mensal."


class ProfissionalHorista(Pessoa):
    def __init__(self, nome: str, idade: int, profissao: str, valor_hora: float, horas_trabalhadas: int):
        super().__init__(nome, idade, profissao)
        self.__valor_hora = valor_hora
        self.__horas_trabalhadas = horas_trabalhadas

    # Polimorfismo: Calcula rendimento multiplicando hora x valor
    def calcular_rendimento(self):
        return self.__valor_hora * self.__horas_trabalhadas

    # Polimorfismo: Descreve atividade sob demanda
    def descrever_atividade(self):
        return f"Atua como {self.profissao} sob demanda (regime horista)."


# ====================================================================
# 4. SISTEMA E PERSISTÊNCIA EM RAM
# ====================================================================
class SistemaCadastro:
    def __init__(self):
        # Lista privada garantindo persistência em RAM durante a execução
        self.__banco_de_dados = []

    def cadastrar(self, trabalhador: Pessoa):
        self.__banco_de_dados.append(   )
        print(f"\n[OK] {trabalhador.nome} cadastrado(a) com sucesso!")

    def visualizar_cadastros(self):
        if not self.__banco_de_dados:
            print("\n[!] Nenhum cadastro encontrado no sistema no momento.")
            return

        print("\n" + "="*50)
        print("   LISTA DE PROFISSIONAIS CADASTRADOS (RAM)   ")
        print("="*50)
        for t in self.__banco_de_dados:
            print(f"Identificação : {t.resumo_identificacao}")
            print(f"Atividade     : {t.descrever_atividade()}")
            print(f"Rendimento    : R$ {t.calcular_rendimento():.2f}")
            print("-" * 50)


# ====================================================================
# 5. MENU INTERATIVO
# ====================================================================
def iniciar_menu():
    sistema = SistemaCadastro()

    while True:
        print("\n" + "#"*30)
        print("       MENU PRINCIPAL       ")
        print("#"*30)   
        print("1. Cadastrar Profissional Mensalista")
        print("2. Cadastrar Profissional Horista")
        print("3. Visualizar Cadastros")
        print("4. Sair do Sistema")
        
        opcao = input("\nEscolha uma opção: ")

        if opcao in ['1', '2']:
            print("\n-- Dados do Profissional --")
            nome = input("Nome do profissional: ")
            
            try:
                idade = int(input("Idade: "))
            except ValueError:
                print("[ERRO] Idade deve ser um número inteiro. Tente novamente.")
                continue

            profissao = input("Profissão (ex: Médico, Bombeiro, Professor): ")

            if opcao == '1':
                try:
                    salario = float(input("Salário Mensal (R$): "))
                    # Instanciando e cadastrando Mensalista
                    profissional = ProfissionalMensalista(nome, idade, profissao, salario)
                    sistema.cadastrar(profissional)
                except ValueError:
                    print("[ERRO] Valor de salário inválido!")
            
            elif opcao == '2':
                try:
                    valor_hora = float(input("Valor da Hora Trabalhada (R$): "))
                    horas = int(input("Quantidade de horas trabalhadas: "))
                    # Instanciando e cadastrando Horista
                    profissional = ProfissionalHorista(nome, idade, profissao, valor_hora, horas)
                    sistema.cadastrar(profissional)
                except ValueError:
                    print("[ERRO] Valor de hora ou quantidade inválida!")

        elif opcao == '3':
            sistema.visualizar_cadastros()

        elif opcao == '4':
            print("\nEncerrando o sistema. Até logo!")
            break

        else:
            print("\n[ERRO] Opção inválida. Escolha um número de 1 a 4.")

# Executa o programa
if __name__ == "__main__":
    iniciar_menu()