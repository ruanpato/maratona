var
    a, b, c : double;
begin
    readln(a, b, c);
    writeln('TRIANGULO: ', ((a*c)/2):0:3);
    writeln('CIRCULO: ', (3.14159*(c*c)):0:3);
    writeln('TRAPEZIO: ', (((a+b)*c)/2):0:3);
    writeln('QUADRADO: ', (b*b):0:3);
    writeln('RETANGULO: ', (a*b):0:3);
end.
