var
    cod0, cod1, qtd0, qtd1 : integer;
    valor0, valor1 : double;
begin
    readln(cod0, qtd0, valor0);
    readln(cod1, qtd1, valor1);
    writeln('VALOR A PAGAR: R$ ', (qtd0*valor0+qtd1*valor1):0:2);
end.
