# Exercício Python #008 - Conversor de Medidas
medida = float(input('Digite uma distância em metros: '))
cm = medida * 100
mm = medida * 1000
print(f'A medida de {medida} metros corresponde a {cm:.0f}cm e {mm:.0f}mm')
