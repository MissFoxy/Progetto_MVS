/******************************
  Program "Progetto_MVS_topobloccato.m" compiled by "Caching Murphi Release 5.5.0"

  Murphi Last Compiled date: "Jan 31 2023"
 ******************************/

/********************
  Parameter
 ********************/
#define MURPHI_VERSION "Caching Murphi Release 5.5.0"
#define MURPHI_DATE "Jan 31 2023"
#define PROTOCOL_NAME "Progetto_MVS_topobloccato"
#define BITS_IN_WORLD 322
#define HASHC

/********************
  Include
 ********************/
#include "mu_prolog.hpp"

/********************
  Decl declaration
 ********************/

class mu_1_w_t: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_w_t& val) { return mu__byte::operator=((int) val); };
  mu_1_w_t (const char *name, int os): mu__byte(1, 9, 4, name, os) {};
  mu_1_w_t (void): mu__byte(1, 9, 4) {};
  mu_1_w_t (int val): mu__byte(1, 9, 4, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1_w_t mu_1_w_t_undefined_var;

class mu_1_h_t: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_h_t& val) { return mu__byte::operator=((int) val); };
  mu_1_h_t (const char *name, int os): mu__byte(1, 9, 4, name, os) {};
  mu_1_h_t (void): mu__byte(1, 9, 4) {};
  mu_1_h_t (int val): mu__byte(1, 9, 4, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1_h_t mu_1_h_t_undefined_var;

class mu_1_indw_t: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_indw_t& val) { return mu__byte::operator=((int) val); };
  mu_1_indw_t (const char *name, int os): mu__byte(0, 9, 4, name, os) {};
  mu_1_indw_t (void): mu__byte(0, 9, 4) {};
  mu_1_indw_t (int val): mu__byte(0, 9, 4, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1_indw_t mu_1_indw_t_undefined_var;

class mu_1_indh_t: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_indh_t& val) { return mu__byte::operator=((int) val); };
  mu_1_indh_t (const char *name, int os): mu__byte(0, 9, 4, name, os) {};
  mu_1_indh_t (void): mu__byte(0, 9, 4) {};
  mu_1_indh_t (int val): mu__byte(0, 9, 4, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1_indh_t mu_1_indh_t_undefined_var;

class mu_1_Entity: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_Entity& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_Entity& val)
  {
    if (val.defined())
      return ( s << mu_1_Entity::values[ int(val) - 1] );
    else return ( s << "Undefined" );
  };

  mu_1_Entity (const char *name, int os): mu__byte(1, 6, 3, name, os) {};
  mu_1_Entity (void): mu__byte(1, 6, 3) {};
  mu_1_Entity (int val): mu__byte(1, 6, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -1]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -1] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_Entity::values[] = {"Topo","Gatto","Vuoto","Uscita","Ostacolo","Parete",NULL };

/*** end of enum declaration ***/
mu_1_Entity mu_1_Entity_undefined_var;

class mu_1_a_t
{
 public:
  mu_1_Entity array[ 10 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1_a_t (const char *n, int os) { set_self(n, os); };
  mu_1_a_t ( void ) {};
  virtual ~mu_1_a_t ();
  mu_1_Entity& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 9 ) )
      return array[ index - 0 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 0 ];
#endif
  };
  mu_1_a_t& operator= (const mu_1_a_t& from)
  {
    for (int i = 0; i < 10; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1_a_t& a, mu_1_a_t& b)
  {
    int w;
    for (int i=0; i<10; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1_a_t& a, mu_1_a_t& b)
  {
    int w;
    for (int i=0; i<10; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<10; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<10; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 10; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 10; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 10; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 10; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 10; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 10; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1_a_t::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_a_t::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_a_t::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 10; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 3 + os);
    delete[] s;
  }
};
mu_1_a_t::~mu_1_a_t()
{
}
/*** end array declaration ***/
mu_1_a_t mu_1_a_t_undefined_var;

class mu_1_aa_t
{
 public:
  mu_1_a_t array[ 10 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1_aa_t (const char *n, int os) { set_self(n, os); };
  mu_1_aa_t ( void ) {};
  virtual ~mu_1_aa_t ();
  mu_1_a_t& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 9 ) )
      return array[ index - 0 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 0 ];
#endif
  };
  mu_1_aa_t& operator= (const mu_1_aa_t& from)
  {
    for (int i = 0; i < 10; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1_aa_t& a, mu_1_aa_t& b)
  {
    int w;
    for (int i=0; i<10; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1_aa_t& a, mu_1_aa_t& b)
  {
    int w;
    for (int i=0; i<10; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<10; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<10; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 10; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 10; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 10; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 10; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 10; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 10; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1_aa_t::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_aa_t::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_aa_t::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 10; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 30 + os);
    delete[] s;
  }
};
mu_1_aa_t::~mu_1_aa_t()
{
}
/*** end array declaration ***/
mu_1_aa_t mu_1_aa_t_undefined_var;

class mu_1_var_t: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_var_t& val) { return mu__byte::operator=((int) val); };
  mu_1_var_t (const char *name, int os): mu__byte(0, 2, 2, name, os) {};
  mu_1_var_t (void): mu__byte(0, 2, 2) {};
  mu_1_var_t (int val): mu__byte(0, 2, 2, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1_var_t mu_1_var_t_undefined_var;

const int mu_W = 10;
const int mu_H = 10;
const int mu_INITIAL_X = 1;
const int mu_INITIAL_Y = 1;
const int mu_INITIAL_W = 8;
const int mu_INITIAL_Z = 8;
const int mu_USCITA_X = 1;
const int mu_USCITA_Y = 9;
const int mu_Topo = 1;
const int mu_Gatto = 2;
const int mu_Vuoto = 3;
const int mu_Uscita = 4;
const int mu_Ostacolo = 5;
const int mu_Parete = 6;
/*** Variable declaration ***/
mu_1_w_t mu_x("x",0);

/*** Variable declaration ***/
mu_1_h_t mu_y("y",4);

/*** Variable declaration ***/
mu_1_w_t mu_w("w",8);

/*** Variable declaration ***/
mu_1_h_t mu_z("z",12);

/*** Variable declaration ***/
mu_0_boolean mu_cattura("cattura",16);

/*** Variable declaration ***/
mu_1_aa_t mu_labirinto("labirinto",18);

/*** Variable declaration ***/
mu_0_boolean mu_topoUscito("topoUscito",318);

/*** Variable declaration ***/
mu_1_var_t mu_stop("stop",320);

void mu_Labirinto()
{
{
for(int mu_i = 0; mu_i <= 9; mu_i++) {
{
for(int mu_j = 0; mu_j <= 9; mu_j++) {
bool mu__boolexpr0;
bool mu__boolexpr1;
bool mu__boolexpr2;
  if ((mu_i) == (0)) mu__boolexpr2 = TRUE ;
  else {
  mu__boolexpr2 = ((mu_i) == (9)) ; 
}
  if (mu__boolexpr2) mu__boolexpr1 = TRUE ;
  else {
  mu__boolexpr1 = ((mu_j) == (0)) ; 
}
  if (mu__boolexpr1) mu__boolexpr0 = TRUE ;
  else {
  mu__boolexpr0 = ((mu_j) == (9)) ; 
}
if ( mu__boolexpr0 )
{
mu_labirinto[mu_i][mu_j] = mu_Parete;
}
else
{
mu_labirinto[mu_i][mu_j] = mu_Vuoto;
}
};
};
};
};
mu_labirinto[mu_INITIAL_X][mu_INITIAL_Y] = mu_Topo;
mu_labirinto[mu_INITIAL_W][mu_INITIAL_Z] = mu_Gatto;
mu_labirinto[mu_USCITA_X][mu_USCITA_Y] = mu_Uscita;
};
/*** end procedure declaration ***/

void mu_Ostacoli()
{
mu_labirinto[1][5] = mu_Ostacolo;
mu_labirinto[1][6] = mu_Ostacolo;
mu_labirinto[2][2] = mu_Ostacolo;
mu_labirinto[2][3] = mu_Ostacolo;
mu_labirinto[2][4] = mu_Ostacolo;
mu_labirinto[2][5] = mu_Ostacolo;
mu_labirinto[2][6] = mu_Ostacolo;
mu_labirinto[2][8] = mu_Ostacolo;
mu_labirinto[3][3] = mu_Ostacolo;
mu_labirinto[3][6] = mu_Ostacolo;
mu_labirinto[4][2] = mu_Ostacolo;
mu_labirinto[4][4] = mu_Ostacolo;
mu_labirinto[4][6] = mu_Ostacolo;
mu_labirinto[4][7] = mu_Ostacolo;
mu_labirinto[5][1] = mu_Ostacolo;
mu_labirinto[6][3] = mu_Ostacolo;
mu_labirinto[6][4] = mu_Ostacolo;
mu_labirinto[6][5] = mu_Ostacolo;
mu_labirinto[6][7] = mu_Ostacolo;
mu_labirinto[6][8] = mu_Ostacolo;
mu_labirinto[7][1] = mu_Ostacolo;
mu_labirinto[7][2] = mu_Ostacolo;
mu_labirinto[7][3] = mu_Ostacolo;
mu_labirinto[7][4] = mu_Ostacolo;
mu_labirinto[7][5] = mu_Ostacolo;
mu_labirinto[8][1] = mu_Ostacolo;
mu_labirinto[8][7] = mu_Ostacolo;
};
/*** end procedure declaration ***/

void mu_Cattura(mu_1_w_t& mu_x, mu_1_h_t& mu_y, mu_1_w_t& mu_w, mu_1_h_t& mu_z)
{
bool mu__boolexpr3;
  if (!((mu_x) == (mu_w))) mu__boolexpr3 = FALSE ;
  else {
  mu__boolexpr3 = ((mu_y) == (mu_z)) ; 
}
if ( mu__boolexpr3 )
{
mu_cattura = mu_true;
}
};
/*** end procedure declaration ***/

void mu_Esci(mu_1_w_t& mu_x, mu_1_h_t& mu_y)
{
if ( (mu_labirinto[mu_x][mu_y]) == (mu_Uscita) )
{
mu_topoUscito = mu_true;
}
};
/*** end procedure declaration ***/





/********************
  The world
 ********************/
void world_class::clear()
{
  mu_x.clear();
  mu_y.clear();
  mu_w.clear();
  mu_z.clear();
  mu_cattura.clear();
  mu_labirinto.clear();
  mu_topoUscito.clear();
  mu_stop.clear();
}
void world_class::undefine()
{
  mu_x.undefine();
  mu_y.undefine();
  mu_w.undefine();
  mu_z.undefine();
  mu_cattura.undefine();
  mu_labirinto.undefine();
  mu_topoUscito.undefine();
  mu_stop.undefine();
}
void world_class::reset()
{
  mu_x.reset();
  mu_y.reset();
  mu_w.reset();
  mu_z.reset();
  mu_cattura.reset();
  mu_labirinto.reset();
  mu_topoUscito.reset();
  mu_stop.reset();
}
void world_class::print()
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_x.print();
  mu_y.print();
  mu_w.print();
  mu_z.print();
  mu_cattura.print();
  mu_labirinto.print();
  mu_topoUscito.print();
  mu_stop.print();
    num_calls--;
}
}
void world_class::print_statistic()
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_x.print_statistic();
  mu_y.print_statistic();
  mu_w.print_statistic();
  mu_z.print_statistic();
  mu_cattura.print_statistic();
  mu_labirinto.print_statistic();
  mu_topoUscito.print_statistic();
  mu_stop.print_statistic();
    num_calls--;
}
}
void world_class::print_diff( state *prevstate )
{
  if ( prevstate != NULL )
  {
    mu_x.print_diff(prevstate);
    mu_y.print_diff(prevstate);
    mu_w.print_diff(prevstate);
    mu_z.print_diff(prevstate);
    mu_cattura.print_diff(prevstate);
    mu_labirinto.print_diff(prevstate);
    mu_topoUscito.print_diff(prevstate);
    mu_stop.print_diff(prevstate);
  }
  else
print();
}
void world_class::to_state(state *newstate)
{
  mu_x.to_state( newstate );
  mu_y.to_state( newstate );
  mu_w.to_state( newstate );
  mu_z.to_state( newstate );
  mu_cattura.to_state( newstate );
  mu_labirinto.to_state( newstate );
  mu_topoUscito.to_state( newstate );
  mu_stop.to_state( newstate );
}
void world_class::setstate(state *thestate)
{
}


/********************
  Rule declarations
 ********************/
/******************** RuleBase0 ********************/
class RuleBase0
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("Gatto avanza a sinistra");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr4;
bool mu__boolexpr5;
bool mu__boolexpr6;
bool mu__boolexpr7;
bool mu__boolexpr8;
  if (!(!(mu_topoUscito))) mu__boolexpr8 = FALSE ;
  else {
  mu__boolexpr8 = (!(mu_cattura)) ; 
}
  if (!(mu__boolexpr8)) mu__boolexpr7 = FALSE ;
  else {
bool mu__boolexpr9;
  if (((mu_y) - (mu_z)) < (0)) mu__boolexpr9 = TRUE ;
  else {
bool mu__boolexpr10;
bool mu__boolexpr11;
bool mu__boolexpr12;
bool mu__boolexpr13;
  if (!(((mu_y) - (mu_z)) > (0))) mu__boolexpr13 = FALSE ;
  else {
bool mu__boolexpr14;
  if ((mu_labirinto[mu_w][(mu_z) + (1)]) == (mu_Ostacolo)) mu__boolexpr14 = TRUE ;
  else {
  mu__boolexpr14 = ((mu_labirinto[mu_w][(mu_z) + (1)]) == (mu_Parete)) ; 
}
  mu__boolexpr13 = (mu__boolexpr14) ; 
}
  if (mu__boolexpr13) mu__boolexpr12 = TRUE ;
  else {
  mu__boolexpr12 = (((mu_y) - (mu_z)) <= (0)) ; 
}
  if (!(mu__boolexpr12)) mu__boolexpr11 = FALSE ;
  else {
bool mu__boolexpr15;
bool mu__boolexpr16;
  if (!(((mu_x) - (mu_w)) < (0))) mu__boolexpr16 = FALSE ;
  else {
bool mu__boolexpr17;
  if ((mu_labirinto[(mu_w) - (1)][mu_z]) == (mu_Ostacolo)) mu__boolexpr17 = TRUE ;
  else {
  mu__boolexpr17 = ((mu_labirinto[(mu_w) - (1)][mu_z]) == (mu_Parete)) ; 
}
  mu__boolexpr16 = (mu__boolexpr17) ; 
}
  if (mu__boolexpr16) mu__boolexpr15 = TRUE ;
  else {
  mu__boolexpr15 = (((mu_x) - (mu_w)) >= (0)) ; 
}
  mu__boolexpr11 = (mu__boolexpr15) ; 
}
  if (!(mu__boolexpr11)) mu__boolexpr10 = FALSE ;
  else {
bool mu__boolexpr18;
bool mu__boolexpr19;
  if (!(((mu_x) - (mu_w)) > (0))) mu__boolexpr19 = FALSE ;
  else {
bool mu__boolexpr20;
  if ((mu_labirinto[(mu_w) + (1)][mu_z]) == (mu_Ostacolo)) mu__boolexpr20 = TRUE ;
  else {
  mu__boolexpr20 = ((mu_labirinto[(mu_w) + (1)][mu_z]) == (mu_Parete)) ; 
}
  mu__boolexpr19 = (mu__boolexpr20) ; 
}
  if (mu__boolexpr19) mu__boolexpr18 = TRUE ;
  else {
  mu__boolexpr18 = (((mu_x) - (mu_w)) <= (0)) ; 
}
  mu__boolexpr10 = (mu__boolexpr18) ; 
}
  mu__boolexpr9 = (mu__boolexpr10) ; 
}
  mu__boolexpr7 = (mu__boolexpr9) ; 
}
  if (!(mu__boolexpr7)) mu__boolexpr6 = FALSE ;
  else {
  mu__boolexpr6 = ((mu_stop) == (2)) ; 
}
  if (!(mu__boolexpr6)) mu__boolexpr5 = FALSE ;
  else {
  mu__boolexpr5 = ((mu_labirinto[mu_w][(mu_z) - (1)]) != (mu_Ostacolo)) ; 
}
  if (!(mu__boolexpr5)) mu__boolexpr4 = FALSE ;
  else {
  mu__boolexpr4 = ((mu_labirinto[mu_w][(mu_z) - (1)]) != (mu_Parete)) ; 
}
    return mu__boolexpr4;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 0;
    while (what_rule < 1 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr21;
bool mu__boolexpr22;
bool mu__boolexpr23;
bool mu__boolexpr24;
bool mu__boolexpr25;
  if (!(!(mu_topoUscito))) mu__boolexpr25 = FALSE ;
  else {
  mu__boolexpr25 = (!(mu_cattura)) ; 
}
  if (!(mu__boolexpr25)) mu__boolexpr24 = FALSE ;
  else {
bool mu__boolexpr26;
  if (((mu_y) - (mu_z)) < (0)) mu__boolexpr26 = TRUE ;
  else {
bool mu__boolexpr27;
bool mu__boolexpr28;
bool mu__boolexpr29;
bool mu__boolexpr30;
  if (!(((mu_y) - (mu_z)) > (0))) mu__boolexpr30 = FALSE ;
  else {
bool mu__boolexpr31;
  if ((mu_labirinto[mu_w][(mu_z) + (1)]) == (mu_Ostacolo)) mu__boolexpr31 = TRUE ;
  else {
  mu__boolexpr31 = ((mu_labirinto[mu_w][(mu_z) + (1)]) == (mu_Parete)) ; 
}
  mu__boolexpr30 = (mu__boolexpr31) ; 
}
  if (mu__boolexpr30) mu__boolexpr29 = TRUE ;
  else {
  mu__boolexpr29 = (((mu_y) - (mu_z)) <= (0)) ; 
}
  if (!(mu__boolexpr29)) mu__boolexpr28 = FALSE ;
  else {
bool mu__boolexpr32;
bool mu__boolexpr33;
  if (!(((mu_x) - (mu_w)) < (0))) mu__boolexpr33 = FALSE ;
  else {
bool mu__boolexpr34;
  if ((mu_labirinto[(mu_w) - (1)][mu_z]) == (mu_Ostacolo)) mu__boolexpr34 = TRUE ;
  else {
  mu__boolexpr34 = ((mu_labirinto[(mu_w) - (1)][mu_z]) == (mu_Parete)) ; 
}
  mu__boolexpr33 = (mu__boolexpr34) ; 
}
  if (mu__boolexpr33) mu__boolexpr32 = TRUE ;
  else {
  mu__boolexpr32 = (((mu_x) - (mu_w)) >= (0)) ; 
}
  mu__boolexpr28 = (mu__boolexpr32) ; 
}
  if (!(mu__boolexpr28)) mu__boolexpr27 = FALSE ;
  else {
bool mu__boolexpr35;
bool mu__boolexpr36;
  if (!(((mu_x) - (mu_w)) > (0))) mu__boolexpr36 = FALSE ;
  else {
bool mu__boolexpr37;
  if ((mu_labirinto[(mu_w) + (1)][mu_z]) == (mu_Ostacolo)) mu__boolexpr37 = TRUE ;
  else {
  mu__boolexpr37 = ((mu_labirinto[(mu_w) + (1)][mu_z]) == (mu_Parete)) ; 
}
  mu__boolexpr36 = (mu__boolexpr37) ; 
}
  if (mu__boolexpr36) mu__boolexpr35 = TRUE ;
  else {
  mu__boolexpr35 = (((mu_x) - (mu_w)) <= (0)) ; 
}
  mu__boolexpr27 = (mu__boolexpr35) ; 
}
  mu__boolexpr26 = (mu__boolexpr27) ; 
}
  mu__boolexpr24 = (mu__boolexpr26) ; 
}
  if (!(mu__boolexpr24)) mu__boolexpr23 = FALSE ;
  else {
  mu__boolexpr23 = ((mu_stop) == (2)) ; 
}
  if (!(mu__boolexpr23)) mu__boolexpr22 = FALSE ;
  else {
  mu__boolexpr22 = ((mu_labirinto[mu_w][(mu_z) - (1)]) != (mu_Ostacolo)) ; 
}
  if (!(mu__boolexpr22)) mu__boolexpr21 = FALSE ;
  else {
  mu__boolexpr21 = ((mu_labirinto[mu_w][(mu_z) - (1)]) != (mu_Parete)) ; 
}
	      if (mu__boolexpr21) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 0;
    }
  }

  void Code(unsigned r)
  {
mu_labirinto[mu_w][mu_z] = mu_Vuoto;
mu_z = (mu_z) - (1);
mu_Cattura ( mu_x, mu_y, mu_w, mu_z );
mu_Esci ( mu_x, mu_y );
mu_stop = (mu_stop) - (2);
mu_labirinto[mu_w][mu_z] = mu_Gatto;
  };

};
/******************** RuleBase1 ********************/
class RuleBase1
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("Gatto avanza a destra");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr38;
bool mu__boolexpr39;
bool mu__boolexpr40;
bool mu__boolexpr41;
bool mu__boolexpr42;
  if (!(!(mu_topoUscito))) mu__boolexpr42 = FALSE ;
  else {
  mu__boolexpr42 = (!(mu_cattura)) ; 
}
  if (!(mu__boolexpr42)) mu__boolexpr41 = FALSE ;
  else {
bool mu__boolexpr43;
  if (((mu_y) - (mu_z)) > (0)) mu__boolexpr43 = TRUE ;
  else {
bool mu__boolexpr44;
bool mu__boolexpr45;
bool mu__boolexpr46;
bool mu__boolexpr47;
  if (!(((mu_y) - (mu_z)) < (0))) mu__boolexpr47 = FALSE ;
  else {
bool mu__boolexpr48;
  if ((mu_labirinto[mu_w][(mu_z) - (1)]) == (mu_Ostacolo)) mu__boolexpr48 = TRUE ;
  else {
  mu__boolexpr48 = ((mu_labirinto[mu_w][(mu_z) - (1)]) == (mu_Parete)) ; 
}
  mu__boolexpr47 = (mu__boolexpr48) ; 
}
  if (mu__boolexpr47) mu__boolexpr46 = TRUE ;
  else {
  mu__boolexpr46 = (((mu_y) - (mu_z)) >= (0)) ; 
}
  if (!(mu__boolexpr46)) mu__boolexpr45 = FALSE ;
  else {
bool mu__boolexpr49;
bool mu__boolexpr50;
  if (!(((mu_x) - (mu_w)) < (0))) mu__boolexpr50 = FALSE ;
  else {
bool mu__boolexpr51;
  if ((mu_labirinto[(mu_w) - (1)][mu_z]) == (mu_Ostacolo)) mu__boolexpr51 = TRUE ;
  else {
  mu__boolexpr51 = ((mu_labirinto[(mu_w) - (1)][mu_z]) == (mu_Parete)) ; 
}
  mu__boolexpr50 = (mu__boolexpr51) ; 
}
  if (mu__boolexpr50) mu__boolexpr49 = TRUE ;
  else {
  mu__boolexpr49 = (((mu_x) - (mu_w)) >= (0)) ; 
}
  mu__boolexpr45 = (mu__boolexpr49) ; 
}
  if (!(mu__boolexpr45)) mu__boolexpr44 = FALSE ;
  else {
bool mu__boolexpr52;
bool mu__boolexpr53;
  if (!(((mu_x) - (mu_w)) > (0))) mu__boolexpr53 = FALSE ;
  else {
bool mu__boolexpr54;
  if ((mu_labirinto[(mu_w) + (1)][mu_z]) == (mu_Ostacolo)) mu__boolexpr54 = TRUE ;
  else {
  mu__boolexpr54 = ((mu_labirinto[(mu_w) + (1)][mu_z]) == (mu_Parete)) ; 
}
  mu__boolexpr53 = (mu__boolexpr54) ; 
}
  if (mu__boolexpr53) mu__boolexpr52 = TRUE ;
  else {
  mu__boolexpr52 = (((mu_x) - (mu_w)) <= (0)) ; 
}
  mu__boolexpr44 = (mu__boolexpr52) ; 
}
  mu__boolexpr43 = (mu__boolexpr44) ; 
}
  mu__boolexpr41 = (mu__boolexpr43) ; 
}
  if (!(mu__boolexpr41)) mu__boolexpr40 = FALSE ;
  else {
  mu__boolexpr40 = ((mu_stop) == (2)) ; 
}
  if (!(mu__boolexpr40)) mu__boolexpr39 = FALSE ;
  else {
  mu__boolexpr39 = ((mu_labirinto[mu_w][(mu_z) + (1)]) != (mu_Ostacolo)) ; 
}
  if (!(mu__boolexpr39)) mu__boolexpr38 = FALSE ;
  else {
  mu__boolexpr38 = ((mu_labirinto[mu_w][(mu_z) + (1)]) != (mu_Parete)) ; 
}
    return mu__boolexpr38;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 1;
    while (what_rule < 2 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr55;
bool mu__boolexpr56;
bool mu__boolexpr57;
bool mu__boolexpr58;
bool mu__boolexpr59;
  if (!(!(mu_topoUscito))) mu__boolexpr59 = FALSE ;
  else {
  mu__boolexpr59 = (!(mu_cattura)) ; 
}
  if (!(mu__boolexpr59)) mu__boolexpr58 = FALSE ;
  else {
bool mu__boolexpr60;
  if (((mu_y) - (mu_z)) > (0)) mu__boolexpr60 = TRUE ;
  else {
bool mu__boolexpr61;
bool mu__boolexpr62;
bool mu__boolexpr63;
bool mu__boolexpr64;
  if (!(((mu_y) - (mu_z)) < (0))) mu__boolexpr64 = FALSE ;
  else {
bool mu__boolexpr65;
  if ((mu_labirinto[mu_w][(mu_z) - (1)]) == (mu_Ostacolo)) mu__boolexpr65 = TRUE ;
  else {
  mu__boolexpr65 = ((mu_labirinto[mu_w][(mu_z) - (1)]) == (mu_Parete)) ; 
}
  mu__boolexpr64 = (mu__boolexpr65) ; 
}
  if (mu__boolexpr64) mu__boolexpr63 = TRUE ;
  else {
  mu__boolexpr63 = (((mu_y) - (mu_z)) >= (0)) ; 
}
  if (!(mu__boolexpr63)) mu__boolexpr62 = FALSE ;
  else {
bool mu__boolexpr66;
bool mu__boolexpr67;
  if (!(((mu_x) - (mu_w)) < (0))) mu__boolexpr67 = FALSE ;
  else {
bool mu__boolexpr68;
  if ((mu_labirinto[(mu_w) - (1)][mu_z]) == (mu_Ostacolo)) mu__boolexpr68 = TRUE ;
  else {
  mu__boolexpr68 = ((mu_labirinto[(mu_w) - (1)][mu_z]) == (mu_Parete)) ; 
}
  mu__boolexpr67 = (mu__boolexpr68) ; 
}
  if (mu__boolexpr67) mu__boolexpr66 = TRUE ;
  else {
  mu__boolexpr66 = (((mu_x) - (mu_w)) >= (0)) ; 
}
  mu__boolexpr62 = (mu__boolexpr66) ; 
}
  if (!(mu__boolexpr62)) mu__boolexpr61 = FALSE ;
  else {
bool mu__boolexpr69;
bool mu__boolexpr70;
  if (!(((mu_x) - (mu_w)) > (0))) mu__boolexpr70 = FALSE ;
  else {
bool mu__boolexpr71;
  if ((mu_labirinto[(mu_w) + (1)][mu_z]) == (mu_Ostacolo)) mu__boolexpr71 = TRUE ;
  else {
  mu__boolexpr71 = ((mu_labirinto[(mu_w) + (1)][mu_z]) == (mu_Parete)) ; 
}
  mu__boolexpr70 = (mu__boolexpr71) ; 
}
  if (mu__boolexpr70) mu__boolexpr69 = TRUE ;
  else {
  mu__boolexpr69 = (((mu_x) - (mu_w)) <= (0)) ; 
}
  mu__boolexpr61 = (mu__boolexpr69) ; 
}
  mu__boolexpr60 = (mu__boolexpr61) ; 
}
  mu__boolexpr58 = (mu__boolexpr60) ; 
}
  if (!(mu__boolexpr58)) mu__boolexpr57 = FALSE ;
  else {
  mu__boolexpr57 = ((mu_stop) == (2)) ; 
}
  if (!(mu__boolexpr57)) mu__boolexpr56 = FALSE ;
  else {
  mu__boolexpr56 = ((mu_labirinto[mu_w][(mu_z) + (1)]) != (mu_Ostacolo)) ; 
}
  if (!(mu__boolexpr56)) mu__boolexpr55 = FALSE ;
  else {
  mu__boolexpr55 = ((mu_labirinto[mu_w][(mu_z) + (1)]) != (mu_Parete)) ; 
}
	      if (mu__boolexpr55) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 1;
    }
  }

  void Code(unsigned r)
  {
mu_labirinto[mu_w][mu_z] = mu_Vuoto;
mu_z = (mu_z) + (1);
mu_Cattura ( mu_x, mu_y, mu_w, mu_z );
mu_Esci ( mu_x, mu_y );
mu_stop = (mu_stop) - (2);
mu_labirinto[mu_w][mu_z] = mu_Gatto;
  };

};
/******************** RuleBase2 ********************/
class RuleBase2
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("Gatto avanza verso l'alto");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr72;
bool mu__boolexpr73;
bool mu__boolexpr74;
bool mu__boolexpr75;
bool mu__boolexpr76;
  if (!(!(mu_topoUscito))) mu__boolexpr76 = FALSE ;
  else {
  mu__boolexpr76 = (!(mu_cattura)) ; 
}
  if (!(mu__boolexpr76)) mu__boolexpr75 = FALSE ;
  else {
bool mu__boolexpr77;
  if (((mu_x) - (mu_w)) < (0)) mu__boolexpr77 = TRUE ;
  else {
bool mu__boolexpr78;
bool mu__boolexpr79;
bool mu__boolexpr80;
bool mu__boolexpr81;
  if (!(((mu_y) - (mu_z)) > (0))) mu__boolexpr81 = FALSE ;
  else {
bool mu__boolexpr82;
  if ((mu_labirinto[mu_w][(mu_z) + (1)]) == (mu_Ostacolo)) mu__boolexpr82 = TRUE ;
  else {
  mu__boolexpr82 = ((mu_labirinto[mu_w][(mu_z) + (1)]) == (mu_Parete)) ; 
}
  mu__boolexpr81 = (mu__boolexpr82) ; 
}
  if (mu__boolexpr81) mu__boolexpr80 = TRUE ;
  else {
  mu__boolexpr80 = (((mu_y) - (mu_z)) <= (0)) ; 
}
  if (!(mu__boolexpr80)) mu__boolexpr79 = FALSE ;
  else {
bool mu__boolexpr83;
bool mu__boolexpr84;
  if (!(((mu_y) - (mu_z)) < (0))) mu__boolexpr84 = FALSE ;
  else {
bool mu__boolexpr85;
  if ((mu_labirinto[mu_w][(mu_z) - (1)]) == (mu_Ostacolo)) mu__boolexpr85 = TRUE ;
  else {
  mu__boolexpr85 = ((mu_labirinto[mu_w][(mu_z) - (1)]) == (mu_Parete)) ; 
}
  mu__boolexpr84 = (mu__boolexpr85) ; 
}
  if (mu__boolexpr84) mu__boolexpr83 = TRUE ;
  else {
  mu__boolexpr83 = (((mu_y) - (mu_z)) >= (0)) ; 
}
  mu__boolexpr79 = (mu__boolexpr83) ; 
}
  if (!(mu__boolexpr79)) mu__boolexpr78 = FALSE ;
  else {
bool mu__boolexpr86;
bool mu__boolexpr87;
  if (!(((mu_x) - (mu_w)) > (0))) mu__boolexpr87 = FALSE ;
  else {
bool mu__boolexpr88;
  if ((mu_labirinto[(mu_w) + (1)][mu_z]) == (mu_Ostacolo)) mu__boolexpr88 = TRUE ;
  else {
  mu__boolexpr88 = ((mu_labirinto[(mu_w) + (1)][mu_z]) == (mu_Parete)) ; 
}
  mu__boolexpr87 = (mu__boolexpr88) ; 
}
  if (mu__boolexpr87) mu__boolexpr86 = TRUE ;
  else {
  mu__boolexpr86 = (((mu_x) - (mu_w)) <= (0)) ; 
}
  mu__boolexpr78 = (mu__boolexpr86) ; 
}
  mu__boolexpr77 = (mu__boolexpr78) ; 
}
  mu__boolexpr75 = (mu__boolexpr77) ; 
}
  if (!(mu__boolexpr75)) mu__boolexpr74 = FALSE ;
  else {
  mu__boolexpr74 = ((mu_stop) == (2)) ; 
}
  if (!(mu__boolexpr74)) mu__boolexpr73 = FALSE ;
  else {
  mu__boolexpr73 = ((mu_labirinto[(mu_w) - (1)][mu_z]) != (mu_Ostacolo)) ; 
}
  if (!(mu__boolexpr73)) mu__boolexpr72 = FALSE ;
  else {
  mu__boolexpr72 = ((mu_labirinto[(mu_w) - (1)][mu_z]) != (mu_Parete)) ; 
}
    return mu__boolexpr72;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 2;
    while (what_rule < 3 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr89;
bool mu__boolexpr90;
bool mu__boolexpr91;
bool mu__boolexpr92;
bool mu__boolexpr93;
  if (!(!(mu_topoUscito))) mu__boolexpr93 = FALSE ;
  else {
  mu__boolexpr93 = (!(mu_cattura)) ; 
}
  if (!(mu__boolexpr93)) mu__boolexpr92 = FALSE ;
  else {
bool mu__boolexpr94;
  if (((mu_x) - (mu_w)) < (0)) mu__boolexpr94 = TRUE ;
  else {
bool mu__boolexpr95;
bool mu__boolexpr96;
bool mu__boolexpr97;
bool mu__boolexpr98;
  if (!(((mu_y) - (mu_z)) > (0))) mu__boolexpr98 = FALSE ;
  else {
bool mu__boolexpr99;
  if ((mu_labirinto[mu_w][(mu_z) + (1)]) == (mu_Ostacolo)) mu__boolexpr99 = TRUE ;
  else {
  mu__boolexpr99 = ((mu_labirinto[mu_w][(mu_z) + (1)]) == (mu_Parete)) ; 
}
  mu__boolexpr98 = (mu__boolexpr99) ; 
}
  if (mu__boolexpr98) mu__boolexpr97 = TRUE ;
  else {
  mu__boolexpr97 = (((mu_y) - (mu_z)) <= (0)) ; 
}
  if (!(mu__boolexpr97)) mu__boolexpr96 = FALSE ;
  else {
bool mu__boolexpr100;
bool mu__boolexpr101;
  if (!(((mu_y) - (mu_z)) < (0))) mu__boolexpr101 = FALSE ;
  else {
bool mu__boolexpr102;
  if ((mu_labirinto[mu_w][(mu_z) - (1)]) == (mu_Ostacolo)) mu__boolexpr102 = TRUE ;
  else {
  mu__boolexpr102 = ((mu_labirinto[mu_w][(mu_z) - (1)]) == (mu_Parete)) ; 
}
  mu__boolexpr101 = (mu__boolexpr102) ; 
}
  if (mu__boolexpr101) mu__boolexpr100 = TRUE ;
  else {
  mu__boolexpr100 = (((mu_y) - (mu_z)) >= (0)) ; 
}
  mu__boolexpr96 = (mu__boolexpr100) ; 
}
  if (!(mu__boolexpr96)) mu__boolexpr95 = FALSE ;
  else {
bool mu__boolexpr103;
bool mu__boolexpr104;
  if (!(((mu_x) - (mu_w)) > (0))) mu__boolexpr104 = FALSE ;
  else {
bool mu__boolexpr105;
  if ((mu_labirinto[(mu_w) + (1)][mu_z]) == (mu_Ostacolo)) mu__boolexpr105 = TRUE ;
  else {
  mu__boolexpr105 = ((mu_labirinto[(mu_w) + (1)][mu_z]) == (mu_Parete)) ; 
}
  mu__boolexpr104 = (mu__boolexpr105) ; 
}
  if (mu__boolexpr104) mu__boolexpr103 = TRUE ;
  else {
  mu__boolexpr103 = (((mu_x) - (mu_w)) <= (0)) ; 
}
  mu__boolexpr95 = (mu__boolexpr103) ; 
}
  mu__boolexpr94 = (mu__boolexpr95) ; 
}
  mu__boolexpr92 = (mu__boolexpr94) ; 
}
  if (!(mu__boolexpr92)) mu__boolexpr91 = FALSE ;
  else {
  mu__boolexpr91 = ((mu_stop) == (2)) ; 
}
  if (!(mu__boolexpr91)) mu__boolexpr90 = FALSE ;
  else {
  mu__boolexpr90 = ((mu_labirinto[(mu_w) - (1)][mu_z]) != (mu_Ostacolo)) ; 
}
  if (!(mu__boolexpr90)) mu__boolexpr89 = FALSE ;
  else {
  mu__boolexpr89 = ((mu_labirinto[(mu_w) - (1)][mu_z]) != (mu_Parete)) ; 
}
	      if (mu__boolexpr89) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 2;
    }
  }

  void Code(unsigned r)
  {
mu_labirinto[mu_w][mu_z] = mu_Vuoto;
mu_w = (mu_w) - (1);
mu_Cattura ( mu_x, mu_y, mu_w, mu_z );
mu_Esci ( mu_x, mu_y );
mu_stop = (mu_stop) - (2);
mu_labirinto[mu_w][mu_z] = mu_Gatto;
  };

};
/******************** RuleBase3 ********************/
class RuleBase3
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("Gatto avanza verso il basso");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr106;
bool mu__boolexpr107;
bool mu__boolexpr108;
bool mu__boolexpr109;
bool mu__boolexpr110;
  if (!(!(mu_topoUscito))) mu__boolexpr110 = FALSE ;
  else {
  mu__boolexpr110 = (!(mu_cattura)) ; 
}
  if (!(mu__boolexpr110)) mu__boolexpr109 = FALSE ;
  else {
bool mu__boolexpr111;
  if (((mu_x) - (mu_w)) > (0)) mu__boolexpr111 = TRUE ;
  else {
bool mu__boolexpr112;
bool mu__boolexpr113;
bool mu__boolexpr114;
bool mu__boolexpr115;
  if (!(((mu_y) - (mu_z)) > (0))) mu__boolexpr115 = FALSE ;
  else {
bool mu__boolexpr116;
  if ((mu_labirinto[mu_w][(mu_z) + (1)]) == (mu_Ostacolo)) mu__boolexpr116 = TRUE ;
  else {
  mu__boolexpr116 = ((mu_labirinto[mu_w][(mu_z) + (1)]) == (mu_Parete)) ; 
}
  mu__boolexpr115 = (mu__boolexpr116) ; 
}
  if (mu__boolexpr115) mu__boolexpr114 = TRUE ;
  else {
  mu__boolexpr114 = (((mu_y) - (mu_z)) <= (0)) ; 
}
  if (!(mu__boolexpr114)) mu__boolexpr113 = FALSE ;
  else {
bool mu__boolexpr117;
bool mu__boolexpr118;
  if (!(((mu_y) - (mu_z)) < (0))) mu__boolexpr118 = FALSE ;
  else {
bool mu__boolexpr119;
  if ((mu_labirinto[mu_w][(mu_z) - (1)]) == (mu_Ostacolo)) mu__boolexpr119 = TRUE ;
  else {
  mu__boolexpr119 = ((mu_labirinto[mu_w][(mu_z) - (1)]) == (mu_Parete)) ; 
}
  mu__boolexpr118 = (mu__boolexpr119) ; 
}
  if (mu__boolexpr118) mu__boolexpr117 = TRUE ;
  else {
  mu__boolexpr117 = (((mu_y) - (mu_z)) >= (0)) ; 
}
  mu__boolexpr113 = (mu__boolexpr117) ; 
}
  if (!(mu__boolexpr113)) mu__boolexpr112 = FALSE ;
  else {
bool mu__boolexpr120;
bool mu__boolexpr121;
  if (!(((mu_x) - (mu_w)) < (0))) mu__boolexpr121 = FALSE ;
  else {
bool mu__boolexpr122;
  if ((mu_labirinto[(mu_w) - (1)][mu_z]) == (mu_Ostacolo)) mu__boolexpr122 = TRUE ;
  else {
  mu__boolexpr122 = ((mu_labirinto[(mu_w) - (1)][mu_z]) == (mu_Parete)) ; 
}
  mu__boolexpr121 = (mu__boolexpr122) ; 
}
  if (mu__boolexpr121) mu__boolexpr120 = TRUE ;
  else {
  mu__boolexpr120 = (((mu_x) - (mu_w)) >= (0)) ; 
}
  mu__boolexpr112 = (mu__boolexpr120) ; 
}
  mu__boolexpr111 = (mu__boolexpr112) ; 
}
  mu__boolexpr109 = (mu__boolexpr111) ; 
}
  if (!(mu__boolexpr109)) mu__boolexpr108 = FALSE ;
  else {
  mu__boolexpr108 = ((mu_stop) == (2)) ; 
}
  if (!(mu__boolexpr108)) mu__boolexpr107 = FALSE ;
  else {
  mu__boolexpr107 = ((mu_labirinto[(mu_w) + (1)][mu_z]) != (mu_Ostacolo)) ; 
}
  if (!(mu__boolexpr107)) mu__boolexpr106 = FALSE ;
  else {
  mu__boolexpr106 = ((mu_labirinto[(mu_w) + (1)][mu_z]) != (mu_Parete)) ; 
}
    return mu__boolexpr106;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 3;
    while (what_rule < 4 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr123;
bool mu__boolexpr124;
bool mu__boolexpr125;
bool mu__boolexpr126;
bool mu__boolexpr127;
  if (!(!(mu_topoUscito))) mu__boolexpr127 = FALSE ;
  else {
  mu__boolexpr127 = (!(mu_cattura)) ; 
}
  if (!(mu__boolexpr127)) mu__boolexpr126 = FALSE ;
  else {
bool mu__boolexpr128;
  if (((mu_x) - (mu_w)) > (0)) mu__boolexpr128 = TRUE ;
  else {
bool mu__boolexpr129;
bool mu__boolexpr130;
bool mu__boolexpr131;
bool mu__boolexpr132;
  if (!(((mu_y) - (mu_z)) > (0))) mu__boolexpr132 = FALSE ;
  else {
bool mu__boolexpr133;
  if ((mu_labirinto[mu_w][(mu_z) + (1)]) == (mu_Ostacolo)) mu__boolexpr133 = TRUE ;
  else {
  mu__boolexpr133 = ((mu_labirinto[mu_w][(mu_z) + (1)]) == (mu_Parete)) ; 
}
  mu__boolexpr132 = (mu__boolexpr133) ; 
}
  if (mu__boolexpr132) mu__boolexpr131 = TRUE ;
  else {
  mu__boolexpr131 = (((mu_y) - (mu_z)) <= (0)) ; 
}
  if (!(mu__boolexpr131)) mu__boolexpr130 = FALSE ;
  else {
bool mu__boolexpr134;
bool mu__boolexpr135;
  if (!(((mu_y) - (mu_z)) < (0))) mu__boolexpr135 = FALSE ;
  else {
bool mu__boolexpr136;
  if ((mu_labirinto[mu_w][(mu_z) - (1)]) == (mu_Ostacolo)) mu__boolexpr136 = TRUE ;
  else {
  mu__boolexpr136 = ((mu_labirinto[mu_w][(mu_z) - (1)]) == (mu_Parete)) ; 
}
  mu__boolexpr135 = (mu__boolexpr136) ; 
}
  if (mu__boolexpr135) mu__boolexpr134 = TRUE ;
  else {
  mu__boolexpr134 = (((mu_y) - (mu_z)) >= (0)) ; 
}
  mu__boolexpr130 = (mu__boolexpr134) ; 
}
  if (!(mu__boolexpr130)) mu__boolexpr129 = FALSE ;
  else {
bool mu__boolexpr137;
bool mu__boolexpr138;
  if (!(((mu_x) - (mu_w)) < (0))) mu__boolexpr138 = FALSE ;
  else {
bool mu__boolexpr139;
  if ((mu_labirinto[(mu_w) - (1)][mu_z]) == (mu_Ostacolo)) mu__boolexpr139 = TRUE ;
  else {
  mu__boolexpr139 = ((mu_labirinto[(mu_w) - (1)][mu_z]) == (mu_Parete)) ; 
}
  mu__boolexpr138 = (mu__boolexpr139) ; 
}
  if (mu__boolexpr138) mu__boolexpr137 = TRUE ;
  else {
  mu__boolexpr137 = (((mu_x) - (mu_w)) >= (0)) ; 
}
  mu__boolexpr129 = (mu__boolexpr137) ; 
}
  mu__boolexpr128 = (mu__boolexpr129) ; 
}
  mu__boolexpr126 = (mu__boolexpr128) ; 
}
  if (!(mu__boolexpr126)) mu__boolexpr125 = FALSE ;
  else {
  mu__boolexpr125 = ((mu_stop) == (2)) ; 
}
  if (!(mu__boolexpr125)) mu__boolexpr124 = FALSE ;
  else {
  mu__boolexpr124 = ((mu_labirinto[(mu_w) + (1)][mu_z]) != (mu_Ostacolo)) ; 
}
  if (!(mu__boolexpr124)) mu__boolexpr123 = FALSE ;
  else {
  mu__boolexpr123 = ((mu_labirinto[(mu_w) + (1)][mu_z]) != (mu_Parete)) ; 
}
	      if (mu__boolexpr123) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 3;
    }
  }

  void Code(unsigned r)
  {
mu_labirinto[mu_w][mu_z] = mu_Vuoto;
mu_w = (mu_w) + (1);
mu_Cattura ( mu_x, mu_y, mu_w, mu_z );
mu_Esci ( mu_x, mu_y );
mu_stop = (mu_stop) - (2);
mu_labirinto[mu_w][mu_z] = mu_Gatto;
  };

};
/******************** RuleBase4 ********************/
class RuleBase4
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("Topo avanza a sinistra");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr140;
bool mu__boolexpr141;
bool mu__boolexpr142;
bool mu__boolexpr143;
  if (!(!(mu_topoUscito))) mu__boolexpr143 = FALSE ;
  else {
  mu__boolexpr143 = (!(mu_cattura)) ; 
}
  if (!(mu__boolexpr143)) mu__boolexpr142 = FALSE ;
  else {
  mu__boolexpr142 = ((mu_stop) != (2)) ; 
}
  if (!(mu__boolexpr142)) mu__boolexpr141 = FALSE ;
  else {
  mu__boolexpr141 = ((mu_labirinto[mu_x][(mu_y) - (1)]) != (mu_Ostacolo)) ; 
}
  if (!(mu__boolexpr141)) mu__boolexpr140 = FALSE ;
  else {
  mu__boolexpr140 = ((mu_labirinto[mu_x][(mu_y) - (1)]) != (mu_Parete)) ; 
}
    return mu__boolexpr140;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4;
    while (what_rule < 5 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr144;
bool mu__boolexpr145;
bool mu__boolexpr146;
bool mu__boolexpr147;
  if (!(!(mu_topoUscito))) mu__boolexpr147 = FALSE ;
  else {
  mu__boolexpr147 = (!(mu_cattura)) ; 
}
  if (!(mu__boolexpr147)) mu__boolexpr146 = FALSE ;
  else {
  mu__boolexpr146 = ((mu_stop) != (2)) ; 
}
  if (!(mu__boolexpr146)) mu__boolexpr145 = FALSE ;
  else {
  mu__boolexpr145 = ((mu_labirinto[mu_x][(mu_y) - (1)]) != (mu_Ostacolo)) ; 
}
  if (!(mu__boolexpr145)) mu__boolexpr144 = FALSE ;
  else {
  mu__boolexpr144 = ((mu_labirinto[mu_x][(mu_y) - (1)]) != (mu_Parete)) ; 
}
	      if (mu__boolexpr144) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 4;
    }
  }

  void Code(unsigned r)
  {
mu_labirinto[mu_x][mu_y] = mu_Vuoto;
mu_y = (mu_y) - (1);
mu_Cattura ( mu_x, mu_y, mu_w, mu_z );
mu_Esci ( mu_x, mu_y );
mu_stop = (mu_stop) + (1);
mu_labirinto[mu_x][mu_y] = mu_Topo;
  };

};
/******************** RuleBase5 ********************/
class RuleBase5
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("Topo avanza a destra");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr148;
bool mu__boolexpr149;
bool mu__boolexpr150;
bool mu__boolexpr151;
  if (!(!(mu_topoUscito))) mu__boolexpr151 = FALSE ;
  else {
  mu__boolexpr151 = (!(mu_cattura)) ; 
}
  if (!(mu__boolexpr151)) mu__boolexpr150 = FALSE ;
  else {
  mu__boolexpr150 = ((mu_stop) != (2)) ; 
}
  if (!(mu__boolexpr150)) mu__boolexpr149 = FALSE ;
  else {
  mu__boolexpr149 = ((mu_labirinto[mu_x][(mu_y) + (1)]) != (mu_Ostacolo)) ; 
}
  if (!(mu__boolexpr149)) mu__boolexpr148 = FALSE ;
  else {
  mu__boolexpr148 = ((mu_labirinto[mu_x][(mu_y) + (1)]) != (mu_Parete)) ; 
}
    return mu__boolexpr148;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 5;
    while (what_rule < 6 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr152;
bool mu__boolexpr153;
bool mu__boolexpr154;
bool mu__boolexpr155;
  if (!(!(mu_topoUscito))) mu__boolexpr155 = FALSE ;
  else {
  mu__boolexpr155 = (!(mu_cattura)) ; 
}
  if (!(mu__boolexpr155)) mu__boolexpr154 = FALSE ;
  else {
  mu__boolexpr154 = ((mu_stop) != (2)) ; 
}
  if (!(mu__boolexpr154)) mu__boolexpr153 = FALSE ;
  else {
  mu__boolexpr153 = ((mu_labirinto[mu_x][(mu_y) + (1)]) != (mu_Ostacolo)) ; 
}
  if (!(mu__boolexpr153)) mu__boolexpr152 = FALSE ;
  else {
  mu__boolexpr152 = ((mu_labirinto[mu_x][(mu_y) + (1)]) != (mu_Parete)) ; 
}
	      if (mu__boolexpr152) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 5;
    }
  }

  void Code(unsigned r)
  {
mu_labirinto[mu_x][mu_y] = mu_Vuoto;
mu_y = (mu_y) + (1);
mu_Cattura ( mu_x, mu_y, mu_w, mu_z );
mu_Esci ( mu_x, mu_y );
mu_stop = (mu_stop) + (1);
mu_labirinto[mu_x][mu_y] = mu_Topo;
  };

};
/******************** RuleBase6 ********************/
class RuleBase6
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("Topo avanza verso l'alto");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr156;
bool mu__boolexpr157;
bool mu__boolexpr158;
bool mu__boolexpr159;
  if (!(!(mu_topoUscito))) mu__boolexpr159 = FALSE ;
  else {
  mu__boolexpr159 = (!(mu_cattura)) ; 
}
  if (!(mu__boolexpr159)) mu__boolexpr158 = FALSE ;
  else {
  mu__boolexpr158 = ((mu_stop) != (2)) ; 
}
  if (!(mu__boolexpr158)) mu__boolexpr157 = FALSE ;
  else {
  mu__boolexpr157 = ((mu_labirinto[(mu_x) - (1)][mu_y]) != (mu_Ostacolo)) ; 
}
  if (!(mu__boolexpr157)) mu__boolexpr156 = FALSE ;
  else {
  mu__boolexpr156 = ((mu_labirinto[(mu_x) - (1)][mu_y]) != (mu_Parete)) ; 
}
    return mu__boolexpr156;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 6;
    while (what_rule < 7 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr160;
bool mu__boolexpr161;
bool mu__boolexpr162;
bool mu__boolexpr163;
  if (!(!(mu_topoUscito))) mu__boolexpr163 = FALSE ;
  else {
  mu__boolexpr163 = (!(mu_cattura)) ; 
}
  if (!(mu__boolexpr163)) mu__boolexpr162 = FALSE ;
  else {
  mu__boolexpr162 = ((mu_stop) != (2)) ; 
}
  if (!(mu__boolexpr162)) mu__boolexpr161 = FALSE ;
  else {
  mu__boolexpr161 = ((mu_labirinto[(mu_x) - (1)][mu_y]) != (mu_Ostacolo)) ; 
}
  if (!(mu__boolexpr161)) mu__boolexpr160 = FALSE ;
  else {
  mu__boolexpr160 = ((mu_labirinto[(mu_x) - (1)][mu_y]) != (mu_Parete)) ; 
}
	      if (mu__boolexpr160) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 6;
    }
  }

  void Code(unsigned r)
  {
mu_labirinto[mu_x][mu_y] = mu_Vuoto;
mu_x = (mu_x) - (1);
mu_Cattura ( mu_x, mu_y, mu_w, mu_z );
mu_Esci ( mu_x, mu_y );
mu_stop = (mu_stop) + (1);
mu_labirinto[mu_x][mu_y] = mu_Topo;
  };

};
/******************** RuleBase7 ********************/
class RuleBase7
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("Topo avanza verso il basso");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr164;
bool mu__boolexpr165;
bool mu__boolexpr166;
bool mu__boolexpr167;
  if (!(!(mu_topoUscito))) mu__boolexpr167 = FALSE ;
  else {
  mu__boolexpr167 = (!(mu_cattura)) ; 
}
  if (!(mu__boolexpr167)) mu__boolexpr166 = FALSE ;
  else {
  mu__boolexpr166 = ((mu_stop) != (2)) ; 
}
  if (!(mu__boolexpr166)) mu__boolexpr165 = FALSE ;
  else {
  mu__boolexpr165 = ((mu_labirinto[(mu_x) + (1)][mu_y]) != (mu_Ostacolo)) ; 
}
  if (!(mu__boolexpr165)) mu__boolexpr164 = FALSE ;
  else {
  mu__boolexpr164 = ((mu_labirinto[(mu_x) + (1)][mu_y]) != (mu_Parete)) ; 
}
    return mu__boolexpr164;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 7;
    while (what_rule < 8 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr168;
bool mu__boolexpr169;
bool mu__boolexpr170;
bool mu__boolexpr171;
  if (!(!(mu_topoUscito))) mu__boolexpr171 = FALSE ;
  else {
  mu__boolexpr171 = (!(mu_cattura)) ; 
}
  if (!(mu__boolexpr171)) mu__boolexpr170 = FALSE ;
  else {
  mu__boolexpr170 = ((mu_stop) != (2)) ; 
}
  if (!(mu__boolexpr170)) mu__boolexpr169 = FALSE ;
  else {
  mu__boolexpr169 = ((mu_labirinto[(mu_x) + (1)][mu_y]) != (mu_Ostacolo)) ; 
}
  if (!(mu__boolexpr169)) mu__boolexpr168 = FALSE ;
  else {
  mu__boolexpr168 = ((mu_labirinto[(mu_x) + (1)][mu_y]) != (mu_Parete)) ; 
}
	      if (mu__boolexpr168) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 7;
    }
  }

  void Code(unsigned r)
  {
mu_labirinto[mu_x][mu_y] = mu_Vuoto;
mu_x = (mu_x) + (1);
mu_Cattura ( mu_x, mu_y, mu_w, mu_z );
mu_Esci ( mu_x, mu_y );
mu_labirinto[mu_x][mu_y] = mu_Topo;
mu_stop = (mu_stop) + (1);
  };

};
class NextStateGenerator
{
  RuleBase0 R0;
  RuleBase1 R1;
  RuleBase2 R2;
  RuleBase3 R3;
  RuleBase4 R4;
  RuleBase5 R5;
  RuleBase6 R6;
  RuleBase7 R7;
public:
void SetNextEnabledRule(unsigned & what_rule)
{
  category = CONDITION;
  if (what_rule<1)
    { R0.NextRule(what_rule);
      if (what_rule<1) return; }
  if (what_rule>=1 && what_rule<2)
    { R1.NextRule(what_rule);
      if (what_rule<2) return; }
  if (what_rule>=2 && what_rule<3)
    { R2.NextRule(what_rule);
      if (what_rule<3) return; }
  if (what_rule>=3 && what_rule<4)
    { R3.NextRule(what_rule);
      if (what_rule<4) return; }
  if (what_rule>=4 && what_rule<5)
    { R4.NextRule(what_rule);
      if (what_rule<5) return; }
  if (what_rule>=5 && what_rule<6)
    { R5.NextRule(what_rule);
      if (what_rule<6) return; }
  if (what_rule>=6 && what_rule<7)
    { R6.NextRule(what_rule);
      if (what_rule<7) return; }
  if (what_rule>=7 && what_rule<8)
    { R7.NextRule(what_rule);
      if (what_rule<8) return; }
}
bool Condition(unsigned r)
{
  category = CONDITION;
  if (r<=0) return R0.Condition(r-0);
  if (r>=1 && r<=1) return R1.Condition(r-1);
  if (r>=2 && r<=2) return R2.Condition(r-2);
  if (r>=3 && r<=3) return R3.Condition(r-3);
  if (r>=4 && r<=4) return R4.Condition(r-4);
  if (r>=5 && r<=5) return R5.Condition(r-5);
  if (r>=6 && r<=6) return R6.Condition(r-6);
  if (r>=7 && r<=7) return R7.Condition(r-7);
Error.Notrace("Internal: NextStateGenerator -- checking condition for nonexisting rule.");
return 0;}
void Code(unsigned r)
{
  if (r<=0) { R0.Code(r-0); return; } 
  if (r>=1 && r<=1) { R1.Code(r-1); return; } 
  if (r>=2 && r<=2) { R2.Code(r-2); return; } 
  if (r>=3 && r<=3) { R3.Code(r-3); return; } 
  if (r>=4 && r<=4) { R4.Code(r-4); return; } 
  if (r>=5 && r<=5) { R5.Code(r-5); return; } 
  if (r>=6 && r<=6) { R6.Code(r-6); return; } 
  if (r>=7 && r<=7) { R7.Code(r-7); return; } 
}
int Priority(unsigned short r)
{
  if (r<=0) { return R0.Priority(); } 
  if (r>=1 && r<=1) { return R1.Priority(); } 
  if (r>=2 && r<=2) { return R2.Priority(); } 
  if (r>=3 && r<=3) { return R3.Priority(); } 
  if (r>=4 && r<=4) { return R4.Priority(); } 
  if (r>=5 && r<=5) { return R5.Priority(); } 
  if (r>=6 && r<=6) { return R6.Priority(); } 
  if (r>=7 && r<=7) { return R7.Priority(); } 
return 0;}
char * Name(unsigned r)
{
  if (r<=0) return R0.Name(r-0);
  if (r>=1 && r<=1) return R1.Name(r-1);
  if (r>=2 && r<=2) return R2.Name(r-2);
  if (r>=3 && r<=3) return R3.Name(r-3);
  if (r>=4 && r<=4) return R4.Name(r-4);
  if (r>=5 && r<=5) return R5.Name(r-5);
  if (r>=6 && r<=6) return R6.Name(r-6);
  if (r>=7 && r<=7) return R7.Name(r-7);
  return NULL;
}
};
const unsigned numrules = 8;

/********************
  parameter
 ********************/
#define RULES_IN_WORLD 8


/********************
  Startstate records
 ********************/
/******************** StartStateBase0 ********************/
class StartStateBase0
{
public:
  char * Name(unsigned short r)
  {
    return tsprintf("Startstate 0");
  }
  void Code(unsigned short r)
  {
mu_cattura = mu_false;
mu_topoUscito = mu_false;
mu_stop = 0;
mu_x = mu_INITIAL_X;
mu_y = mu_INITIAL_Y;
mu_w = mu_INITIAL_W;
mu_z = mu_INITIAL_Z;
mu_Labirinto (  );
mu_Ostacoli (  );
  };

};
class StartStateGenerator
{
  StartStateBase0 S0;
public:
void Code(unsigned short r)
{
  if (r<=0) { S0.Code(r-0); return; }
}
char * Name(unsigned short r)
{
  if (r<=0) return S0.Name(r-0);
  return NULL;
}
};
const rulerec startstates[] = {
{ NULL, NULL, NULL, FALSE},
};
unsigned short StartStateManager::numstartstates = 1;

/********************
  Invariant records
 ********************/
int mu__invariant_172() // Invariant "Uscita: il topo è scappato"
{
return (mu_topoUscito) == (mu_false);
};

bool mu__condition_173() // Condition for Rule "Uscita: il topo è scappato"
{
  return mu__invariant_172( );
}

/**** end rule declaration ****/

int mu__invariant_174() // Invariant "Cattura: il topo è stato catturato"
{
return (mu_cattura) == (mu_false);
};

bool mu__condition_175() // Condition for Rule "Cattura: il topo è stato catturato"
{
  return mu__invariant_174( );
}

/**** end rule declaration ****/

int mu__invariant_176() // Invariant "z coord in range"
{
bool mu__boolexpr177;
  if (!((mu_z) >= (1))) mu__boolexpr177 = FALSE ;
  else {
  mu__boolexpr177 = ((mu_z) <= (8)) ; 
}
return mu__boolexpr177;
};

bool mu__condition_178() // Condition for Rule "z coord in range"
{
  return mu__invariant_176( );
}

/**** end rule declaration ****/

int mu__invariant_179() // Invariant "w coord in range"
{
bool mu__boolexpr180;
  if (!((mu_w) >= (1))) mu__boolexpr180 = FALSE ;
  else {
  mu__boolexpr180 = ((mu_w) <= (8)) ; 
}
return mu__boolexpr180;
};

bool mu__condition_181() // Condition for Rule "w coord in range"
{
  return mu__invariant_179( );
}

/**** end rule declaration ****/

int mu__invariant_182() // Invariant "y coord in range"
{
bool mu__boolexpr183;
  if (!((mu_y) >= (1))) mu__boolexpr183 = FALSE ;
  else {
bool mu__boolexpr184;
  if ((mu_y) < (9)) mu__boolexpr184 = TRUE ;
  else {
  mu__boolexpr184 = ((mu_y) == (mu_USCITA_Y)) ; 
}
  mu__boolexpr183 = (mu__boolexpr184) ; 
}
return mu__boolexpr183;
};

bool mu__condition_185() // Condition for Rule "y coord in range"
{
  return mu__invariant_182( );
}

/**** end rule declaration ****/

int mu__invariant_186() // Invariant "x coord in range"
{
bool mu__boolexpr187;
  if (!((mu_x) >= (1))) mu__boolexpr187 = FALSE ;
  else {
bool mu__boolexpr188;
  if ((mu_x) < (9)) mu__boolexpr188 = TRUE ;
  else {
  mu__boolexpr188 = ((mu_x) == (mu_USCITA_X)) ; 
}
  mu__boolexpr187 = (mu__boolexpr188) ; 
}
return mu__boolexpr187;
};

bool mu__condition_189() // Condition for Rule "x coord in range"
{
  return mu__invariant_186( );
}

/**** end rule declaration ****/

const rulerec invariants[] = {
{"x coord in range", &mu__condition_189, NULL, },
{"y coord in range", &mu__condition_185, NULL, },
{"w coord in range", &mu__condition_181, NULL, },
{"z coord in range", &mu__condition_178, NULL, },
{"Cattura: il topo è stato catturato", &mu__condition_175, NULL, },
{"Uscita: il topo è scappato", &mu__condition_173, NULL, },
};
const unsigned short numinvariants = 6;

/********************
  Normal/Canonicalization for scalarset
 ********************/
/*
topoUscito:NoScalarset
cattura:NoScalarset
w:NoScalarset
x:NoScalarset
y:NoScalarset
z:NoScalarset
labirinto:NoScalarset
stop:NoScalarset
*/

/********************
Code for symmetry
 ********************/

/********************
 Permutation Set Class
 ********************/
class PermSet
{
public:
  // book keeping
  enum PresentationType {Simple, Explicit};
  PresentationType Presentation;

  void ResetToSimple();
  void ResetToExplicit();
  void SimpleToExplicit();
  void SimpleToOne();
  bool NextPermutation();

  void Print_in_size()
  { int ret=0; for (int i=0; i<count; i++) if (in[i]) ret++; cout << "in_size:" << ret << "\n"; }


  /********************
   Simple and efficient representation
   ********************/
  bool AlreadyOnlyOneRemain;
  bool MoreThanOneRemain();


  /********************
   Explicit representation
  ********************/
  unsigned long size;
  unsigned long count;
  // in will be of product of factorial sizes for fast canonicalize
  // in will be of size 1 for reduced local memory canonicalize
  bool * in;

  // auxiliary for explicit representation

  // in/perm/revperm will be of factorial size for fast canonicalize
  // they will be of size 1 for reduced local memory canonicalize
  // second range will be size of the scalarset
  // procedure for explicit representation
  // General procedure
  PermSet();
  bool In(int i) const { return in[i]; };
  void Add(int i) { for (int j=0; j<i; j++) in[j] = FALSE;};
  void Remove(int i) { in[i] = FALSE; };
};
bool PermSet::MoreThanOneRemain()
{
  int i,j;
  if (AlreadyOnlyOneRemain)
    return FALSE;
  else {
  }
  AlreadyOnlyOneRemain = TRUE;
  return FALSE;
}
PermSet::PermSet()
: Presentation(Simple)
{
  int i,j,k;
  if (  args->sym_alg.mode == argsym_alg::Exhaustive_Fast_Canonicalize) {

  /********************
   declaration of class variables
  ********************/
  in = new bool[1];

    // Set perm and revperm

    // setting up combination of permutations
    // for different scalarset
    int carry;
    size = 1;
    count = 1;
    for (i=0; i<1; i++)
      {
        carry = 1;
        in[i]= TRUE;
    }
  }
  else
  {

  /********************
   declaration of class variables
  ********************/
  in = new bool[1];
  in[0] = TRUE;
  }
}
void PermSet::ResetToSimple()
{
  int i;

  AlreadyOnlyOneRemain = FALSE;
  Presentation = Simple;
}
void PermSet::ResetToExplicit()
{
  for (int i=0; i<1; i++) in[i] = TRUE;
  Presentation = Explicit;
}
void PermSet::SimpleToExplicit()
{
  int i,j,k;
  int start, class_size;

  // Setup range for mapping

  // To be In or not to be

  // setup explicit representation 
  // Set perm and revperm
  for (i=0; i<1; i++)
    {
      in[i] = TRUE;
    }
  Presentation = Explicit;
  if (args->test_parameter1.value==0) Print_in_size();
}
void PermSet::SimpleToOne()
{
  int i,j,k;
  int class_size;
  int start;


  // Setup range for mapping
  Presentation = Explicit;
}
bool PermSet::NextPermutation()
{
  bool nexted = FALSE;
  int start, end; 
  int class_size;
  int temp;
  int j,k;

  // algorithm
  // for each class
  //   if forall in the same class reverse_sorted, 
  //     { sort again; goto next class }
  //   else
  //     {
  //       nexted = TRUE;
  //       for (j from l to r)
  // 	       if (for all j+ are reversed sorted)
  // 	         {
  // 	           swap j, j+1
  // 	           sort all j+ again
  // 	           break;
  // 	         }
  //     }
if (!nexted) return FALSE;
  return TRUE;
}

/********************
 Symmetry Class
 ********************/
class SymmetryClass
{
  PermSet Perm;
  bool BestInitialized;
  state BestPermutedState;

  // utilities
  void SetBestResult(int i, state* temp);
  void ResetBestResult() {BestInitialized = FALSE;};

public:
  // initializer
  SymmetryClass() : Perm(), BestInitialized(FALSE) {};
  ~SymmetryClass() {};

  void Normalize(state* s);

  void Exhaustive_Fast_Canonicalize(state *s);
  void Heuristic_Fast_Canonicalize(state *s);
  void Heuristic_Small_Mem_Canonicalize(state *s);
  void Heuristic_Fast_Normalize(state *s);

  void MultisetSort(state* s);
};


/********************
 Symmetry Class Members
 ********************/
void SymmetryClass::MultisetSort(state* s)
{
        mu_topoUscito.MultisetSort();
        mu_cattura.MultisetSort();
        mu_w.MultisetSort();
        mu_x.MultisetSort();
        mu_y.MultisetSort();
        mu_z.MultisetSort();
        mu_labirinto.MultisetSort();
        mu_stop.MultisetSort();
}
void SymmetryClass::Normalize(state* s)
{
  switch (args->sym_alg.mode) {
  case argsym_alg::Exhaustive_Fast_Canonicalize:
    Exhaustive_Fast_Canonicalize(s);
    break;
  case argsym_alg::Heuristic_Fast_Canonicalize:
    Heuristic_Fast_Canonicalize(s);
    break;
  case argsym_alg::Heuristic_Small_Mem_Canonicalize:
    Heuristic_Small_Mem_Canonicalize(s);
    break;
  case argsym_alg::Heuristic_Fast_Normalize:
    Heuristic_Fast_Normalize(s);
    break;
  default:
    Heuristic_Fast_Canonicalize(s);
  }
}

/********************
 Permute and Canonicalize function for different types
 ********************/
void mu_1_w_t::Permute(PermSet& Perm, int i) {};
void mu_1_w_t::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_w_t::Canonicalize(PermSet& Perm) {};
void mu_1_w_t::SimpleLimit(PermSet& Perm) {};
void mu_1_w_t::ArrayLimit(PermSet& Perm) {};
void mu_1_w_t::Limit(PermSet& Perm) {};
void mu_1_w_t::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_h_t::Permute(PermSet& Perm, int i) {};
void mu_1_h_t::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_h_t::Canonicalize(PermSet& Perm) {};
void mu_1_h_t::SimpleLimit(PermSet& Perm) {};
void mu_1_h_t::ArrayLimit(PermSet& Perm) {};
void mu_1_h_t::Limit(PermSet& Perm) {};
void mu_1_h_t::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_indw_t::Permute(PermSet& Perm, int i) {};
void mu_1_indw_t::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_indw_t::Canonicalize(PermSet& Perm) {};
void mu_1_indw_t::SimpleLimit(PermSet& Perm) {};
void mu_1_indw_t::ArrayLimit(PermSet& Perm) {};
void mu_1_indw_t::Limit(PermSet& Perm) {};
void mu_1_indw_t::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_indh_t::Permute(PermSet& Perm, int i) {};
void mu_1_indh_t::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_indh_t::Canonicalize(PermSet& Perm) {};
void mu_1_indh_t::SimpleLimit(PermSet& Perm) {};
void mu_1_indh_t::ArrayLimit(PermSet& Perm) {};
void mu_1_indh_t::Limit(PermSet& Perm) {};
void mu_1_indh_t::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_Entity::Permute(PermSet& Perm, int i) {};
void mu_1_Entity::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_Entity::Canonicalize(PermSet& Perm) {};
void mu_1_Entity::SimpleLimit(PermSet& Perm) {};
void mu_1_Entity::ArrayLimit(PermSet& Perm) {};
void mu_1_Entity::Limit(PermSet& Perm) {};
void mu_1_Entity::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_a_t::Permute(PermSet& Perm, int i)
{
  static mu_1_a_t temp("Permute_mu_1_a_t",-1);
  int j;
  for (j=0; j<10; j++)
    array[j].Permute(Perm, i);
};
void mu_1_a_t::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1_a_t::Canonicalize(PermSet& Perm){};
void mu_1_a_t::SimpleLimit(PermSet& Perm){}
void mu_1_a_t::ArrayLimit(PermSet& Perm) {}
void mu_1_a_t::Limit(PermSet& Perm){}
void mu_1_a_t::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1_aa_t::Permute(PermSet& Perm, int i)
{
  static mu_1_aa_t temp("Permute_mu_1_aa_t",-1);
  int j;
  for (j=0; j<10; j++)
    array[j].Permute(Perm, i);
};
void mu_1_aa_t::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1_aa_t::Canonicalize(PermSet& Perm){};
void mu_1_aa_t::SimpleLimit(PermSet& Perm){}
void mu_1_aa_t::ArrayLimit(PermSet& Perm) {}
void mu_1_aa_t::Limit(PermSet& Perm){}
void mu_1_aa_t::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1_var_t::Permute(PermSet& Perm, int i) {};
void mu_1_var_t::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_var_t::Canonicalize(PermSet& Perm) {};
void mu_1_var_t::SimpleLimit(PermSet& Perm) {};
void mu_1_var_t::ArrayLimit(PermSet& Perm) {};
void mu_1_var_t::Limit(PermSet& Perm) {};
void mu_1_var_t::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };

/********************
 Auxiliary function for error trace printing
 ********************/
bool match(state* ns, StatePtr p)
{
  int i;
  static PermSet Perm;
  static state temp;
  StateCopy(&temp, ns);
  if (args->symmetry_reduction.value)
    {
      if (  args->sym_alg.mode == argsym_alg::Exhaustive_Fast_Canonicalize) {
        Perm.ResetToExplicit();
        for (i=0; i<Perm.count; i++)
          if (Perm.In(i))
            {
              if (ns != workingstate)
                  StateCopy(workingstate, ns);
              
              mu_topoUscito.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_topoUscito.MultisetSort();
              mu_cattura.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_cattura.MultisetSort();
              mu_w.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_w.MultisetSort();
              mu_x.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_x.MultisetSort();
              mu_y.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_y.MultisetSort();
              mu_z.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_z.MultisetSort();
              mu_labirinto.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_labirinto.MultisetSort();
              mu_stop.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_stop.MultisetSort();
            if (p.compare(workingstate)) {
              StateCopy(workingstate,&temp); return TRUE; }
          }
        StateCopy(workingstate,&temp);
        return FALSE;
      }
      else {
        Perm.ResetToSimple();
        Perm.SimpleToOne();
        if (ns != workingstate)
          StateCopy(workingstate, ns);

          mu_topoUscito.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_topoUscito.MultisetSort();
          mu_cattura.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_cattura.MultisetSort();
          mu_w.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_w.MultisetSort();
          mu_x.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_x.MultisetSort();
          mu_y.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_y.MultisetSort();
          mu_z.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_z.MultisetSort();
          mu_labirinto.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_labirinto.MultisetSort();
          mu_stop.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_stop.MultisetSort();
        if (p.compare(workingstate)) {
          StateCopy(workingstate,&temp); return TRUE; }

        while (Perm.NextPermutation())
          {
            if (ns != workingstate)
              StateCopy(workingstate, ns);
              
              mu_topoUscito.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_topoUscito.MultisetSort();
              mu_cattura.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_cattura.MultisetSort();
              mu_w.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_w.MultisetSort();
              mu_x.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_x.MultisetSort();
              mu_y.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_y.MultisetSort();
              mu_z.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_z.MultisetSort();
              mu_labirinto.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_labirinto.MultisetSort();
              mu_stop.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_stop.MultisetSort();
            if (p.compare(workingstate)) {
              StateCopy(workingstate,&temp); return TRUE; }
          }
        StateCopy(workingstate,&temp);
        return FALSE;
      }
    }
  if (!args->symmetry_reduction.value
      && args->multiset_reduction.value)
    {
      if (ns != workingstate)
          StateCopy(workingstate, ns);
      mu_topoUscito.MultisetSort();
      mu_cattura.MultisetSort();
      mu_w.MultisetSort();
      mu_x.MultisetSort();
      mu_y.MultisetSort();
      mu_z.MultisetSort();
      mu_labirinto.MultisetSort();
      mu_stop.MultisetSort();
      if (p.compare(workingstate)) {
        StateCopy(workingstate,&temp); return TRUE; }
      StateCopy(workingstate,&temp);
      return FALSE;
    }
  return (p.compare(ns));
}

/********************
 Canonicalization by fast exhaustive generation of
 all permutations
 ********************/
void SymmetryClass::Exhaustive_Fast_Canonicalize(state* s)
{
  int i;
  static state temp;
  Perm.ResetToExplicit();

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_topoUscito.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_topoUscito.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_cattura.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_cattura.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_w.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_w.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_x.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_x.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_y.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_y.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_z.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_z.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_labirinto.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_labirinto.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_stop.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_stop.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

};

/********************
 Canonicalization by fast simple variable canonicalization,
 fast simple scalarset array canonicalization,
 fast restriction on permutation set with simple scalarset array of scalarset,
 and fast exhaustive generation of
 all permutations for other variables
 ********************/
void SymmetryClass::Heuristic_Fast_Canonicalize(state* s)
{
  int i;
  static state temp;

  Perm.ResetToSimple();

};

/********************
 Canonicalization by fast simple variable canonicalization,
 fast simple scalarset array canonicalization,
 fast restriction on permutation set with simple scalarset array of scalarset,
 and fast exhaustive generation of
 all permutations for other variables
 and use less local memory
 ********************/
void SymmetryClass::Heuristic_Small_Mem_Canonicalize(state* s)
{
  unsigned long cycle;
  static state temp;

  Perm.ResetToSimple();

};

/********************
 Normalization by fast simple variable canonicalization,
 fast simple scalarset array canonicalization,
 fast restriction on permutation set with simple scalarset array of scalarset,
 and for all other variables, pick any remaining permutation
 ********************/
void SymmetryClass::Heuristic_Fast_Normalize(state* s)
{
  int i;
  static state temp;

  Perm.ResetToSimple();

};

/********************
  Include
 ********************/
#include "mu_epilog.hpp"
