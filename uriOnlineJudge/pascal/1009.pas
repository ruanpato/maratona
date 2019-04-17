//Wrong Answer 5%
var
    nome : string;
    sal, com : double;
begin
    readln(nome);
    readln(sal);
    readln(com);
    writeln('TOTAL = R$ ', (sal+(com/100)*15):0:2);
end.
