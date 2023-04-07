# gobject-derived
Create two objects `device-ac` and `device-lt` from a derived class type called `device`. Children use the parents virtual method to display their private members values.
### compile
`gcc $(pkg-config --cflags gobject-2.0) -o demo main.c device.c device-ac.c device-lt.c $(pkg-config --libs gobject-2.0)`
### output
```
$ ./demo
foo: 1
foo: 1
foo: 2
foo: 2
```
