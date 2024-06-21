/* ExprAst.hpp.  Generated automatically by treecc */
#ifndef __yy_ExprAst_hpp
#define __yy_ExprAst_hpp
#line 3 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprAst.tc"

    #include <string>
    #include <unordered_map> 
    #include <iostream>
    #include <typeinfo>
    #include "SemError.hpp"

    using stdstring = std::string;
    using SymbolVector = std::unordered_map<stdstring, stdstring>;
#line 15 "ExprAst.hpp"

#include <new>

const int Node_kind = 1;
const int Expr_kind = 2;
const int Program_kind = 3;
const int FuncDefStmt_kind = 4;
const int Stmt_kind = 17;
const int BinaryExpr_kind = 5;
const int NumExpr_kind = 6;
const int IdExpr_kind = 7;
const int StrExpr_kind = 8;
const int DefList_kind = 21;
const int DefVar_kind = 22;
const int AddExpr_kind = 9;
const int SubExpr_kind = 10;
const int LTExpr_kind = 11;
const int GTExpr_kind = 12;
const int LETExpr_kind = 13;
const int GETExpr_kind = 14;
const int EqExpr_kind = 15;
const int NeExpr_kind = 16;
const int BlockStmt_kind = 18;
const int DefBlockStmt_kind = 19;
const int DefStmt_kind = 20;
const int ParamList_kind = 23;
const int ParamStmt_kind = 24;
const int PrintIntStmt_kind = 25;
const int PrintChStmt_kind = 26;
const int PrintStrStmt_kind = 27;
const int IfStmt_kind = 28;
const int ElseIfStmt_kind = 29;
const int AssignStmt_kind = 30;
const int WhileStmt_kind = 31;
const int DWhileStmt_kind = 32;
const int ForStmt_kind = 33;

class Node;
class Expr;
class Program;
class FuncDefStmt;
class Stmt;
class BinaryExpr;
class NumExpr;
class IdExpr;
class StrExpr;
class DefList;
class DefVar;
class AddExpr;
class SubExpr;
class LTExpr;
class GTExpr;
class LETExpr;
class GETExpr;
class EqExpr;
class NeExpr;
class BlockStmt;
class DefBlockStmt;
class DefStmt;
class ParamList;
class ParamStmt;
class PrintIntStmt;
class PrintChStmt;
class PrintStrStmt;
class IfStmt;
class ElseIfStmt;
class AssignStmt;
class WhileStmt;
class DWhileStmt;
class ForStmt;

class YYNODESTATE
{
public:

	YYNODESTATE();
	virtual ~YYNODESTATE();

#line 1 "cpp_skel.h"
private:

	struct YYNODESTATE_block *blocks__;
	struct YYNODESTATE_push *push_stack__;
	int used__;
#line 100 "ExprAst.hpp"
private:

	static YYNODESTATE *state__;

public:

	static YYNODESTATE *getState()
		{
			if(state__) return state__;
			state__ = new YYNODESTATE();
			return state__;
		}

public:

	void *alloc(size_t);
	void dealloc(void *, size_t);
	int push();
	void pop();
	void clear();
	virtual void failed();
	virtual const char *currFilename() const;
	virtual long currLinenum() const;

};

class Node
{
protected:

	int kind__;
	const char *filename__;
	long linenum__;

public:

	int getKind() const { return kind__; }
	const char *getFilename() const { return filename__; }
	long getLinenum() const { return linenum__; }
	void setFilename(const char *filename) { filename__ = filename; }
	void setLinenum(long linenum) { linenum__ = linenum; }

	void *operator new(size_t);
	void operator delete(void *, size_t);

protected:

	Node();

public:

	stdstring place;
	stdstring code;

	virtual stdstring genProgramCode() = 0;

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~Node();

};

class Expr : public Node
{
protected:

	Expr();

public:

	virtual stdstring genProgramCode() = 0;

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~Expr();

};

class Program : public Node
{
public:

	Program(DefBlockStmt * defStmts, Stmt * stmts);

public:

	DefBlockStmt * defStmts;
	Stmt * stmts;

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~Program();

};

class FuncDefStmt : public Node
{
public:

	FuncDefStmt(IdExpr * funcName, ParamList * params, Stmt * stmts);

public:

	IdExpr * funcName;
	ParamList * params;
	Stmt * stmts;

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~FuncDefStmt();

};

class Stmt : public Node
{
protected:

	Stmt();

public:

	virtual stdstring genProgramCode() = 0;

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~Stmt();

};

class BinaryExpr : public Expr
{
protected:

	BinaryExpr(Expr * expr1, Expr * expr2);

public:

	Expr * expr1;
	Expr * expr2;

	virtual stdstring genProgramCode() = 0;

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~BinaryExpr();

};

class NumExpr : public Expr
{
public:

	NumExpr(int value);

public:

	int value;

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~NumExpr();

};

class IdExpr : public Expr
{
public:

	IdExpr(stdstring id);

public:

	stdstring id;

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~IdExpr();

};

class StrExpr : public Expr
{
public:

	StrExpr(stdstring value);

public:

	stdstring value;

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~StrExpr();

};

class DefList : public Expr
{
public:

	DefList(Expr * varList, Expr * newVar);

public:

	Expr * varList;
	Expr * newVar;

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~DefList();

};

class DefVar : public Expr
{
public:

	DefVar(IdExpr * newVar);

public:

	IdExpr * newVar;

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~DefVar();

};

class AddExpr : public BinaryExpr
{
public:

	AddExpr(Expr * expr1, Expr * expr2);

public:

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~AddExpr();

};

class SubExpr : public BinaryExpr
{
public:

	SubExpr(Expr * expr1, Expr * expr2);

public:

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~SubExpr();

};

class LTExpr : public BinaryExpr
{
public:

	LTExpr(Expr * expr1, Expr * expr2);

public:

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~LTExpr();

};

class GTExpr : public BinaryExpr
{
public:

	GTExpr(Expr * expr1, Expr * expr2);

public:

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~GTExpr();

};

class LETExpr : public BinaryExpr
{
public:

	LETExpr(Expr * expr1, Expr * expr2);

public:

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~LETExpr();

};

class GETExpr : public BinaryExpr
{
public:

	GETExpr(Expr * expr1, Expr * expr2);

public:

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~GETExpr();

};

class EqExpr : public BinaryExpr
{
public:

	EqExpr(Expr * expr1, Expr * expr2);

public:

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~EqExpr();

};

class NeExpr : public BinaryExpr
{
public:

	NeExpr(Expr * expr1, Expr * expr2);

public:

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~NeExpr();

};

class BlockStmt : public Stmt
{
public:

	BlockStmt(Node * stmt1, Node * stmt2);

public:

	Node * stmt1;
	Node * stmt2;

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~BlockStmt();

};

class DefBlockStmt : public Stmt
{
public:

	DefBlockStmt(DefBlockStmt * defList, DefStmt * stmt);

public:

	DefBlockStmt * defList;
	DefStmt * stmt;

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~DefBlockStmt();

};

class DefStmt : public Stmt
{
public:

	DefStmt(DefList * varlist);

public:

	DefList * varlist;

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~DefStmt();

};

class ParamList : public Stmt
{
public:

	ParamList(ParamList * parList, ParamStmt * stmt);

public:

	ParamList * parList;
	ParamStmt * stmt;

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~ParamList();

};

class ParamStmt : public Stmt
{
public:

	ParamStmt(IdExpr * id);

public:

	IdExpr * id;

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~ParamStmt();

};

class PrintIntStmt : public Stmt
{
public:

	PrintIntStmt(Expr * expr);

public:

	Expr * expr;

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~PrintIntStmt();

};

class PrintChStmt : public Stmt
{
public:

	PrintChStmt(Expr * expr);

public:

	Expr * expr;

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~PrintChStmt();

};

class PrintStrStmt : public Stmt
{
public:

	PrintStrStmt(Expr * expr);

public:

	Expr * expr;

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~PrintStrStmt();

};

class IfStmt : public Stmt
{
public:

	IfStmt(Expr * cond, Stmt * stmt1, Stmt * stmt2);

public:

	Expr * cond;
	Stmt * stmt1;
	Stmt * stmt2;

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~IfStmt();

};

class ElseIfStmt : public Stmt
{
public:

	ElseIfStmt(Expr * cond, Stmt * stmt);

public:

	Expr * cond;
	Stmt * stmt;

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~ElseIfStmt();

};

class AssignStmt : public Stmt
{
public:

	AssignStmt(IdExpr * varName, Expr * value);

public:

	IdExpr * varName;
	Expr * value;

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~AssignStmt();

};

class WhileStmt : public Stmt
{
public:

	WhileStmt(Expr * cond, Stmt * block);

public:

	Expr * cond;
	Stmt * block;

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~WhileStmt();

};

class DWhileStmt : public Stmt
{
public:

	DWhileStmt(Expr * cond, Stmt * block);

public:

	Expr * cond;
	Stmt * block;

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~DWhileStmt();

};

class ForStmt : public Stmt
{
public:

	ForStmt(AssignStmt * var, Expr * cond, Stmt * block);

public:

	AssignStmt * var;
	Expr * cond;
	Stmt * block;

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~ForStmt();

};



#endif
