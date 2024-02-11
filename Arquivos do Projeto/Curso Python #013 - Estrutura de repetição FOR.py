# Curso Python #013 - Estrutura de repetição for
''''n = int(input('Digite um número: '))
for c in  range(0, n + 1):
    print(c)
print('FIM')'''

''' i = int(input('Inicio: '))
f = int(input('Fim: '))
p = int(input('Passo: '))
for c in range(i, f+1, p):
    print(c)
print('FIM')'''
soma = 0
for c in range(0, 5):
    n = int(input('Digite um valor: '))
    soma = soma + n
print(f'A soma dos valores digitados foi de {soma}')