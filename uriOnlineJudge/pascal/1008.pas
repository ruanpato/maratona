var
    cod, hora : integer;
    valor : double;
begin
    readln(cod);
    readln(hora);
    readln(valor);
    writeln('NUMBER = ', cod); 
    writeln('SALARY = U$ ', (hora*valor):0:2);
end.
