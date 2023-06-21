----------------------------------------------------------------------------
-- Progetto MVS: gatto e topo-----------------------------------------------
-- Filename: Progetto_MVS
-- Specifiche file: file del labirinto senza ostacoli
-- Autori: Federica Magliocca, Giulia Pascale
-- AA 2022-2023
----------------------------------------------------------------------------


-- COSTANTI

Const
  W: 10;        -- larghezza della griglia, espressa in numero di celle
  H: 10;        -- altezza della griglia, espressa in numero di celle
  INITIAL_X: 1; -- valore iniziale della coordinata x del topo
  INITIAL_Y: 1; -- valore iniziale della coordinata y del topo
  INITIAL_W: 8; -- valore iniziale della coordinata w del gatto
  INITIAL_Z: 8; -- valore iniziale della coordinata z del gatto
  USCITA_X: 1;  -- valore della coordinata x dell'uscita
  USCITA_Y: 9;  -- valore della coordinata y dell'uscita
  

-- TIPI

Type
  w_t: 1..W-1;      -- tipo per la coordinata x del topo e la coordinata w del gatto
  h_t: 1..H-1;      -- tipo per la coordinata y del topo e la coordinata z del gatto
  indw_t: 0.. W-1;  -- numero rihe della matrice
  indh_t: 0.. H-1;  -- numero colonne della matrice
  Entity: enum { Topo, Gatto, Vuoto, Uscita, Ostacolo, Parete };  -- Tipi di entità presenti nel labirinto
  a_t: array [ indw_t ] of Entity;   
  aa_t: array [ indh_t ] of a_t;  -- matrice di Entity
  var_t: 0..2;

  

-- VARIABILI

Var
  x: w_t;   -- coordinata x
  y: h_t;   -- coordinata y
  w: w_t;   -- coordinata w
  z: h_t;   -- coordinata z
  cattura : boolean;	-- cattura = true quando il gatto cattura il topo
  labirinto : aa_t;  -- labirinto
  topoUscito: boolean;  --topoUscito = true quando il topo esce dal labirinto; 
  stop: var_t;

-- PROCEDURE

Procedure Labirinto();  
  Begin
  --generare il labirinto
    for i: indw_t do
      for j: indh_t do
        if (i = 0|i = W-1|j = 0| j = H-1) then
          labirinto[i][j]:= Parete;          -- inserire pareti intorno al labirinto
        else
          labirinto[i][j]:= Vuoto            -- inserire casella vuote
        endif;
      endfor;
    endfor; 
  labirinto[INITIAL_X][INITIAL_Y] := Topo;     -- posiziona topo nel labirinto
  labirinto[INITIAL_W][INITIAL_Z] := Gatto;    -- posiziona gatto nel labirinto 
  labirinto[USCITA_X][USCITA_Y] := Uscita;     -- posiziona uscita dal labirinto      
Endprocedure;


Procedure Ostacoli();
    Begin
    -- inserire ostacoli  
        labirinto[1][5]:= Ostacolo;       -- inserire ostacolo
        labirinto[1][6]:= Ostacolo;       -- inserire ostacolo
        labirinto[2][2]:= Ostacolo;       -- inserire ostacolo
        labirinto[2][3]:= Ostacolo;       -- inserire ostacolo
        labirinto[2][5]:= Ostacolo;       -- inserire ostacolo
        labirinto[2][6]:= Ostacolo;       -- inserire ostacolo
        labirinto[2][8]:= Ostacolo;       -- inserire ostacolo
        labirinto[3][3]:= Ostacolo;       -- inserire ostacolo
        labirinto[3][6]:= Ostacolo;       -- inserire ostacolo
        labirinto[4][2]:= Ostacolo;       -- inserire ostacolo
        labirinto[4][4]:= Ostacolo;       -- inserire ostacolo
        labirinto[4][6]:= Ostacolo;       -- inserire ostacolo
        labirinto[4][7]:= Ostacolo;       -- inserire ostacolo
        labirinto[5][1]:= Ostacolo;       -- inserire ostacolo
        labirinto[6][3]:= Ostacolo;       -- inserire ostacolo
        labirinto[6][4]:= Ostacolo;       -- inserire ostacolo
        labirinto[6][5]:= Ostacolo;       -- inserire ostacolo
        labirinto[6][7]:= Ostacolo;       -- inserire ostacolo
        labirinto[6][8]:= Ostacolo;       -- inserire ostacolo
        labirinto[7][1]:= Ostacolo;       -- inserire ostacolo
        labirinto[7][2]:= Ostacolo;       -- inserire ostacolo
        labirinto[7][3]:= Ostacolo;       -- inserire ostacolo
        labirinto[7][4]:= Ostacolo;       -- inserire ostacolo
        labirinto[7][5]:= Ostacolo;       -- inserire ostacolo
        labirinto[8][1]:= Ostacolo;       -- inserire ostacolo
        labirinto[8][7]:= Ostacolo;       -- inserire ostacolo
Endprocedure;


Procedure Cattura(Var x : w_t; Var y : h_t; Var w : w_t; Var z : h_t);
Begin
  if (x = w & y = z) then --se il topo e il gatto sono nella stessa casella 
    cattura := true;      --il topo viene catturato
  endif;
Endprocedure;


Procedure Esci(Var x : w_t; Var y : h_t);
Begin
  if labirinto[x][y] = Uscita then  --se il topo arriva all'uscita
    topoUscito := true;  
  endif;
Endprocedure;


 
-- REGOLE

  Rule "Topo avanza verso il basso"
  -- muovi il topo se è ancora nel labirinto, se non è stato catturato e se la casella è libera
  (!topoUscito) & (!cattura) & stop!=2 & labirinto[x+1][y]!=Ostacolo & labirinto[x+1][y]!=Parete
  ==>
  Begin
    labirinto[x][y] := Vuoto;
  	x := x+1;                    -- aggiorna coordinata x del topo
    Cattura(x,y,w,z);            -- controlla se il topo è stato catturato
    Esci(x,y);                   -- controlla se il topo è uscito dal labirinto
    labirinto[x][y] := Topo;     -- sposta il topo nel labirinto
    stop:=stop+1;                
  End;

  Rule "Topo avanza verso l'alto"
  -- muovi il topo se è ancora nel labirinto, se non è stato catturato e se la casella è libera
  (!topoUscito) & (!cattura) & stop!=2 & labirinto[x-1][y]!=Ostacolo & labirinto[x-1][y]!=Parete
  ==>
  Begin
    labirinto[x][y] := Vuoto;
  	x := x-1;                    -- aggiorna coordinata x del topo
    Cattura(x,y,w,z);            -- controlla se il topo è stato catturato
    Esci(x,y);                   -- controlla se il topo è uscito dal labirinto
    stop:=stop+1;
    labirinto[x][y] := Topo;     -- sposta il topo nel labirinto
  End;

  Rule "Topo avanza a destra"
  -- muovi il topo se è ancora nel labirinto, se non è stato catturato e se la casella è libera
  (!topoUscito) & (!cattura) & stop!=2 & labirinto[x][y+1]!=Ostacolo & labirinto[x][y+1]!=Parete 
  ==>
  Begin
    labirinto[x][y] := Vuoto;
  	y := y+1;                    -- aggiorna coordinata y del topo
    Cattura(x,y,w,z);            -- controlla se il topo è stato catturato
    Esci(x,y);                   -- controlla se il topo è uscito dal labirinto
    stop:=stop+1;
    labirinto[x][y] := Topo;     -- sposta il topo nel labirinto
  End;

  Rule "Topo avanza a sinistra"
  -- muovi il topo se è ancora nel labirinto, se non è stato catturato e se la casella è libera
  (!topoUscito) & (!cattura) & stop!=2 & labirinto[x][y-1]!=Ostacolo & labirinto[x][y-1]!=Parete
  ==>
  Begin
    labirinto[x][y] := Vuoto;      
  	y := y-1;                     -- aggiorna coordinata y del topo
    Cattura(x,y,w,z);             -- controlla se il topo è stato catturato
    Esci(x,y);                    -- controlla se il topo è uscito dal labirinto
    stop:=stop+1;
    labirinto[x][y] := Topo;     -- sposta il topo nel labirinto
  End;

-- Rule per il comportamento del gatto 

  Rule "Gatto avanza verso il basso"
  -- muovi il gatto se il topo è ancora nel labirinto,se il topo non è stato catturato, se il gatto si avvicina al topo 
  --(oppure non ha altra scelta perchè le altre direzioni sono bloccate) e se la casella è libera
  !topoUscito & !cattura & (x - w > 0 | (((y - z > 0 & (labirinto[w][z+1] = Ostacolo | labirinto[w][z+1] = Parete)) | y - z <= 0) & 
  ((y - z < 0 & (labirinto[w][z-1] = Ostacolo | labirinto[w][z-1] = Parete)) | y - z >= 0) & ((x - w < 0 & (labirinto[w-1][z] = Ostacolo | labirinto[w-1][z] = Parete)) | x - w >= 0))) 
  & stop=2 & labirinto[w+1][z]!=Ostacolo & labirinto[w+1][z]!=Parete
  ==>
  Begin 
    labirinto[w][z] := Vuoto;         
    w := w +1;                      -- aggiorna coordinata w del gatto
    Cattura(x,y,w,z);               -- controlla se il topo è stato catturato
    Esci(x,y);                      -- controlla se il topo è uscito dal labirinto
    stop:=stop-2;
    labirinto[w][z] := Gatto;       -- sposta il gatto nel labirinto
  End;

  Rule "Gatto avanza verso l'alto"
  -- muovi il gatto se il topo è ancora nel labirinto,se il topo non è stato catturato, se il gatto si avvicina al topo
  --(oppure non ha altra scelta perchè le altre direzioni sono bloccate) e se la casella è libera
  !topoUscito & !cattura & (x - w < 0 | (((y - z > 0 & (labirinto[w][z+1] = Ostacolo | labirinto[w][z+1] = Parete)) | y - z <= 0) & 
  ((y - z < 0 & (labirinto[w][z-1] = Ostacolo | labirinto[w][z-1] = Parete)) | y - z >= 0) & ((x - w > 0 & (labirinto[w+1][z] = Ostacolo | labirinto[w+1][z] = Parete)) | x - w <= 0))) 
  & stop=2 & labirinto[w-1][z]!=Ostacolo & labirinto[w-1][z]!=Parete
  ==>
  Begin 
    labirinto[w][z] := Vuoto;
    w := w -1;                      -- aggiorna coordinata w del gatto
    Cattura(x,y,w,z);               -- controlla se il topo è stato catturato
    Esci(x,y);                      -- controlla se il topo è uscito dal labirinto
    stop:=stop-2;
    labirinto[w][z] := Gatto;       -- sposta il gatto nel labirinto
  End;

  Rule "Gatto avanza a destra"
  -- muovi il gatto se il topo è ancora nel labirinto,se il topo non è stato catturato, se il gatto si avvicina al topo
  --(oppure non ha altra scelta perchè le altre direzioni sono bloccate) e se la casella è libera
  !topoUscito & !cattura & (y - z > 0 | ( ((y - z < 0 & (labirinto[w][z-1] = Ostacolo | labirinto[w][z-1] = Parete)) | y - z >= 0) & 
  ((x - w < 0 & (labirinto[w-1][z] = Ostacolo | labirinto[w-1][z] = Parete)) | x - w >= 0) & ((x - w > 0 & (labirinto[w+1][z] = Ostacolo | labirinto[w+1][z] = Parete)) | x - w <= 0))) 
  & stop=2 & labirinto[w][z+1]!=Ostacolo & labirinto[w][z+1]!=Parete
  ==>
  Begin 
    labirinto[w][z] := Vuoto;
    z := z + 1;                      -- aggiorna coordinata z del gatto
    Cattura(x,y,w,z);                -- controlla se il topo è stato catturato
    Esci(x,y);                       -- controlla se il topo è uscito dal labirinto
    stop:=stop-2;
    labirinto[w][z] := Gatto;       -- sposta il gatto nel labirinto
  End;

  Rule "Gatto avanza a sinistra"
  -- muovi il gatto se il topo è ancora nel labirinto,se il topo non è stato catturato, se il gatto si avvicina al topo
  --(oppure non ha altra scelta perchè le altre direzioni sono bloccate) e se la casella è libera
  !topoUscito & !cattura & (y - z < 0 |( ((y - z > 0 & (labirinto[w][z+1] = Ostacolo | labirinto[w][z+1] = Parete)) | y - z <= 0) & 
  ((x - w < 0 & (labirinto[w-1][z] = Ostacolo | labirinto[w-1][z] = Parete)) | x - w >= 0) & ((x - w > 0 & (labirinto[w+1][z] = Ostacolo | labirinto[w+1][z] = Parete)) | x - w <= 0)))
  & stop=2 & labirinto[w][z-1]!=Ostacolo & labirinto[w][z-1]!=Parete
  ==>
  Begin
    labirinto[w][z] := Vuoto;
    z := z - 1;                     -- aggiorna coordinata z del gatto
    Cattura(x,y,w,z);               -- controlla se il topo è stato catturato
    Esci(x,y);                      -- controlla se il topo è uscito dal labirinto
    stop:=stop-2;
    labirinto[w][z] := Gatto;       -- sposta il gatto nel labirinto
  End;
  


-- STATO INIZIALE

Startstate  -- stato iniziale
Begin
  cattura := false;
  topoUscito := false;
  stop := 0;
  x := INITIAL_X;
  y := INITIAL_Y;
  w := INITIAL_W;
  z := INITIAL_Z;
  Labirinto();
  Ostacoli();
End;
  


-- INVARIANTI

Invariant "x coord in range"  -- invariante: la coordinata x deve rimanere dentro le pareti
  x >= 1 & (x < H-1 | x = USCITA_X); 

Invariant "y coord in range"  -- invariante: la coordinata y deve rimanere dentro le pareti
  y >= 1 & (y < W-1 | y = USCITA_Y); 

Invariant "w coord in range"  -- invariante: la coordinata w deve rimanere dentro le pareti
  w >= 1 & w <= H-2;

Invariant "z coord in range"  -- invariante: la coordinata z deve rimanere dentro le pareti
  z >= 1 & z <= W-2;
  
Invariant "Cattura: il topo è stato catturato" -- invariante: il gatto cattura il topo
  cattura = false;

Invariant "Uscita: il topo è scappato"    -- invariante il topo esce dal labirinto
  topoUscito = false;

