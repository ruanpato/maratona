type
	mov=array[0..2] of char;
var
	begg, endd : mov;
	flg, i0, i1, j0, j1 : integer;
begin
	readln(begg, endd);
	flg:=0;i0:=ord(begg[0]);i1:=(ord(begg[1]));j0:=(ord(endd[0]));j1:=(ord(endd[1]));
	if( ((i0+2 = j0 or i0-2 = j0) and (i1+1 = j1 or i1-1 = j1)) or ((i1+2 = j1 or i1-2 = j1) and (i0+1 = j0 or i0-1 = j0)) ) then
	begin
		writeln('VALIDO');
	end
	else
	begin
		writeln('INVALIDO');
	end;
end.
