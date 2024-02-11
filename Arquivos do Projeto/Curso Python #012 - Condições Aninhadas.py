# Curso Python #012 - Condições Aninhadas
#. If, elif e else
nome = str(input('Qual é seu nome? '))
if nome == 'Maurilio':
    print('Que nome bonito!')
elif nome == 'Pedro' or nome == 'Maria' or nome == 'Paulo':
    print('Seu nome é bem popular no Brasil.')
elif nome in 'Ana Cláudia Jéssica Juliana Júlia Bruna Thais Thaina Amanda':
    print('Belo nome feminino')
else:
    print('Seu nome é bem normal.')
print(f'Tenha um bom dia, {nome}!')