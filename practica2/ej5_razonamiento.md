asumo que repok almacena los nodos a visitar en una pila y los va popeando

| root | N0.left | N0.right | N1.left | N1.right | N2.left | N2.right |
| ---- | ------- | -------- | ------- | -------- | ------- | -------- |
| NULL | NULL	 | NULL     | NULL	  | NULL	 | NULL    | NULL	  |
| 1    | -  	 | -        | -  	  | -   	 | -       | -  	  |

pongo el nodo N0 en root

| root | N0.left | N0.right | N1.left | N1.right | N2.left | N2.right |
| ---- | ------- | -------- | ------- | -------- | ------- | -------- |
| N0   | NULL	 | NULL     | NULL	  | NULL	 | NULL    | NULL	  |
| 1    | 2  	 | 3        | -  	  | -   	 | -       | -  	  |


desapilo el primero y le inserto N1

| root | N0.left | N0.right | N1.left | N1.right | N2.left | N2.right |
| ---- | ------- | -------- | ------- | -------- | ------- | -------- |
| N0   | NULL	 | N1       | NULL	  | NULL	 | NULL    | NULL	  |
| 1    | 2  	 | 3        | 4  	  | 5   	 | -       | -  	  |

pongo el nodo N2 en el ultimo campo accedido 

| root | N0.left | N0.right | N1.left | N1.right | N2.left | N2.right |
| ---- | ------- | -------- | ------- | -------- | ------- | -------- |
| N0   | NULL	 | N1       | NULL	  | N2  	 | NULL    | NULL	  |

- como alcanzamos el tamaño maximo (n=3), backtrackeamos.
- ponemos a N2 en el ultimo campo accedido antes del campo 5

| root | N0.left | N0.right | N1.left | N1.right | N2.left | N2.right |
| ---- | ------- | -------- | ------- | -------- | ------- | -------- |
| N0   | NULL	 | N1       | N2	  | NULL  	 | NULL    | NULL	  |

- como alcanzamos el tamaño maximo (n=3), backtrackeamos.
- como ya se agotaron las posibilidades de exploracion de N1, backtrackeamos
- ponemos a N1 en el ultimo campo accedido antes del campo 3

| root | N0.left | N0.right | N1.left | N1.right | N2.left | N2.right |
| ---- | ------- | -------- | ------- | -------- | ------- | -------- |
| N0   | N1	     | NULL     | NULL	  | NULL	 | NULL    | NULL	  |
| 1    | 2  	 | 3        | 4  	  | 5   	 | -       | -  	  |

pongo el nodo N2 en el ultimo campo accedido

| root | N0.left | N0.right | N1.left | N1.right | N2.left | N2.right |
| ---- | ------- | -------- | ------- | -------- | ------- | -------- |
| N0   | N1	     | NULL     | NULL	  | N2  	 | NULL    | NULL	  |
| 1    | 2  	 | 3        | 4  	  | 5   	 | -       | -  	  |

- como alcanzamos el tamaño maximo (n=3), backtrackeamos.
- ponemos a N2 en el ultimo campo accedido antes del campo 5

| root | N0.left | N0.right | N1.left | N1.right | N2.left | N2.right |
| ---- | ------- | -------- | ------- | -------- | ------- | -------- |
| N0   | N1	     | NULL     | N2	  | NULL  	 | NULL    | NULL	  |
| 1    | 2  	 | 3        | 4  	  | 5   	 | -       | -  	  |


- como alcanzamos el tamaño maximo (n=3), backtrackeamos.
- como ya se agotaron las posibilidades de exploracion de N1, backtrackeamos
- ponemos a N1 en el ultimo campo accedido antes del campo 3

| root | N0.left | N0.right | N1.left | N1.right | N2.left | N2.right |
| ---- | ------- | -------- | ------- | -------- | ------- | -------- |
| N0   | N1	     | N2       | NULL	  | NULL  	 | NULL    | NULL	  |
| 1    | 2  	 | 3        | 4  	  | 5   	 | -       | -  	  |


con esto quedan exploradas todas las posibilidades








