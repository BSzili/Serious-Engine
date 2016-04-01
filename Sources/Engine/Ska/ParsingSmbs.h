/* Copyright (c) 2002-2012 Croteam Ltd. All rights reserved. */

// needed for parser and scanner
extern int engine_ska_yylex(void);
extern void engine_ska_yyerror(char *s);
extern int engine_ska_yyparse(void);
extern void engine_ska_yyrestart(FILE *f);

#define YY_NEVER_INTERACTIVE 1

#define SMC_MAX_INCLUDE_LEVEL 32
// temporary values for parsing
extern INDEX _yy_iIndex;
extern CModelInstance *_yy_mi;

void SMCPushBuffer(const char *strName, const char *strBuffer, BOOL bParserEnd);
BOOL SMCPopBuffer(void);
const char *SMCGetBufferName(void);
int SMCGetBufferLineNumber(void);
const char *SMCGetBufferContents(void);
int SMCGetBufferStackDepth(void);

void SMCCountOneLine(void);
