friend struct SFWQuery *makeQueryWithGroupBy (struct ValueList *selectClause, struct FromList *fromClause, 
	struct CNF *cnf, struct ValueList *grouping);
friend struct SFWQuery *makeQuery (struct ValueList *selectClause, struct FromList *fromClause, struct CNF *cnf);
friend struct SFWQuery *makeQueryNoWhere (struct ValueList *selectClause, struct FromList *fromClause);
friend struct SQLStatement *makeSelectQuery (struct SFWQuery *fromMe);
friend struct SQLStatement *makeCreateTable (struct CreateTable *fromMe);
friend struct CreateTable *makeTableRegular (char *tableName, struct AttList *fromMe);
friend struct CreateTable *makeTableBPlusTree (char *tableName, struct AttList *fromMe, char *attName);
friend struct AttList *makeAttList (char *attName, int whichType);
friend struct FromList *makeFromList (char *tableName, char *aliasName);
friend struct FromList *appendFromList (struct FromList *appendToMe, char *tableName, char *aliasName);
friend struct AttList *appendAttList (struct AttList *appendToMe, struct AttList *appendMe);
friend struct Value *nott (struct Value *ofMe);
friend struct Value *orr (struct Value *lhs, struct Value *rhs);
friend struct Value *gt (struct Value *lhs, struct Value *rhs);
friend struct Value *lt (struct Value *lhs, struct Value *rhs);
friend struct Value *neq (struct Value *lhs, struct Value *rhs);
friend struct Value *eq (struct Value *lhs, struct Value *rhs);
friend struct Value *sum (struct Value *ofMe);
friend struct Value *avg (struct Value *ofMe);
friend struct Value *times (struct Value *lhs, struct Value *rhs);
friend struct Value *plus (struct Value *lhs, struct Value *rhs);
friend struct Value *divide (struct Value *lhs, struct Value *rhs);
friend struct Value *minus (struct Value *lhs, struct Value *rhs);
friend struct Value *unaryMinus (struct Value *toMe);
friend struct Value *makeIdentifier (char *tableName, char *attName);
friend struct Value *makeDouble (double fromMe);
friend struct Value *makeInt (int fromMe);
friend struct Value *makeString (char *fromMe);
friend struct ValueList *pushBackValue (struct ValueList *addToMe, struct Value *addMe);
friend struct ValueList *makeValueList (struct Value *addMe);
friend struct CNF *makeCNF (struct Value *fromMe);
friend struct CNF *pushBackDisjunction (struct CNF *ontoMe, struct Value *pushMe);
