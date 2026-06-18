from package.reta import Reta

reta_1 = Reta(2.0,3.0)

print("testando a interpolação com x=5")
saida= reta_1.interpolar(5.0)
print(saida)
print("testando a inversão com y=13")
saida= reta_1.inverter(13.0)
print(saida)