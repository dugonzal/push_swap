## empezando:

stack a; -  tiene numeros negativos y positivos
stack b; -  no tiene nada


## reglas del juego:

### movimentos

- swap de stacks

sa: swap a -intercambia los dos primero elementos del stack a, no hace nada si ha uno o menos elementos,

sb: swap b -intercambia los dos primero elementos del stack b, no hace nada si hay uno o menos elementos,

ss: swap  sa y sb al mismo tiempo

pa: push a - toma el primer elemento del stack b y lo pone encima del stack a, no hace nada si esta vacio.

pb: push b - toma el primer elemento del stack a y lo pone encima del stack b, no hace nada si esta vacio.

### rotaciones

ra: rotate a - rota hacia arriba todos los elementos del stack a, el primero se convierte en el ultimo, no hace nada si tiene uno o menos elementos.

rb: rotate b - rota hacia arriba todos los elementos del stack b, el primero se convierte en el ultimo, no hace nada si tiene uno o menos elementos.


