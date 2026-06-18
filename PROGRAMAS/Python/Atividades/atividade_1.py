from abc import ABC, abstractmethod


class Locacao(ABC):

    @property
    @abstractmethod
    def resumo_veiculo(self):
        pass

    @abstractmethod
    def calcular_aluguel(self):
        pass

    @abstractmethod
    def descrever_modalidade(self):
        pass


class Veiculo(Locacao):

    def __init__(self, modelo: str, ano_fabricacao: int, placa: str, 
                 modalidade="Ainda não alugado"):
        self._modelo = modelo
        self._ano_fabricacao = ano_fabricacao
        self.__placa = placa
        self.modalidade = modalidade

    @property
    def modelo(self):
        return self._modelo

    @property
    def ano_fabricacao(self):
        return self._ano_fabricacao

    @ano_fabricacao.setter
    def ano_fabricacao(self, novo_ano):
        if 2026 - novo_ano >= 50:
            raise ValueError("O carro precisa ter menos de 50 anos")

        self._ano_fabricacao = novo_ano

    @property
    def placa(self):
        return self.__placa

    @property
    def resumo_veiculo(self):
        return f"{self.modelo} | {self.placa} | {self.ano_fabricacao} | {self.modalidade}"

    # Métodos abstratos implementados
    def calcular_aluguel(self): 
        return 0

    def descrever_modalidade(self):
        return self.modalidade


class Locacao_diaria(Veiculo):

    def __init__(self, modelo, ano_fabricacao, placa, valor_diaria, dias_alugados):
        super().__init__(modelo, ano_fabricacao, placa, "Diária")

        self.valor_diaria = valor_diaria
        self.dias_alugados = dias_alugados

    def calcular_aluguel(self):
        return self.valor_diaria * self.dias_alugados

    def descrever_modalidade(self):
        return "Locação por diária"


class Locacao_km(Veiculo):

    def __init__(self, modelo, ano_fabricacao, placa, 
                 valor_km, km_percorridos):
        super().__init__(modelo, ano_fabricacao, placa, "Quilometragem")

        self.valor_km = valor_km
        self.km_percorridos = km_percorridos

    def calcular_aluguel(self):
        return self.valor_km * self.km_percorridos  

    def descrever_modalidade(self):
        return "Locação por quilometragem"


class CadastroFrota:

    def __init__(self):
        self.veiculos_cadastrados = []

    def cadastrar(self, automovel):
        self.veiculos_cadastrados.append(automovel)
        print(f"{automovel.modelo} cadastrado com sucesso!")

    def visualizar_cadastros(self):

        if not self.veiculos_cadastrados:
            print("Ainda não há veículos cadastrados.")
            return

        print("\nLISTA DOS VEÍCULOS CADASTRADOS\n")

        for i, veiculo in enumerate(self.veiculos_cadastrados):

            print(f"OPÇÃO {i}")
            print(f"Informações: {veiculo.resumo_veiculo}")
            print(f"Modalidade: {veiculo.descrever_modalidade()}")
            print(f"Valor do aluguel: R$ {veiculo.calcular_aluguel():.2f}")
            print("-" * 30)


def iniciar_menu():

    sistema = CadastroFrota()

    while True:

        print("\n" + "#" * 30)
        print("       MENU PRINCIPAL")
        print("#" * 30)

        print("1. Cadastrar veículo")
        print("2. Visualizar veículos")
        print("3. Sair")

        opcao = input("Escolha uma opção: ")

        if opcao == "1":

            modelo = input("Modelo: ")
            ano = int(input("Ano de fabricação: "))
            placa = input("Placa: ")

            tipo = input("Tipo de locação: diária[1] ou quilometragem[2]? ")

            if tipo == "1": 

                valor_diaria = float(input("Valor da diária: "))
                dias = int(input("Dias alugados: "))

                veiculo = Locacao_diaria(
                    modelo,
                    ano,
                    placa,
                    valor_diaria,
                    dias
                )

            elif tipo == "2":

                valor_km = float(input("Valor por km: "))
                km = float(input("Km percorridos: "))

                veiculo = Locacao_km(
                    modelo,
                    ano,
                    placa,
                    valor_km,
                    km
                )

            else:
                print("Tipo inválido!")
                continue

            sistema.cadastrar(veiculo)

        elif opcao == "2":

            sistema.visualizar_cadastros()

        elif opcao == "3":

            print("Sistema encerrado.")
            break

        else:
            print("Opção inválida!")

iniciar_menu()