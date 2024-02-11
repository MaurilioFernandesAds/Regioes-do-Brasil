//!Exercício 1 - Cálculo de Áreas

//! Bloco de cálculo de áreas

function areaRet(){
    var base = prompt('Digite o valor da base do retângulo:');
    var altura = prompt('Digite o valor da altura do retângulo:');
    var resultado = base * altura;
    alert('A área do retângulo de base ' + base + " e altura " + altura + " vale: " + resultado);
}
//! Fim do Bloco de cálculo da área do retângulo

//! Bloco de cálculo da área do círculo, de forma sequencial, no próprio corpo do programa Javascript

var circulo = document.getElementById
('circulo').addEventListener('click', areaCir);
function areaCir(){
    var raio = prompt('Digite o valor do raio do círculo:');
    var resultado = Math.PI* (raio * raio);
//! Podemos usar também da seguinte forma: var resultado = Math.PI * (raio * raio)
    alert('A área do círculo de raio' + raio + ' é: ' + Math.round (resultado,2));
}
//! Fim do Bloco de cálculo do raio do círculo - Fim do exercício 1

//* Bloco do Exercício 2 - Idade em 2050
var btnIdade = document.querySelector('#idades').addEventListener('click',idades);
function idades(){
    var nome = document.getElementById('nome').value;
    var dataNasc = document.getElementById('ano-nasc').value;
    var idadeAtual = 2023 - dataNasc;
    var idade2050 = 2050 - dataNasc;
    var resposta; //* será necessária? Não!!!

    //* Maurilio, sua idade atual é 54 anos e em 2050 você terá xx anos.
    document.getElementById('resultado-paragrafo').textContent = nome + ', sua idade atual é ' + idadeAtual + ' anos.';
    document.getElementById('resultado-input').value = nome + ', em 2050, você terá ' + idade2050 + ' anos.';
}
//* Fim do bloco do exercício 2

//// Bloco do Exercício 3
var btnMedia = document.querySelector('#calcula-media').addEventListener('click', calcMedia);
function calcMedia(){
    var n1 = parseFloat(document.getElementById('n1').value);
    var n2 = parseFloat(document.getElementById('n2').value);
    var n3 = parseFloat(document.getElementById('n3').value);
    var n4 = parseFloat(document.getElementById('n4').value);

    var media = (n1 + n2 + n3 + n4) / 4;
    document.getElementById('media').value = media;
}

//// Fim do Bloco do Exercício 3 - Média de Notas

//! Bloco do Exercício 4 - Aumento de Salário
/*
-preparar o botão para o disparo do evento, com o listener;
-dar entrada nos valores necessários: salário e porcentagem de reajuste, fazendo o parseFloat;
-fazer o cálculo: novo salário = salário * (porcentagem/100) + salário;
-inserir o novo salário no campo de exibição;!*/

var btnSalario = document.querySelector('#calcula-salario').addEventListener('click',calcSalario);
function calcSalario(){
    var salario = parseFloat(document.getElementById('salario').value);
    var reajuste = parseFloat(document.getElementById('reajuste').value);
    var novoSalario = salario + salario * (reajuste / 100);
    /*alert(novoSalario);*/
    document.getElementById('novo-salario').value = novoSalario + ' reais';
}
//! Fim do Bloco do Exercício 4 - Aumento de Salário