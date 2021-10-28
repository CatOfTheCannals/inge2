---
geometry: "left=1cm,right=1cm,top=2cm,bottom=2cm"
---

# Taller 5

#### Grupo: Giudice Carlos 694/15 | Rosende Federico 222/16

## Ejercicio 1

R = {(0;0), (1;1), (2;2), (1;3), (3;2)}

## Ejercicio 2

PREGUNTA: 
- EN EL ALGORITMO SE APLICA LA REGLA PARA TODA TRANSICIÓN DE SALIDA? SÍ
- QUÉ PASA SI NO HAY TRANSICIONES DE SALIDA? ES BISIMILAR A OTROS SIN TRANSICIONES

P -mu-> P' => EXISTE Q' | Q -mu-> Q' && P' ~n~ Q'

Q -mu'-> Q' => EXISTE P' | P -mu'-> P' && Q' ~n~ P'


TO DO: DEMO
![](./ej$2_{r}$esources/$q_{g}$raph.png){height=200px}

![](./ej$2_{r}$esources/$p_{g}$raph.png){height=200px}


#### Punto fijo para bisimulación fuerte (~)

\

|     ~0 = {
|    (0, 0), (0, 1), (0, 2), (0, 3),
|     (1, 0), (1, 1), (1, 2), (1, 3),
|     (2, 0), (2, 1), (2, 2), (2, 3),
|     (3, 0), (3, 1), (3, 2), (3, 3),
|     (4, 0), (4, 1), (4, 2), (4, 3)
|    }

|     ~1 = {
|    		(0, 0),
|     		(1, 2),
|     		(2, 1), (2, 2), (2, 3),
|     		(3, 1), (3, 2), (3, 3),
|     		(4, 1), (4, 2), (4, 3)
|    }

DUDA: antes de seguir, que pasa cuando un estado no tiene transiciones de salida?? que pasa cuando son dos?? se cumple por vacuidad la regla de punto fijo??

TO DO: FOTOS

Son bisimilarias y se muestra con la relación R = {(0;0), (1;2), (2;3), (3;1), (4;2)}

## Ejercicio 3

Atacante $\rightarrow$ a

Defensor $\rightarrow$ d

- ($P_{0}$; $Q_{0}$) $\rightarrow$ a se mueve por $a$ en P $\rightarrow$ ($P_{1}$; $Q_{0}$) $\rightarrow$ d se mueve por $a$ en Q $\rightarrow$ ($P_{1}$; $Q_{1}$) $\rightarrow$ a se mueve por $\tau$ en P $\rightarrow$ ($P_{2}$; $Q_{1}$)

Dos opciones para d:

- $\rightarrow$ d se queda en el lugar en Q $\rightarrow$ ($P_{2}$; $Q_{1}$) $\rightarrow$ a se mueve por $\tau$ en Q $\rightarrow$ ($P_{2}$; $Q_{2}$) $\rightarrow$ d se queda en el lugar en P $\rightarrow$ a se mueve por $c$ en P $\rightarrow$ ($P_{3}$; $Q_{2}$) $\Rightarrow$ Gana el atacante
- $\rightarrow$ d se mueve por $\tau$ en Q $\rightarrow$ ($P_{2}$; $Q_{2}$) $\rightarrow$ a se mueve por $c$ en P $\rightarrow$ ($P_{3}$; $Q_{2}$) $\Rightarrow$ Gana el atacante


## Ejercicio 4

TO DO: Podemos usar el algoritmo acá 

## Ejercicio 5

PREGUNTA: 

- PARA QUÉ SE EXTIENDE EL LENGUAJE DE LA ESPECIFICACIÓN?

## Ejercicio 9

PREGUNTA:

- CÓMO ESTAR SEGURO QUE USO EL ALFABETO MÁS CHICO POSIBLE? EN property PODEMOS OMITIR TODO SALVO LO QUE NO SE QUIERE MONITOREAR


## Ejercicio 10

PREGUNTA:

- QUÉ SON LOS CORCHETES DEL CONJUNTO DE UIDs?

ARREGLAR => HAY QUE VER QUE UN ÚNICO PROCESO SE DECLARA LÍDER


## Ejercicio 12

PREGUNTA: 

- POR QUÉ HABLAMOS DE EJECUCIONES INFINITAS EN LA DEFINICIÓN DE PROGRESO? ES PROPIO DEL PROBLEMA

progress P = {a1,a2..an} es verdadera si
para cada ejecución infinita, por lo menos una
acción entre a1, a2…, an aparece infinitas veces
bajo la suposición de Fair Choice

1. 

progress ANY_LEADER = {proc[i:1..N].leader}

2.

progress ANY_LEADER = {proc[1].leader}

PREGUNTA: 

- CÓMO HACEMOS ESTO DE FORMA MÁS INTELIGENTE? ALCANZA CON ESTO

## Ejercicio 13

X = (x -> xx -> X).

XX = (xx -> x -> XX).

||XXX = (XX || X).

progress EQUIS = {x}

## Ejercicio 14

1. []<>enBase $\Rightarrow$ Propiedad de liveness (algo bueno siempre sucede)

2. bateriaBaja => modoAhorro $\cup$ enBase $\Rightarrow$ Propiedad de safety?????

PREGUNTA: 

- CÓMO DIFERENCIO PROPIEDADES DE SAFETY Y LIVENESS?

- ES NECESARIO ESCRIBIR \[\](bateriaBaja => modoAhorro $\cup$ enBase) SÍ, VA CAJA EN TODOS LADOS => SIN CAJA HABLA SOBRE EL ESTADO INICIAL Y YA

3. paredDelante => girandoALaIzquierda $\cup$ ¬paredDelante $\Rightarrow$ Propiedad de safety?????

PREGUNTA: 

- IDEM 2

## Ejercicio 17

1. (Está en base por siempre) o (siempre que sale vuelve a entrar)

\[\](salióDeBase => <>entróABase)

2. 

PREGUNTA:

- IDEM 2 Y 3 DE 14

(bateríaBaja => X modoAhorroOn) => <> (entróABase => X modoAhorroOff)

3.

((paredDelanteDetectado => gira1GradoIzquierda $\cup$ ¬paredDelanteDetectado)) => ¬ X gira1GradoIzquierda 

ESTÁ MAL ESTO, NO PUEDO SABER SI NO DETECTA LA PARED => MEJOR REACCIONAR SIEMPRE QUE LO DETECTE


PREGUNTA:

- REVISAR TODO
- CÓMO COMBINAR EL UNTIL CON X Y LAS IMPLICACIONES? VALE COMO LO ESTAMOS HACIENDO

## Ejercicio 20

PREGUNTA:

- CÓMO ME ASEGURO DE QUE DEJE DE VALER ¬<>b.entry Y PUEDA VER ENTRIES (O EXITS) LUEGO DEL c.open? ESTÁ BIEN ASÍ PORQUE SON EVENTOS PUNTUALES
- CÓMO CHEQUEO LA RESPUESTA EN MTSA?

c.close => (¬b.entry $\cup$ c.open)

c.close => (¬b.exit $\cup$ c.open)
