uses math;
var
    x0, x1, y0, y1 : double;
begin
    readln(x0, y0);
    readln(x1, y1);
    writeln((sqrt((x1-x0)*(x1-x0)+(y1-y0)*(y1-y0))):0:4);
end.
