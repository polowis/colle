uses crt;
var a:array[1..1000] of longint;
    b:array[1..1000] of longint;
    n,i,j,c,d,s,max,m:longint;
function nt(k:longint):boolean;
var d,i:longint;
begin
     if k<=1 then nt:=false
     else
         begin
              d:=2;
              for i:=2 to k div 2 do if k mod i=0 then inc(d);
              if d=2 then nt:=true else nt:=false;
         end;
end;
BEGIN
     clrscr;
     readln(n);
     for i:=1 to n do readln(a[i]);
     write('Element: ');
     for i:=1 to n do write(a[i],' ');
     writeln;
     d:=0;
     for i:=1 to n do if (a[i] mod 7=0) and (a[i] mod 3<>0) then inc(d);
     if d>0 then
        begin
             writeln('There is ',d,' divided by 7 and cannot be divided by 3');
             write('Position: ');
             for i:=1 to n do if (a[i] mod 7=0) and (a[i] mod 3<>0) then write(i,' ');
             writeln;
        end
     else writeln('There is no element');
     d:=0;s:=0;
     for i:=1 to n do if nt(a[i]) then
         begin
              inc(d);
              inc(s,a[i]);
         end;
     if d>0 then
        begin
             writeln('There is ',d,' prime number');
             writeln('Average: ',s/d:0:2);
        end
     else writeln('There is no prime number');
     for i:=1 to n-1 do
         for j:=i+1 to n do
             if a[i]<a[j] then
                begin
                     c:=a[i];
                     a[i]:=a[j];
                     a[j]:=c;
                end;
     write('Second largest:');
     for i:=1 to n do if a[i]<>a[i+1] then
         begin
              writeln(a[i+1]);
              break;
         end;
     for i:=1 to n do b[i]:=0;
     m:=0;
     for i:=n downto 1 do if odd(a[i]) then
         begin
              inc(m);
              b[m]:=a[i];
         end;
     for i:=n downto 1 do if not odd(a[i]) then
         begin
              inc(m);
              b[m]:=a[i];
         end;
     write('Result:');
     for i:=1 to m do write(b[i],' ');
     readln
END.
