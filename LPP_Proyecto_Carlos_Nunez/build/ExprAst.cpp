/* ExprAst.cpp.  Generated automatically by treecc */
#line 17 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprAst.tc"

	#include "ExprAst.hpp"

	int offset = 0;
    int baseMem = 10000000;
    stdstring func = "";
    SymbolVector variables;
    SymbolVector varTypes;
    SymbolVector cTypes;

    void resetOffset() {
        offset = 0;
    }

	void setOffset(int pointer)
	{
	    offset = pointer;
	}

    stdstring insertTempString(stdstring str) {
        stdstring resultCode = "";
        for (int i = 0; i < str.length(); i++) {
            resultCode += "\n\tmov [0x" + std::to_string(baseMem+i) +"], " + std::to_string((int)str.at(i));
        }
        resultCode += "\n\tmov [0x" + std::to_string(baseMem+str.length()) + "], 0";
        return resultCode;
    }

	int getOffset(){
		return offset;
	}

	int addOffset()
	{
		return offset += 4;
	}
#line 40 "ExprAst.cpp"

#define YYNODESTATE_TRACK_LINES 1
#define YYNODESTATE_USE_ALLOCATOR 1
#line 1 "cpp_skel.cc"
/*
 * treecc node allocation routines for C++.
 *
 * Copyright (C) 2001  Southern Storm Software, Pty Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * As a special exception, when this file is copied by treecc into
 * a treecc output file, you may use that output file without restriction.
 */

#ifndef YYNODESTATE_BLKSIZ
#define	YYNODESTATE_BLKSIZ	2048
#endif

/*
 * Types used by the allocation routines.
 */
struct YYNODESTATE_block
{
	char data__[YYNODESTATE_BLKSIZ];
	struct YYNODESTATE_block *next__;

};
struct YYNODESTATE_push
{
	struct YYNODESTATE_push *next__;
	struct YYNODESTATE_block *saved_block__;
	int saved_used__;
};

/*
 * Initialize the singleton instance.
 */
#ifndef YYNODESTATE_REENTRANT
YYNODESTATE *YYNODESTATE::state__ = 0;
#endif

/*
 * Some macro magic to determine the default alignment
 * on this machine.  This will compile down to a constant.
 */
#define	YYNODESTATE_ALIGN_CHECK_TYPE(type,name)	\
	struct _YYNODESTATE_align_##name { \
		char pad; \
		type field; \
	}
#define	YYNODESTATE_ALIGN_FOR_TYPE(type)	\
	((unsigned)(unsigned long)(&(((struct _YYNODESTATE_align_##type *)0)->field)))
#define	YYNODESTATE_ALIGN_MAX(a,b)	\
	((a) > (b) ? (a) : (b))
#define	YYNODESTATE_ALIGN_MAX3(a,b,c) \
	(YYNODESTATE_ALIGN_MAX((a), YYNODESTATE_ALIGN_MAX((b), (c))))
YYNODESTATE_ALIGN_CHECK_TYPE(int, int);
YYNODESTATE_ALIGN_CHECK_TYPE(long, long);
#if defined(WIN32) && !defined(__CYGWIN__)
YYNODESTATE_ALIGN_CHECK_TYPE(__int64, long_long);
#else
YYNODESTATE_ALIGN_CHECK_TYPE(long long, long_long);
#endif
YYNODESTATE_ALIGN_CHECK_TYPE(void *, void_p);
YYNODESTATE_ALIGN_CHECK_TYPE(float, float);
YYNODESTATE_ALIGN_CHECK_TYPE(double, double);
#define	YYNODESTATE_ALIGNMENT	\
	YYNODESTATE_ALIGN_MAX( \
			YYNODESTATE_ALIGN_MAX3	\
			(YYNODESTATE_ALIGN_FOR_TYPE(int), \
		     YYNODESTATE_ALIGN_FOR_TYPE(long), \
			 YYNODESTATE_ALIGN_FOR_TYPE(long_long)), \
  	     YYNODESTATE_ALIGN_MAX3 \
		 	(YYNODESTATE_ALIGN_FOR_TYPE(void_p), \
			 YYNODESTATE_ALIGN_FOR_TYPE(float), \
			 YYNODESTATE_ALIGN_FOR_TYPE(double)))

/*
 * Constructor for YYNODESTATE.
 */
YYNODESTATE::YYNODESTATE()
{
	/* Initialize the allocation state */
	blocks__ = 0;
	push_stack__ = 0;
	used__ = 0;

#ifndef YYNODESTATE_REENTRANT
	/* Register this object as the singleton instance */
	if(!state__)
	{
		state__ = this;
	}
#endif
}

/*
 * Destructor for YYNODESTATE.
 */
YYNODESTATE::~YYNODESTATE()
{
	/* Free all node memory */
	clear();

#ifndef YYNODESTATE_REENTRANT
	/* We are no longer the singleton instance */
	if(state__ == this)
	{
		state__ = 0;
	}
#endif
}

#ifdef YYNODESTATE_USE_ALLOCATOR

/*
 * Allocate a block of memory.
 */
void *YYNODESTATE::alloc(size_t size__)
{
	struct YYNODESTATE_block *block__;
	void *result__;

	/* Round the size to the next alignment boundary */
	size__ = (size__ + YYNODESTATE_ALIGNMENT - 1) &
				~(YYNODESTATE_ALIGNMENT - 1);

	/* Do we need to allocate a new block? */
	block__ = blocks__;
	if(!block__ || (used__ + size__) > YYNODESTATE_BLKSIZ)
	{
		if(size__ > YYNODESTATE_BLKSIZ)
		{
			/* The allocation is too big for the node pool */
			return (void *)0;
		}
		block__ = new YYNODESTATE_block;
		if(!block__)
		{
			/* The system is out of memory.  The programmer can
			   inherit the "failed" method to report the
			   out of memory state and/or abort the program */
			failed();
			return (void *)0;
		}
		block__->next__ = blocks__;
		blocks__ = block__;
		used__ = 0;
	}

	/* Allocate the memory and return it */
	result__ = (void *)(block__->data__ + used__);
	used__ += size__;
	return result__;
}

/*
 * Deallocate a block of memory.
 */
void YYNODESTATE::dealloc(void *ptr__, size_t size__)
{
	/* Nothing to do for this type of node allocator */
}

/*
 * Push the node allocation state.
 */
int YYNODESTATE::push()
{
	struct YYNODESTATE_block *saved_block__;
	int saved_used__;
	struct YYNODESTATE_push *push_item__;

	/* Save the current state of the node allocation pool */
	saved_block__ = blocks__;
	saved_used__ = used__;

	/* Allocate space for a push item */
	push_item__ = (struct YYNODESTATE_push *)
			alloc(sizeof(struct YYNODESTATE_push));
	if(!push_item__)
	{
		return 0;
	}

	/* Copy the saved information to the push item */
	push_item__->saved_block__ = saved_block__;
	push_item__->saved_used__ = saved_used__;

	/* Add the push item to the push stack */
	push_item__->next__ = push_stack__;
	push_stack__ = push_item__;
	return 1;
}

/*
 * Pop the node allocation state.
 */
void YYNODESTATE::pop()
{
	struct YYNODESTATE_push *push_item__;
	struct YYNODESTATE_block *saved_block__;
	struct YYNODESTATE_block *temp_block__;

	/* Pop the top of the push stack */
	push_item__ = push_stack__;
	if(push_item__ == 0)
	{
		saved_block__ = 0;
		used__ = 0;
	}
	else
	{
		saved_block__ = push_item__->saved_block__;
		used__ = push_item__->saved_used__;
		push_stack__ = push_item__->next__;
	}

	/* Free unnecessary blocks */
	while(blocks__ != saved_block__)
	{
		temp_block__ = blocks__;
		blocks__ = temp_block__->next__;
		delete temp_block__;
	}
}

/*
 * Clear the node allocation pool completely.
 */
void YYNODESTATE::clear()
{
	struct YYNODESTATE_block *temp_block__;
	while(blocks__ != 0)
	{
		temp_block__ = blocks__;
		blocks__ = temp_block__->next__;
		delete temp_block__;
	}
	push_stack__ = 0;
	used__ = 0;
}

#endif /* YYNODESTATE_USE_ALLOCATOR */

/*
 * Default implementation of functions which may be overridden.
 */
void YYNODESTATE::failed()
{
}

#ifdef YYNODESTATE_TRACK_LINES

const char *YYNODESTATE::currFilename() const
{
	return (const char *)0;
}

long YYNODESTATE::currLinenum() const
{
	return 0;
}

#endif
#line 319 "ExprAst.cpp"
void *Node::operator new(size_t size__)
{
	return YYNODESTATE::getState()->alloc(size__);
}

void Node::operator delete(void *ptr__, size_t size__)
{
	YYNODESTATE::getState()->dealloc(ptr__, size__);
}

Node::Node()
{
	this->kind__ = Node_kind;
	this->filename__ = YYNODESTATE::getState()->currFilename();
	this->linenum__ = YYNODESTATE::getState()->currLinenum();
}

Node::~Node()
{
	// not used
}

int Node::isA(int kind) const
{
	if(kind == Node_kind)
		return 1;
	else
		return 0;
}

const char *Node::getKindName() const
{
	return "Node";
}

Expr::Expr()
	: Node()
{
	this->kind__ = Expr_kind;
}

Expr::~Expr()
{
	// not used
}

int Expr::isA(int kind) const
{
	if(kind == Expr_kind)
		return 1;
	else
		return Node::isA(kind);
}

const char *Expr::getKindName() const
{
	return "Expr";
}

Program::Program(DefBlockStmt * defStmts, FuncDefBlock * funcBlock, Stmt * stmts)
	: Node()
{
	this->kind__ = Program_kind;
	this->defStmts = defStmts;
	this->funcBlock = funcBlock;
	this->stmts = stmts;
}

Program::~Program()
{
	// not used
}

stdstring Program::genProgramCode()
{
	Program *node = this;
#line 202 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprAst.tc"
	{
	    stdstring defStmts = "";
	    // std::cout << "Primer paso" << std::endl;
	    if (node->defStmts != nullptr)
	        defStmts = node->defStmts->genProgramCode();
	    node->code = "\n\tsub esp, " + std::to_string(offset) + "\n";
	    resetOffset();
	    
	
	    stdstring stmts = node->stmts->genProgramCode();
	    node->code += "prg:\n\tpush ebp\n\tmov ebp, esp\n\tsub esp, "+std::to_string(offset)+"\n";
	    node->code += "\n" + stmts;
	
	    return node->code;
	}
#line 412 "ExprAst.cpp"
}

int Program::isA(int kind) const
{
	if(kind == Program_kind)
		return 1;
	else
		return Node::isA(kind);
}

const char *Program::getKindName() const
{
	return "Program";
}

Stmt::Stmt()
	: Node()
{
	this->kind__ = Stmt_kind;
}

Stmt::~Stmt()
{
	// not used
}

int Stmt::isA(int kind) const
{
	if(kind == Stmt_kind)
		return 1;
	else
		return Node::isA(kind);
}

const char *Stmt::getKindName() const
{
	return "Stmt";
}

BinaryExpr::BinaryExpr(Expr * expr1, Expr * expr2)
	: Expr()
{
	this->kind__ = BinaryExpr_kind;
	this->expr1 = expr1;
	this->expr2 = expr2;
}

BinaryExpr::~BinaryExpr()
{
	// not used
}

int BinaryExpr::isA(int kind) const
{
	if(kind == BinaryExpr_kind)
		return 1;
	else
		return Expr::isA(kind);
}

const char *BinaryExpr::getKindName() const
{
	return "BinaryExpr";
}

NumExpr::NumExpr(int value)
	: Expr()
{
	this->kind__ = NumExpr_kind;
	this->value = value;
}

NumExpr::~NumExpr()
{
	// not used
}

stdstring NumExpr::genProgramCode()
{
	NumExpr *node = this;
#line 228 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprAst.tc"
	{
	    node->place = std::to_string(node->value);
	    return "";
	}
#line 498 "ExprAst.cpp"
}

int NumExpr::isA(int kind) const
{
	if(kind == NumExpr_kind)
		return 1;
	else
		return Expr::isA(kind);
}

const char *NumExpr::getKindName() const
{
	return "NumExpr";
}

IdExpr::IdExpr(stdstring id)
	: Expr()
{
	this->kind__ = IdExpr_kind;
	this->id = id;
}

IdExpr::~IdExpr()
{
	// not used
}

stdstring IdExpr::genProgramCode()
{
	IdExpr *node = this;
#line 233 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprAst.tc"
	{
	    node->place = variables[node->id];
	    return "";
	}
#line 534 "ExprAst.cpp"
}

int IdExpr::isA(int kind) const
{
	if(kind == IdExpr_kind)
		return 1;
	else
		return Expr::isA(kind);
}

const char *IdExpr::getKindName() const
{
	return "IdExpr";
}

BoolVarExpr::BoolVarExpr(int value)
	: Expr()
{
	this->kind__ = BoolVarExpr_kind;
	this->value = value;
}

BoolVarExpr::~BoolVarExpr()
{
	// not used
}

stdstring BoolVarExpr::genProgramCode()
{
	BoolVarExpr *node = this;
#line 238 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprAst.tc"
	{
	    node->place = std::to_string(node->value);
	    return "";
	}
#line 570 "ExprAst.cpp"
}

int BoolVarExpr::isA(int kind) const
{
	if(kind == BoolVarExpr_kind)
		return 1;
	else
		return Expr::isA(kind);
}

const char *BoolVarExpr::getKindName() const
{
	return "BoolVarExpr";
}

CharExpr::CharExpr(int value)
	: Expr()
{
	this->kind__ = CharExpr_kind;
	this->value = value;
}

CharExpr::~CharExpr()
{
	// not used
}

stdstring CharExpr::genProgramCode()
{
	CharExpr *node = this;
#line 243 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprAst.tc"
	{
	    node->place = std::to_string(node->value);
	    return "";
	}
#line 606 "ExprAst.cpp"
}

int CharExpr::isA(int kind) const
{
	if(kind == CharExpr_kind)
		return 1;
	else
		return Expr::isA(kind);
}

const char *CharExpr::getKindName() const
{
	return "CharExpr";
}

StrExpr::StrExpr(stdstring value)
	: Expr()
{
	this->kind__ = StrExpr_kind;
	this->value = value;
}

StrExpr::~StrExpr()
{
	// not used
}

stdstring StrExpr::genProgramCode()
{
	StrExpr *node = this;
#line 248 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprAst.tc"
	{
	    node->place = node->value;
	    return "";
	}
#line 642 "ExprAst.cpp"
}

int StrExpr::isA(int kind) const
{
	if(kind == StrExpr_kind)
		return 1;
	else
		return Expr::isA(kind);
}

const char *StrExpr::getKindName() const
{
	return "StrExpr";
}

DefExpr::DefExpr()
	: Expr()
{
	this->kind__ = DefExpr_kind;
}

DefExpr::~DefExpr()
{
	// not used
}

int DefExpr::isA(int kind) const
{
	if(kind == DefExpr_kind)
		return 1;
	else
		return Expr::isA(kind);
}

const char *DefExpr::getKindName() const
{
	return "DefExpr";
}

AddExpr::AddExpr(Expr * expr1, Expr * expr2)
	: BinaryExpr(expr1, expr2)
{
	this->kind__ = AddExpr_kind;
}

AddExpr::~AddExpr()
{
	// not used
}

stdstring AddExpr::genProgramCode()
{
	AddExpr *node = this;
#line 253 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprAst.tc"
	{
	    int offset = addOffset();
	
	    stdstring e1 = node->expr1->genProgramCode();
	    stdstring e2 = node->expr2->genProgramCode();
	
	    // Intento de hacer la parte semantica, PAUSADO por el momento
	    
	    // std::cout << "typeid de node->expr: " << typeid(node->expr1).name() << ", typeid de NumExpr: " << typeid(NumExpr*).name() << std::endl;
	
	    // if (dynamic_cast<NumExpr*>(node->expr1) == 0 &&
	    //      dynamic_cast<IdExpr*>(node->expr1) == 0)
	    //      std::cout << "El objeto si es tipo numero o id" << std::endl;
	
	    node->code = e1 + "\n" + e2;
	
	    node->code += "\n\tmov ecx, " + node->expr1->place;
	    node->code += "\n\tadd ecx, " + node->expr2->place;
	    node->code += "\n\tmov dword [ebp - " + std::to_string(offset) + "], ecx\n";
	    node->place = "dword [ebp - " + std::to_string(offset) + "]";
	
	    return node->code;
	}
#line 720 "ExprAst.cpp"
}

int AddExpr::isA(int kind) const
{
	if(kind == AddExpr_kind)
		return 1;
	else
		return BinaryExpr::isA(kind);
}

const char *AddExpr::getKindName() const
{
	return "AddExpr";
}

SubExpr::SubExpr(Expr * expr1, Expr * expr2)
	: BinaryExpr(expr1, expr2)
{
	this->kind__ = SubExpr_kind;
}

SubExpr::~SubExpr()
{
	// not used
}

stdstring SubExpr::genProgramCode()
{
	SubExpr *node = this;
#line 277 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprAst.tc"
	{
	    int offset = addOffset();
	
	    stdstring e1 = node->expr1->genProgramCode();
	    stdstring e2 = node->expr2->genProgramCode();
	
	    node->code = e1 + "\n" + e2;
	
	    node->code += "\n\tmov ecx, " + node->expr1->place;
	    node->code += "\n\tsub ecx, " + node->expr2->place;
	    node->code += "\n\tmov dword [ebp - " + std::to_string(offset) + "], ecx\n";
	    node->place = "dword [ebp - " + std::to_string(offset) + "]";
	
	    return node->code;
	}
#line 766 "ExprAst.cpp"
}

int SubExpr::isA(int kind) const
{
	if(kind == SubExpr_kind)
		return 1;
	else
		return BinaryExpr::isA(kind);
}

const char *SubExpr::getKindName() const
{
	return "SubExpr";
}

MulExpr::MulExpr(Expr * expr1, Expr * expr2)
	: BinaryExpr(expr1, expr2)
{
	this->kind__ = MulExpr_kind;
}

MulExpr::~MulExpr()
{
	// not used
}

stdstring MulExpr::genProgramCode()
{
	MulExpr *node = this;
#line 333 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprAst.tc"
	{
	    int offset = addOffset();
	
	    stdstring e1 = node->expr1->genProgramCode();
	    stdstring e2 = node->expr2->genProgramCode();
	
	    // Intento de hacer la parte semantica, PAUSADO por el momento
	
	    node->code = e1 + "\n" + e2;
	
	    node->code += "\n\tmov eax, " + node->expr1->place;
	    node->code += "\n\tmov ecx, " + node->expr2->place;
	    node->code += "\n\timul ecx";
	    node->code += "\n\tmov dword [ebp - " + std::to_string(offset) + "], eax\n";
	    node->place = "dword [ebp - " + std::to_string(offset) + "]";
	
	    return node->code;
	}
#line 815 "ExprAst.cpp"
}

int MulExpr::isA(int kind) const
{
	if(kind == MulExpr_kind)
		return 1;
	else
		return BinaryExpr::isA(kind);
}

const char *MulExpr::getKindName() const
{
	return "MulExpr";
}

DivExpr::DivExpr(Expr * expr1, Expr * expr2)
	: BinaryExpr(expr1, expr2)
{
	this->kind__ = DivExpr_kind;
}

DivExpr::~DivExpr()
{
	// not used
}

stdstring DivExpr::genProgramCode()
{
	DivExpr *node = this;
#line 352 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprAst.tc"
	{
	    int offset = addOffset();
	
	    stdstring e1 = node->expr1->genProgramCode();
	    stdstring e2 = node->expr2->genProgramCode();
	
	    // Intento de hacer la parte semantica, PAUSADO por el momento
	
	    node->code = e1 + "\n" + e2;
	
	    node->code += "\n\tmov eax, " + node->expr1->place;
	    node->code += "\n\tmov ecx, " + node->expr2->place;
	    node->code += "\n\tcdq";
	    node->code += "\n\tcmp eax, 0";
	    node->code += "\n\tjg div"+std::to_string(offset);
	    node->code += "\n\tcmp ecx, 0";
	    node->code += "\n\tjg idiv"+std::to_string(offset);
	    node->code += "\n\tjmp div"+std::to_string(offset+1);
	    node->code += "\n\tidiv"+std::to_string(offset)+":";
	    node->code += "\n\tidiv ecx";
	    node->code += "\n\tjmp enddiv"+std::to_string(offset);
	    node->code += "\n\tdiv"+std::to_string(offset)+":";
	    node->code += "\n\tcmp ecx, 0";
	    node->code += "\n\tjl idiv"+std::to_string(offset);
	    node->code += "\n\tdiv ecx";
	    node->code += "\n\tjmp enddiv"+std::to_string(offset);
	    node->code += "\n\tdiv"+std::to_string(offset+1)+":";
	    node->code += "\n\tmov ebx, -1";
	    node->code += "\n\timul ebx";
	    node->code += "\n\tidiv ecx";
	    node->code += "\n\timul ebx";
	    node->code += "\n\tenddiv"+std::to_string(offset)+":";
	    node->code += "\n\tmov dword [ebp - " + std::to_string(offset) + "], eax\n";
	    node->place = "dword [ebp - " + std::to_string(offset) + "]";
	
	    return node->code;
	}
#line 883 "ExprAst.cpp"
}

int DivExpr::isA(int kind) const
{
	if(kind == DivExpr_kind)
		return 1;
	else
		return BinaryExpr::isA(kind);
}

const char *DivExpr::getKindName() const
{
	return "DivExpr";
}

ModExpr::ModExpr(Expr * expr1, Expr * expr2)
	: BinaryExpr(expr1, expr2)
{
	this->kind__ = ModExpr_kind;
}

ModExpr::~ModExpr()
{
	// not used
}

stdstring ModExpr::genProgramCode()
{
	ModExpr *node = this;
#line 390 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprAst.tc"
	{
	    int offset = addOffset();
	
	    stdstring e1 = node->expr1->genProgramCode();
	    stdstring e2 = node->expr2->genProgramCode();
	
	    // Intento de hacer la parte semantica, PAUSADO por el momento
	
	    node->code = e1 + "\n" + e2;
	
	    node->code += "\n\tmov eax, " + node->expr1->place;
	    node->code += "\n\tmov ecx, " + node->expr2->place;
	    node->code += "\n\tcdq";
	    node->code += "\n\tcmp eax, 0";
	    node->code += "\n\tjg div"+std::to_string(offset);
	    node->code += "\n\tcmp ecx, 0";
	    node->code += "\n\tjg idiv"+std::to_string(offset);
	    node->code += "\n\tjmp div"+std::to_string(offset+1);
	    node->code += "\n\tidiv"+std::to_string(offset)+":";
	    node->code += "\n\tidiv ecx";
	    node->code += "\n\tjmp enddiv"+std::to_string(offset);
	    node->code += "\n\tdiv"+std::to_string(offset)+":";
	    node->code += "\n\tcmp ecx, 0";
	    node->code += "\n\tjl idiv"+std::to_string(offset);
	    node->code += "\n\tdiv ecx";
	    node->code += "\n\tjmp enddiv"+std::to_string(offset);
	    node->code += "\n\tdiv"+std::to_string(offset+1)+":";
	    node->code += "\n\tmov ebx, -1";
	    node->code += "\n\timul ebx";
	    node->code += "\n\tidiv ecx";
	    node->code += "\n\timul ebx";
	    node->code += "\n\tenddiv"+std::to_string(offset)+":";
	    node->code += "\n\tmov dword [ebp - " + std::to_string(offset) + "], edx\n";
	    node->place = "dword [ebp - " + std::to_string(offset) + "]";
	
	    return node->code;
	}
#line 951 "ExprAst.cpp"
}

int ModExpr::isA(int kind) const
{
	if(kind == ModExpr_kind)
		return 1;
	else
		return BinaryExpr::isA(kind);
}

const char *ModExpr::getKindName() const
{
	return "ModExpr";
}

LTExpr::LTExpr(Expr * expr1, Expr * expr2)
	: BinaryExpr(expr1, expr2)
{
	this->kind__ = LTExpr_kind;
}

LTExpr::~LTExpr()
{
	// not used
}

stdstring LTExpr::genProgramCode()
{
	LTExpr *node = this;
#line 428 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprAst.tc"
	{
	    int offset = addOffset();
	
	    stdstring e1 = node->expr1->genProgramCode();
	    stdstring e2 = node->expr2->genProgramCode();
	
	    node->code = e1 + "\n" + e2;
	
	    node->code += "\n\tmov ecx, " + node->expr1->place;
	    node->code += "\n\tcmp ecx, " + node->expr2->place;
	    node->code += "\n\tjl less"+std::to_string(offset);
	    node->code += "\n\tmov dword [ebp - " + std::to_string(offset) + "], 0";
	    node->code += "\n\tjmp nless"+std::to_string(offset)+"\n\nless"+std::to_string(offset)+":";
	    node->code += "\n\tmov dword [ebp - " + std::to_string(offset) + "], 1\n\nnless"+std::to_string(offset)+":";
	    node->place = "dword [ebp - " + std::to_string(offset) + "]";
	
	    return node->code;
	}
#line 1000 "ExprAst.cpp"
}

int LTExpr::isA(int kind) const
{
	if(kind == LTExpr_kind)
		return 1;
	else
		return BinaryExpr::isA(kind);
}

const char *LTExpr::getKindName() const
{
	return "LTExpr";
}

GTExpr::GTExpr(Expr * expr1, Expr * expr2)
	: BinaryExpr(expr1, expr2)
{
	this->kind__ = GTExpr_kind;
}

GTExpr::~GTExpr()
{
	// not used
}

stdstring GTExpr::genProgramCode()
{
	GTExpr *node = this;
#line 447 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprAst.tc"
	{
	    int offset = addOffset();
	
	    stdstring e1 = node->expr1->genProgramCode();
	    stdstring e2 = node->expr2->genProgramCode();
	
	    node->code = e1 + "\n" + e2;
	
	    node->code += "\n\tmov ecx, " + node->expr1->place;
	    node->code += "\n\tcmp ecx, " + node->expr2->place;
	    node->code += "\n\tjg greater" + std::to_string(offset);
	    node->code += "\n\tmov dword [ebp - " + std::to_string(offset) + "], 0";
	    node->code += "\n\tjmp ngreater"+std::to_string(offset)+"\n\ngreater"+std::to_string(offset)+":";
	    node->code += "\n\tmov dword [ebp - " + std::to_string(offset) + "], 1\n\nngreater"+std::to_string(offset)+":";
	    node->place = "dword [ebp - " + std::to_string(offset) + "]";
	
	    return node->code;
	}
#line 1049 "ExprAst.cpp"
}

int GTExpr::isA(int kind) const
{
	if(kind == GTExpr_kind)
		return 1;
	else
		return BinaryExpr::isA(kind);
}

const char *GTExpr::getKindName() const
{
	return "GTExpr";
}

LETExpr::LETExpr(Expr * expr1, Expr * expr2)
	: BinaryExpr(expr1, expr2)
{
	this->kind__ = LETExpr_kind;
}

LETExpr::~LETExpr()
{
	// not used
}

stdstring LETExpr::genProgramCode()
{
	LETExpr *node = this;
#line 466 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprAst.tc"
	{
	    int offset = addOffset();
	
	    stdstring e1 = node->expr1->genProgramCode();
	    stdstring e2 = node->expr2->genProgramCode();
	
	    node->code = e1 + "\n" + e2;
	
	    node->code += "\n\tmov ecx, " + node->expr1->place;
	    node->code += "\n\tcmp ecx, " + node->expr2->place;
	    node->code += "\n\tjle lesse"+std::to_string(offset);
	    node->code += "\n\tmov dword [ebp - " + std::to_string(offset) + "], 0";
	    node->code += "\n\tjmp nlesse"+std::to_string(offset)+"\n\nlesse"+std::to_string(offset)+":";
	    node->code += "\n\tmov dword [ebp - " + std::to_string(offset) + "], 1\n\nnlesse"+std::to_string(offset)+":";
	    node->place = "dword [ebp - " + std::to_string(offset) + "]";
	
	    return node->code;
	}
#line 1098 "ExprAst.cpp"
}

int LETExpr::isA(int kind) const
{
	if(kind == LETExpr_kind)
		return 1;
	else
		return BinaryExpr::isA(kind);
}

const char *LETExpr::getKindName() const
{
	return "LETExpr";
}

GETExpr::GETExpr(Expr * expr1, Expr * expr2)
	: BinaryExpr(expr1, expr2)
{
	this->kind__ = GETExpr_kind;
}

GETExpr::~GETExpr()
{
	// not used
}

stdstring GETExpr::genProgramCode()
{
	GETExpr *node = this;
#line 485 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprAst.tc"
	{
	    int offset = addOffset();
	
	    stdstring e1 = node->expr1->genProgramCode();
	    stdstring e2 = node->expr2->genProgramCode();
	
	    node->code = e1 + "\n" + e2;
	
	    node->code += "\n\tmov ecx, " + node->expr1->place;
	    node->code += "\n\tcmp ecx, " + node->expr2->place;
	    node->code += "\n\tjge greatere" + std::to_string(offset);
	    node->code += "\n\tmov dword [ebp - " + std::to_string(offset) + "], 0";
	    node->code += "\n\tjmp ngreatere"+std::to_string(offset)+"\n\ngreatere"+std::to_string(offset)+":";
	    node->code += "\n\tmov dword [ebp - " + std::to_string(offset) + "], 1\n\nngreatere"+std::to_string(offset)+":";
	    node->place = "dword [ebp - " + std::to_string(offset) + "]";
	
	    return node->code;
	}
#line 1147 "ExprAst.cpp"
}

int GETExpr::isA(int kind) const
{
	if(kind == GETExpr_kind)
		return 1;
	else
		return BinaryExpr::isA(kind);
}

const char *GETExpr::getKindName() const
{
	return "GETExpr";
}

EqExpr::EqExpr(Expr * expr1, Expr * expr2)
	: BinaryExpr(expr1, expr2)
{
	this->kind__ = EqExpr_kind;
}

EqExpr::~EqExpr()
{
	// not used
}

stdstring EqExpr::genProgramCode()
{
	EqExpr *node = this;
#line 504 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprAst.tc"
	{
	    int offset = addOffset();
	
	    stdstring e1 = node->expr1->genProgramCode();
	    stdstring e2 = node->expr2->genProgramCode();
	
	    node->code = e1 + "\n" + e2;
	
	    node->code += "\n\tmov ecx, " + node->expr1->place;
	    node->code += "\n\tcmp ecx, " + node->expr2->place;
	    node->code += "\n\tje equal"+std::to_string(offset);
	    node->code += "\n\tmov dword [ebp - " + std::to_string(offset) + "], 0";
	    node->code += "\n\tjmp nequal"+std::to_string(offset)+"\n\nequal"+std::to_string(offset)+":";
	    node->code += "\n\tmov dword [ebp - " + std::to_string(offset) + "], 1\n\nnequal"+std::to_string(offset)+":";
	    node->place = "dword [ebp - " + std::to_string(offset) + "]";
	
	    return node->code;
	}
#line 1196 "ExprAst.cpp"
}

int EqExpr::isA(int kind) const
{
	if(kind == EqExpr_kind)
		return 1;
	else
		return BinaryExpr::isA(kind);
}

const char *EqExpr::getKindName() const
{
	return "EqExpr";
}

NeExpr::NeExpr(Expr * expr1, Expr * expr2)
	: BinaryExpr(expr1, expr2)
{
	this->kind__ = NeExpr_kind;
}

NeExpr::~NeExpr()
{
	// not used
}

stdstring NeExpr::genProgramCode()
{
	NeExpr *node = this;
#line 523 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprAst.tc"
	{
	    int offset = addOffset();
	
	    stdstring e1 = node->expr1->genProgramCode();
	    stdstring e2 = node->expr2->genProgramCode();
	
	    node->code = e1 + "\n" + e2;
	
	    node->code += "\n\tmov ecx, " + node->expr1->place;
	    node->code += "\n\tcmp ecx, " + e2;
	    node->code += "\n\tjne notEqual"+std::to_string(offset);
	    node->code += "\n\tmov dword [ebp - " + std::to_string(offset) + "], 0";
	    node->code += "\n\tjmp equals"+std::to_string(offset)+"\n\nnotEqual:";
	    node->code += "\n\tmov dword [ebp - " + std::to_string(offset) + "], 1\n\nequals"+std::to_string(offset)+":";
	    node->place = "dword [ebp - " + std::to_string(offset) + "]";
	
	    return node->code;
	}
#line 1245 "ExprAst.cpp"
}

int NeExpr::isA(int kind) const
{
	if(kind == NeExpr_kind)
		return 1;
	else
		return BinaryExpr::isA(kind);
}

const char *NeExpr::getKindName() const
{
	return "NeExpr";
}

AndExpr::AndExpr(Expr * expr1, Expr * expr2)
	: BinaryExpr(expr1, expr2)
{
	this->kind__ = AndExpr_kind;
}

AndExpr::~AndExpr()
{
	// not used
}

stdstring AndExpr::genProgramCode()
{
	AndExpr *node = this;
#line 293 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprAst.tc"
	{
	    int offset = addOffset();
	
	    stdstring e1 = node->expr1->genProgramCode();
	    stdstring e2 = node->expr2->genProgramCode();
	
	    // Intento de hacer la parte semantica, PAUSADO por el momento
	    
	    // std::cout << "typeid de node->expr: " << typeid(node->expr1).name() << ", typeid de NumExpr: " << typeid(NumExpr*).name() << std::endl;
	
	    // if (dynamic_cast<NumExpr*>(node->expr1) == 0 &&
	    //      dynamic_cast<IdExpr*>(node->expr1) == 0)
	    //      std::cout << "El objeto si es tipo numero o id" << std::endl;
	
	    node->code = e1 + "\n" + e2;
	
	    node->code += "\n\tmov ecx, " + node->expr1->place;
	    node->code += "\n\tand ecx, " + node->expr2->place;
	    node->code += "\n\tmov dword [ebp - " + std::to_string(offset) + "], ecx\n";
	    node->place = "dword [ebp - " + std::to_string(offset) + "]";
	
	    return node->code;
	}
#line 1299 "ExprAst.cpp"
}

int AndExpr::isA(int kind) const
{
	if(kind == AndExpr_kind)
		return 1;
	else
		return BinaryExpr::isA(kind);
}

const char *AndExpr::getKindName() const
{
	return "AndExpr";
}

OrExpr::OrExpr(Expr * expr1, Expr * expr2)
	: BinaryExpr(expr1, expr2)
{
	this->kind__ = OrExpr_kind;
}

OrExpr::~OrExpr()
{
	// not used
}

stdstring OrExpr::genProgramCode()
{
	OrExpr *node = this;
#line 317 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprAst.tc"
	{
	    int offset = addOffset();
	
	    stdstring e1 = node->expr1->genProgramCode();
	    stdstring e2 = node->expr2->genProgramCode();
	
	    node->code = e1 + "\n" + e2;
	
	    node->code += "\n\tmov ecx, " + node->expr1->place;
	    node->code += "\n\tor ecx, " + node->expr2->place;
	    node->code += "\n\tmov dword [ebp - " + std::to_string(offset) + "], ecx\n";
	    node->place = "dword [ebp - " + std::to_string(offset) + "]";
	
	    return node->code;
	}
#line 1345 "ExprAst.cpp"
}

int OrExpr::isA(int kind) const
{
	if(kind == OrExpr_kind)
		return 1;
	else
		return BinaryExpr::isA(kind);
}

const char *OrExpr::getKindName() const
{
	return "OrExpr";
}

DefList::DefList(DefList * varList, DefVar * newVar)
	: DefExpr()
{
	this->kind__ = DefList_kind;
	this->varList = varList;
	this->newVar = newVar;
}

DefList::~DefList()
{
	// not used
}

stdstring DefList::genProgramCode()
{
	DefList *node = this;
#line 758 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprAst.tc"
	{ return ""; }
#line 1379 "ExprAst.cpp"
}

stdstring DefList::genDefCode(stdstring type)
{
	DefList *node = this;
#line 761 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprAst.tc"
	{
	    stdstring vList = node->varList->genDefCode(type);
	    stdstring nVar = node->newVar->genDefCode(type);
	
	    node->code = vList + "\n" + nVar;
	
	    return node->code;
	}
#line 1394 "ExprAst.cpp"
}

int DefList::isA(int kind) const
{
	if(kind == DefList_kind)
		return 1;
	else
		return DefExpr::isA(kind);
}

const char *DefList::getKindName() const
{
	return "DefList";
}

DefVar::DefVar(IdExpr * newVar)
	: DefExpr()
{
	this->kind__ = DefVar_kind;
	this->newVar = newVar;
}

DefVar::~DefVar()
{
	// not used
}

stdstring DefVar::genProgramCode()
{
	DefVar *node = this;
#line 759 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprAst.tc"
	{ return ""; }
#line 1427 "ExprAst.cpp"
}

stdstring DefVar::genDefCode(stdstring type)
{
	DefVar *node = this;
#line 770 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprAst.tc"
	{
	    variables[node->newVar->id] = "dword [ebp + " + std::to_string(addOffset()) + "]";
	    node->place = variables[node->newVar->id];
	    std::transform(type.begin(), type.end(), type.begin(), ::toupper);
	    varTypes[node->place] = type;
	    node->code = "\tpush eax";
	    // std::cout << "alocating variable: " << node->newVar->id << " in position " << variables[node->newVar->id] << std::endl;
	    return node->code;
	}
#line 1443 "ExprAst.cpp"
}

int DefVar::isA(int kind) const
{
	if(kind == DefVar_kind)
		return 1;
	else
		return DefExpr::isA(kind);
}

const char *DefVar::getKindName() const
{
	return "DefVar";
}

FuncDefBlock::FuncDefBlock(FuncDefBlock * funcBlock, Stmt * stmt)
	: Stmt()
{
	this->kind__ = FuncDefBlock_kind;
	this->funcBlock = funcBlock;
	this->stmt = stmt;
}

FuncDefBlock::~FuncDefBlock()
{
	// not used
}

stdstring FuncDefBlock::genProgramCode()
{
	FuncDefBlock *node = this;
#line 551 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprAst.tc"
	{    
	    stdstring funcBlock = node->funcBlock->genProgramCode();
	    stdstring stmt = node->stmt->genProgramCode();
	
	    node->code = funcBlock + stmt;
	
	    return node->code;
	}
#line 1484 "ExprAst.cpp"
}

int FuncDefBlock::isA(int kind) const
{
	if(kind == FuncDefBlock_kind)
		return 1;
	else
		return Stmt::isA(kind);
}

const char *FuncDefBlock::getKindName() const
{
	return "FuncDefBlock";
}

FuncDefStmt::FuncDefStmt(IdExpr * funcName, ParamList * params, Stmt * stmts)
	: Stmt()
{
	this->kind__ = FuncDefStmt_kind;
	this->funcName = funcName;
	this->params = params;
	this->stmts = stmts;
}

FuncDefStmt::~FuncDefStmt()
{
	// not used
}

stdstring FuncDefStmt::genProgramCode()
{
	FuncDefStmt *node = this;
#line 218 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprAst.tc"
	{
	    stdstring funcName = node->funcName->genProgramCode();
	    stdstring params = node->params->genProgramCode();
	    stdstring funcCode = node->stmts->genProgramCode();
	
	    node->code = node->funcName->place +":\n\tpush ebp\n\tmov ebp, esp\n\tsub esp, "+std::to_string(offset)+"\n";
	
	    return node->code;
	}
#line 1527 "ExprAst.cpp"
}

int FuncDefStmt::isA(int kind) const
{
	if(kind == FuncDefStmt_kind)
		return 1;
	else
		return Stmt::isA(kind);
}

const char *FuncDefStmt::getKindName() const
{
	return "FuncDefStmt";
}

BlockStmt::BlockStmt(Node * stmt1, Node * stmt2)
	: Stmt()
{
	this->kind__ = BlockStmt_kind;
	this->stmt1 = stmt1;
	this->stmt2 = stmt2;
}

BlockStmt::~BlockStmt()
{
	// not used
}

stdstring BlockStmt::genProgramCode()
{
	BlockStmt *node = this;
#line 542 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprAst.tc"
	{    
	    stdstring s1 = node->stmt1->genProgramCode();
	    stdstring s2 = node->stmt2->genProgramCode();
	
	    node->code = s1 + s2;
	
	    return node->code;
	}
#line 1568 "ExprAst.cpp"
}

int BlockStmt::isA(int kind) const
{
	if(kind == BlockStmt_kind)
		return 1;
	else
		return Stmt::isA(kind);
}

const char *BlockStmt::getKindName() const
{
	return "BlockStmt";
}

DefBlockStmt::DefBlockStmt(DefBlockStmt * defList, DefStmt * stmt)
	: Stmt()
{
	this->kind__ = DefBlockStmt_kind;
	this->defList = defList;
	this->stmt = stmt;
}

DefBlockStmt::~DefBlockStmt()
{
	// not used
}

stdstring DefBlockStmt::genProgramCode()
{
	DefBlockStmt *node = this;
#line 737 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprAst.tc"
	{
	    stdstring dList = node->defList->genProgramCode();
	    stdstring stmt = node->stmt->genProgramCode();
	
	    // std::cout << "DefBlock" << code << std::endl;
	    node->code = dList + "\n" + stmt;
	
	    return node->code;
	}
#line 1610 "ExprAst.cpp"
}

int DefBlockStmt::isA(int kind) const
{
	if(kind == DefBlockStmt_kind)
		return 1;
	else
		return Stmt::isA(kind);
}

const char *DefBlockStmt::getKindName() const
{
	return "DefBlockStmt";
}

DefStmt::DefStmt(StrExpr * varType, DefList * varlist)
	: Stmt()
{
	this->kind__ = DefStmt_kind;
	this->varType = varType;
	this->varlist = varlist;
}

DefStmt::~DefStmt()
{
	// not used
}

stdstring DefStmt::genProgramCode()
{
	DefStmt *node = this;
#line 747 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprAst.tc"
	{
	    stdstring type = node->varType->genProgramCode();
	    stdstring code = node->varlist->genDefCode(node->varType->place);
	    // std::cout << "DefStmt" << std::endl;
	    // for (auto const& i : varTypes) {
	    //     std::cout << "Variable: " << i.first << " de tipo: " << i.second << std::endl;
	    // }
	    node->code = code;
	    return node->code;
	}
#line 1653 "ExprAst.cpp"
}

int DefStmt::isA(int kind) const
{
	if(kind == DefStmt_kind)
		return 1;
	else
		return Stmt::isA(kind);
}

const char *DefStmt::getKindName() const
{
	return "DefStmt";
}

ParamList::ParamList(ParamList * parList, ParamStmt * stmt)
	: Stmt()
{
	this->kind__ = ParamList_kind;
	this->parList = parList;
	this->stmt = stmt;
}

ParamList::~ParamList()
{
	// not used
}

stdstring ParamList::genProgramCode()
{
	ParamList *node = this;
#line 780 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprAst.tc"
	{
	    stdstring parList = node->parList->genProgramCode();
	    stdstring stmt = node->stmt->genProgramCode();
	
	    node->code = parList + "\n" + stmt;
	
	    return node->code;
	}
#line 1694 "ExprAst.cpp"
}

int ParamList::isA(int kind) const
{
	if(kind == ParamList_kind)
		return 1;
	else
		return Stmt::isA(kind);
}

const char *ParamList::getKindName() const
{
	return "ParamList";
}

ParamStmt::ParamStmt(IdExpr * id)
	: Stmt()
{
	this->kind__ = ParamStmt_kind;
	this->id = id;
}

ParamStmt::~ParamStmt()
{
	// not used
}

stdstring ParamStmt::genProgramCode()
{
	ParamStmt *node = this;
#line 789 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprAst.tc"
	{
	    stdstring id = node->id->genProgramCode();
	
	    node->code = id;
	
	    return node->code;
	}
#line 1733 "ExprAst.cpp"
}

int ParamStmt::isA(int kind) const
{
	if(kind == ParamStmt_kind)
		return 1;
	else
		return Stmt::isA(kind);
}

const char *ParamStmt::getKindName() const
{
	return "ParamStmt";
}

PrintExprStmt::PrintExprStmt(Expr * expr)
	: Stmt()
{
	this->kind__ = PrintExprStmt_kind;
	this->expr = expr;
}

PrintExprStmt::~PrintExprStmt()
{
	// not used
}

stdstring PrintExprStmt::genProgramCode()
{
	PrintExprStmt *node = this;
#line 560 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprAst.tc"
	{
	    int offset = addOffset();
	    stdstring s1 = node->expr->genProgramCode();
	
	    node->code = s1 + "\n";
	
	    // std::cout << "Imprimiendo variable tipo: " << varTypes[node->expr->place] << " ubicada en la memoria: " << node->expr->place << std::endl;
	    if (varTypes[node->expr->place] == "BOOLEANO") {
	        node->code += "\n\tmov eax, " + node->expr->place;
	        node->code += "\n\tcmp eax, 1";
	        node->code += "\n\tje verdadero" + std::to_string(offset);
	        node->code += insertTempString("Falso");
	        node->code += "\n\tjmp cprint" + std::to_string(offset);
	        node->code += "\nverdadero" + std::to_string(offset) + ":";
	        node->code += insertTempString("Verdadero");
	        node->code += "\ncprint" + std::to_string(offset) + ":";
	        node->code += "\n\tmov eax, 4";
	        node->code += "\n\tlea ebx, [0x"+std::to_string(baseMem)+"]";
	        node->code += "\n\tint 0x80";
	    } else if (varTypes[node->expr->place] == "CARACTER") {
	        node->code += "\n\tmov eax, 11";
	        node->code += "\n\tmov ebx," + node->expr->place;
	        node->code += "\n\tint 0x80";
	    } else {
	        node->code += "\n\tmov eax, 1";
	        node->code += "\n\tmov ebx, " + node->expr->place;
	        node->code += "\n\tint 0x80";
	    }
	
	    node->code += "\n\tmov eax, 11";
	    node->code += "\n\tmov ebx, 10";
	    node->code += "\n\tint 0x80";
	    
	    return node->code;
	}
#line 1800 "ExprAst.cpp"
}

int PrintExprStmt::isA(int kind) const
{
	if(kind == PrintExprStmt_kind)
		return 1;
	else
		return Stmt::isA(kind);
}

const char *PrintExprStmt::getKindName() const
{
	return "PrintExprStmt";
}

PrintChStmt::PrintChStmt(Expr * expr)
	: Stmt()
{
	this->kind__ = PrintChStmt_kind;
	this->expr = expr;
}

PrintChStmt::~PrintChStmt()
{
	// not used
}

stdstring PrintChStmt::genProgramCode()
{
	PrintChStmt *node = this;
#line 596 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprAst.tc"
	{
	    stdstring s1 = node->expr->genProgramCode();
	
	    node->code = s1 + "\n"; 
	    
	    // std::cout << "Esto es lo que viene en el char: " << node->expr->place << std::endl;
	
	    node->code += "\n\tmov eax, 11";
	    node->code += "\n\tmov ebx," + node->expr->place;
	    node->code += "\n\tint 0x80";
	
	    node->code += "\n\tmov eax, 11";
	    node->code += "\n\tmov ebx, 10";
	    node->code += "\n\tint 0x80";
	    
	
	    return node->code;
	}
#line 1850 "ExprAst.cpp"
}

int PrintChStmt::isA(int kind) const
{
	if(kind == PrintChStmt_kind)
		return 1;
	else
		return Stmt::isA(kind);
}

const char *PrintChStmt::getKindName() const
{
	return "PrintChStmt";
}

PrintStrStmt::PrintStrStmt(Expr * expr)
	: Stmt()
{
	this->kind__ = PrintStrStmt_kind;
	this->expr = expr;
}

PrintStrStmt::~PrintStrStmt()
{
	// not used
}

stdstring PrintStrStmt::genProgramCode()
{
	PrintStrStmt *node = this;
#line 615 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprAst.tc"
	{
	    stdstring s1 = node->expr->genProgramCode();
	
	    node->code = s1 + "\n"; 
	    
	    // std::cout << "Esto es lo que viene en el string: " << node->expr->place << std::endl;
	
	    node->code += insertTempString(node->expr->place);
	    node->code += "\n\tmov eax, 4";
	    node->code += "\n\tlea ebx, [0x"+std::to_string(baseMem)+"]";
	    node->code += "\n\tint 0x80";
	
	    node->code += "\n\tmov eax, 11";
	    node->code += "\n\tmov ebx, 10";
	    node->code += "\n\tint 0x80";
	    
	
	    return node->code;
	}
#line 1901 "ExprAst.cpp"
}

int PrintStrStmt::isA(int kind) const
{
	if(kind == PrintStrStmt_kind)
		return 1;
	else
		return Stmt::isA(kind);
}

const char *PrintStrStmt::getKindName() const
{
	return "PrintStrStmt";
}

IfStmt::IfStmt(Expr * cond, Stmt * stmt1, Stmt * stmt2)
	: Stmt()
{
	this->kind__ = IfStmt_kind;
	this->cond = cond;
	this->stmt1 = stmt1;
	this->stmt2 = stmt2;
}

IfStmt::~IfStmt()
{
	// not used
}

stdstring IfStmt::genProgramCode()
{
	IfStmt *node = this;
#line 635 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprAst.tc"
	{
	    int offset = addOffset();
	    stdstring cond = node->cond->genProgramCode();
	    stdstring s1 = node->stmt1->genProgramCode();
	    stdstring s2 = "";
	    if (node->stmt2 != nullptr) {
	        s2 = node->stmt2->genProgramCode();
	    }
	    
	    if (dynamic_cast<IdExpr*>(node->cond) != 0 && varTypes[node->cond->place] != "BOOLEANO") {
	        stdstring varName = "";
	        for (auto const& i : variables) {
	            if (i.second == node->cond->place) 
	                varName = i.first;
	        }
	        throw std::runtime_error("La variable "+varName+" no es de tipo booleano");
	    }
	
	    node->code = cond + "\n";
	
	    node->code += "\n\tmov ecx, 1";
	    node->code += "\n\tcmp ecx, " + node->cond->place;
	    node->code += "\n\tjne false"+std::to_string(offset);
	    node->code += "\n" + s1 + "\n\tjmp endif"+std::to_string(offset);
	    node->code += "\n\nfalse"+std::to_string(offset)+":";
	    node->code += s2 ;
	    node->code += "\n\nendif"+std::to_string(offset)+":";
	
	    return node->code;
	}
#line 1965 "ExprAst.cpp"
}

int IfStmt::isA(int kind) const
{
	if(kind == IfStmt_kind)
		return 1;
	else
		return Stmt::isA(kind);
}

const char *IfStmt::getKindName() const
{
	return "IfStmt";
}

ElseIfStmt::ElseIfStmt(Expr * cond, Stmt * stmt)
	: Stmt()
{
	this->kind__ = ElseIfStmt_kind;
	this->cond = cond;
	this->stmt = stmt;
}

ElseIfStmt::~ElseIfStmt()
{
	// not used
}

stdstring ElseIfStmt::genProgramCode()
{
	ElseIfStmt *node = this;
#line 666 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprAst.tc"
	{
	    stdstring cond = node->cond->genProgramCode();
	    stdstring s = node->stmt->genProgramCode();
	
	    node->code = cond + "\n";
	
	    node->code += "\n\tmov ecx, 1";
	    node->code += "\n\tcmp ecx, " + node->cond->place;
	    node->code += "\n\tjne endelif"+std::to_string(offset);
	    node->code += "\n" + s;
	    node->code += "\n\nendelif"+std::to_string(offset)+":";
	
	    return node->code;
	}
#line 2012 "ExprAst.cpp"
}

int ElseIfStmt::isA(int kind) const
{
	if(kind == ElseIfStmt_kind)
		return 1;
	else
		return Stmt::isA(kind);
}

const char *ElseIfStmt::getKindName() const
{
	return "ElseIfStmt";
}

AssignStmt::AssignStmt(IdExpr * varName, Expr * value)
	: Stmt()
{
	this->kind__ = AssignStmt_kind;
	this->varName = varName;
	this->value = value;
}

AssignStmt::~AssignStmt()
{
	// not used
}

stdstring AssignStmt::genProgramCode()
{
	AssignStmt *node = this;
#line 797 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprAst.tc"
	{
	    int pre_offset = offset;
	    // std::cout << "Escribiendo en assign: " << node->value->place << std::endl;
	    stdstring expr = node->value->genProgramCode();
	    // variables[node->varName->id] = std::stoi(node->value->place);
	
	    // if (varTypes[node->varName->id] == BoolVarExpr)
	    // std::cout << varTypes[variables[node->varName->id]] << std::endl;
	    // std::cout << dynamic_cast<Expr*>(node->value) << std::endl;
	    if (varTypes[variables[node->varName->id]].empty()) {
	        throw std::runtime_error("La variable "+node->varName->id+" no ha sido declarada");
	    }
	
	    if (dynamic_cast<CharExpr*>(node->value) != 0 && varTypes[variables[node->varName->id]] != "CARACTER") {
	        throw std::runtime_error("La variable "+node->varName->id+" no es de tipo caracter");
	    } else if (dynamic_cast<BoolVarExpr*>(node->value) != 0 && varTypes[variables[node->varName->id]] != "BOOLEANO") {
	        throw std::runtime_error("La variable "+node->varName->id+" no es de tipo booleano");
	    } else if (!(dynamic_cast<CharExpr*>(node->value) != 0 || dynamic_cast<BoolVarExpr*>(node->value) != 0) &&
	    dynamic_cast<Expr*>(node->value) != 0 && varTypes[variables[node->varName->id]] != "ENTERO") {
	        throw std::runtime_error("La variable "+node->varName->id+" no es de tipo entero");
	    }
	    
	
	    node->code = expr + "\n";
	
	    if (node->value->place.at(0) == 'd') {
	        node->code += "\tmov eax, " + node->value->place + "\n";
	        node->code += "\tmov " + variables[node->varName->id] + ", eax";
	    } else {
	        node->code += "\tmov " + variables[node->varName->id] + ", " + node->value->place;
	    }
	
	    node->place = variables[node->varName->id];
	
	    setOffset(pre_offset);
	    return node->code;
	}
#line 2082 "ExprAst.cpp"
}

int AssignStmt::isA(int kind) const
{
	if(kind == AssignStmt_kind)
		return 1;
	else
		return Stmt::isA(kind);
}

const char *AssignStmt::getKindName() const
{
	return "AssignStmt";
}

WhileStmt::WhileStmt(Expr * cond, Stmt * block)
	: Stmt()
{
	this->kind__ = WhileStmt_kind;
	this->cond = cond;
	this->block = block;
}

WhileStmt::~WhileStmt()
{
	// not used
}

stdstring WhileStmt::genProgramCode()
{
	WhileStmt *node = this;
#line 681 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprAst.tc"
	{
	    int offset = addOffset();
	
	    stdstring cond = node->cond->genProgramCode();
	    stdstring block = node->block->genProgramCode();
	
	
	    node->code = "\nwhile" + std::to_string(offset) + ":";
	    node->code += cond;
	    node->code += "\n\tmov ecx, 1";
	    node->code += "\n\tcmp ecx, " + node->cond->place;
	    node->code += "\n\tjne endwhile" + std::to_string(offset);
	    node->code += block + "\n\tjmp while" + std::to_string(offset);
	    node->code += "\nendwhile" + std::to_string(offset) + ":";
	
	    return node->code;
	}
#line 2132 "ExprAst.cpp"
}

int WhileStmt::isA(int kind) const
{
	if(kind == WhileStmt_kind)
		return 1;
	else
		return Stmt::isA(kind);
}

const char *WhileStmt::getKindName() const
{
	return "WhileStmt";
}

DWhileStmt::DWhileStmt(Expr * cond, Stmt * block)
	: Stmt()
{
	this->kind__ = DWhileStmt_kind;
	this->cond = cond;
	this->block = block;
}

DWhileStmt::~DWhileStmt()
{
	// not used
}

stdstring DWhileStmt::genProgramCode()
{
	DWhileStmt *node = this;
#line 699 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprAst.tc"
	{
	    int offset = addOffset();
	
	    stdstring cond = node->cond->genProgramCode();
	    stdstring block = node->block->genProgramCode();
	
	    node->code += "\ndwhile" + std::to_string(offset) + ":";
	    node->code += block + "\n" +cond;
	    node->code += "\n\tmov ecx, 1";
	    node->code += "\n\tcmp ecx, " + node->cond->place;
	    node->code += "\n\tjne dwhile" + std::to_string(offset);
	    node->code += "\n\tjmp enddwhile" + std::to_string(offset);
	    node->code += "\nenddwhile" + std::to_string(offset) + ":";
	
	    return node->code;
	}
#line 2181 "ExprAst.cpp"
}

int DWhileStmt::isA(int kind) const
{
	if(kind == DWhileStmt_kind)
		return 1;
	else
		return Stmt::isA(kind);
}

const char *DWhileStmt::getKindName() const
{
	return "DWhileStmt";
}

ForStmt::ForStmt(AssignStmt * var, Expr * cond, Stmt * block)
	: Stmt()
{
	this->kind__ = ForStmt_kind;
	this->var = var;
	this->cond = cond;
	this->block = block;
}

ForStmt::~ForStmt()
{
	// not used
}

stdstring ForStmt::genProgramCode()
{
	ForStmt *node = this;
#line 716 "/mnt/c/Users/carlo/OneDrive/Documentos/GitHub/Compiladores-II/LPP_Proyecto_Carlos_Nunez/ExprAst.tc"
	{
	    int offset = addOffset();
	
	    stdstring assign = node->var->genProgramCode();
	    stdstring cond = node->cond->genProgramCode();
	    stdstring block = node->block->genProgramCode();
	
	    node->code = assign;
	
	    node->code += "\nfor" + std::to_string(offset) + ":";
	    node->code += "\n\tmov ecx, " + node->var->place;
	    node->code += "\n\tcmp ecx, " + node->cond->place;
	    node->code += "\n\tjg endfor" + std::to_string(offset);
	    node->code += block;
	    node->code += "\n\tadd " + node->var->place + ", 1";
	    node->code +="\n\tjmp for" + std::to_string(offset);
	    node->code += "\nendfor" + std::to_string(offset) + ":";
	
	    return node->code;
	}
#line 2235 "ExprAst.cpp"
}

int ForStmt::isA(int kind) const
{
	if(kind == ForStmt_kind)
		return 1;
	else
		return Stmt::isA(kind);
}

const char *ForStmt::getKindName() const
{
	return "ForStmt";
}

