---
geometry: "left=1cm,right=1cm,top=2cm,bottom=2cm"
---

# Practica 1

#### Autor: Carlos Giudice

# Ejercicio 1


| Nodo n      | IN[n]                                | OUT[n]       |
| ----------- | ------------                         | -----------  |
| 1           | -                                    | $\emptyset$ |
| 2           | $\emptyset$                          | $\{[x, 2]\}$ |
| 3           | $\{[x, 2]\}$                         | $\{[x, 2], [y, 3]\}$ |
| 4           | $\{[x, 2], [y, 3], [x, 6], [y, 5]\}$ | $\{[x, 2], [y, 3], [x, 6], [y, 5]\}$ |
| 5           | $\{[x, 2], [y, 3], [x, 6], [y, 5]\}$ | $\{[x, 2], [y, 5], [x, 6]\}$ |
| 6           | $\{[x, 2], [y, 5], [x, 6]\}$         | $\{[x, 6], [y, 5]\}$ |
| 7           | $\{[x, 2], [y, 3], [x, 6], [y, 5]\}$ | - |


# Ejercicio 2

\begin{large}
\begin{center} 
$IN[n] = \bigcup_{n' \in pred(n)} OUT[n']$
\end{center} 
\end{large}

\begin{large}
\begin{center} 
$OUT[n] = (IN[n] - KILL[n]) \cup GEN[n]$
\end{center} 
\end{large}


# Ejercicio 3

| Nodo n      | IN[n]        		| OUT[n]      |
| ----------- | ------------------- | ----------- |
| 1           | -           		| $\{b - a\}$ |
| 2           | $\{b - a\}$  		| $\{b - a\}$ |
| 3           | $\{a - b, b - a\}$  | $\{a - b\}$ |
| 4           | $\{b - a\}$         | $\emptyset$ |
| 5           | $\emptyset$         | $\{a - b\}$ |
| 6           | $\{a - b\}$         | $\emptyset$ |
| 7           | $\{a - b\}$         | $\emptyset$ |
| 8           | $\emptyset$         | -           |


# Ejercicio 4


\begin{large}
\begin{center} 
$OUT[n] = \bigcup_{n' \in pred(n)} IN[n']$
\end{center} 
\end{large}

\begin{large}
\begin{center} 
$IN[n] = (OUT[n] - KILL[n]) \cup GEN[n]$
\end{center} 
\end{large}


# Ejercicio 5

b) 

| Nodo n      | IN[n]        		| OUT[n]      		|
| ----------- | ------------------- | ----------------- |
| 0           | -           		| {pid} 	  		|
| 1           | {pid}          		| {pid, j}    		|
| 2           | {pid, j}           	| {pid, j, i} 		|
| 3           | {pid, j, i}			| {pid, k, j} 		|
| 4           | {pid, k, j}			| {pid, k, j} 		|
| 5           | {pid, k, j}         | {pid, k, h} 		|
| 6           | {pid, k, h} 		| {pid, k, h} 		|
| 7           | {pid, k} 			| {pid, k, h} 		|
| 8           | {pid, k, h}    		| {answer, pid, k} 	|
| 9           | {answer, pid, k} 	| $\emptyset$ 		|
| 10          | $\emptyset$    		| - 				|


# Ejercicio 6

En $available \ expressions \ analysis$ vamos a considerar que se mata toda expresión que tenga algún operando overrideado por la operación actual. Se genera la expresión actual.

| Nodo n      | IN[n]        		| OUT[n]      		|
| ----------- | ------------------- | ----------------- |
| 0           | -           		| $\emptyset$  		|
| 1           | $\emptyset$    		| $\emptyset$  		|
| 2           | $\emptyset$    		| $\emptyset$  		|
| 3           | $\emptyset$    		| $\emptyset$  		|
| 4           | $\emptyset$    		| {m[i]} 	  		|
| 5           | {m[i]}         		| $\emptyset$  		|
| 6           | $\emptyset$   		| $\emptyset$ 		|
| 8           | $\emptyset$    		| {bar(M, a )}		|
| 9           | {bar(M, a )}		| -		 	  		|


# Ejercicio 7

|             | Forward    				| Backward     			|
| ----------- | ----------------------- | ---------------------	|
| May         | Reaching definitions	| Live variables		|
| Must        | Available Expressions   | Very busy expressions	|


# Ejercicio 8

![Points to graph](./points_to_graph_p1_ej8.png){height=210px}


# Ejercicio 9

Las siguientes reglas deben ser especificadas como hechos ya conocidos sobre el programa:

| kill(n:N, v:V) 
| gen(n:N, v:V)
| next(n:N, m:N)


Defino las siguientes reglas:

| in(n, v) :- out(n, v), !kill(n, v)
| in(n,v) :- gen(n, v)
| out(n, v) :- next(n, m), in(m, v)










