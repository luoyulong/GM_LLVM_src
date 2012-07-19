#include "inc/gm_ast.h"


Value *ast_expr::Codegen (ast_expr *E)
{
  {
    switch(E->expr_class):
      case GMEXPR_IVAL:  ;break;  // integer literal
    case  GMEXPR_FVAL:    ;// floating literal
    case  GMEXPR_BVAL:    // boolean literal
    case  GMEXPR_INF:   // infinite literal
    case  GMEXPR_NIL:      // NIL literal
    case  GMEXPR_ID:      // identifier
    case  GMEXPR_FIELD:   // field access
    case  GMEXPR_UOP:     // unary op (neg)
    case  GMEXPR_LUOP:     // logical not
    case  GMEXPR_BIOP:     // numeric binary op
    case  GMEXPR_LBIOP:    // logical binary op
    case  GMEXPR_COMP:     // comparision ops (==, !=, <, >, <=, >=)
    case  GMEXPR_REDUCE:   // reduction ops (Sum, Product, Min, Max)
    case  GMEXPR_BUILTIN:  // builtin ops (NumNodes, NumNbrs, ...)
    case  GMEXPR_TER:      // ternary operation
    case  GMEXPR_FOREIGN:  // foreign expression
  };
}
