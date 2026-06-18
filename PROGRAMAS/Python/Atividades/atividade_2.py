from abc import ABC, abstractmethod
# Classe Abstrata sem __init__ concreto:
class LocacaoContrato(ABC):
    
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

# Classe derivada implementando os contratos
class VeiculoLocacao(LocacaoContrato):
    def __init__(self, modelo: str, placa: str, valor_diaria: float, dias: int):
        self._modelo = modelo
        self._placa = placa
        self.valor_diaria = valor_diaria
        self.dias = dias

    @property
    def resumo_veiculo(self):
        return f"Modelo: {self._modelo} | Placa: {self._placa}"

    def calcular_aluguel(self):
        return self.valor_diaria * self.dias

    def descrever_modalidade(self):
        return "Locação por Diária"

# Teste da Parte 1
print("Sem __init__ na base:")
carro1 = VeiculoLocacao("VW Nivus", "ABC-1234", 150.0, 5)
print(carro1.resumo_veiculo)
print(f"Modalidade: {carro1.descrever_modalidade()}")
print(f"Total: R$ {carro1.calcular_aluguel():.2f}\n")

#Classe Abstrata com __init__ concreto
class LocacaoBaseComum(ABC):
    
    def __init__(self, modelo: str, placa: str):
        self._modelo = modelo
        self._placa = placa

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

class VeiculoLocacaoNovo(LocacaoBaseComum):
    def __init__(self, modelo: str, placa: str, valor_diaria: float, dias: int):
        super().__init__(modelo, placa)
        self.valor_diaria = valor_diaria
        self.dias = dias

    @property
    def resumo_veiculo(self):
        return f"Modelo: {self._modelo} | Placa: {self._placa}"

    def calcular_aluguel(self):
        return self.valor_diaria * self.dias

    def descrever_modalidade(self):
        return "Locação por Diária"

# Teste da Parte 2
print("Com __init__)")
carro2 = VeiculoLocacaoNovo("Toyota Corolla", "XYZ-9876", 200.0, 3)
print(carro2.resumo_veiculo)
print(f"Modalidade: {carro2.descrever_modalidade()}")
print(f"Total: R$ {carro2.calcular_aluguel():.2f}")

'''A classe abstrata sem __init__ funciona como uma interface pura, focando apenas 
em exigir contratos de comportamento e dando liberdade total para as classes filhas 
gerenciarem seus dados. Em contrapartida, a classe abstrata com __init__ concreto 
centraliza a inicialização de atributos comuns, evitando repetição de código. 
Com essa segunda abordagem, as classes derivadas reaproveitam a lógica base através do 
super().__init__(). Dessa forma, elas ficam mais enxutas e se preocupam em inicializar apenas
as características específicas de sua própria implementação.'''