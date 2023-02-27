/*
 *-----------------------------------------------------------------------------
 *
 * ../generic/odbcStubs.h --
 *
 *	Stubs for procedures in odbcStubDefs.txt
 *
 * Generated by genExtStubs.tcl: DO NOT EDIT
 * 2017-06-05 16:16:37Z
 *
 *-----------------------------------------------------------------------------
 */

typedef struct odbcStubDefs {

    /* Functions from libraries: odbc32 odbc libodbc32 libodbc */

    SQLRETURN (SQL_API*SQLAllocHandlePtr)(SQLSMALLINT,SQLHANDLE,SQLHANDLE*);
    SQLRETURN (SQL_API*SQLBindParameterPtr)(SQLHSTMT,SQLUSMALLINT,SQLSMALLINT,SQLSMALLINT,SQLSMALLINT,SQLULEN,SQLSMALLINT,SQLPOINTER,SQLLEN,SQLLEN*);
    SQLRETURN (SQL_API*SQLCloseCursorPtr)(SQLHSTMT);
    SQLRETURN (SQL_API*SQLColumnsWPtr)(SQLHSTMT,SQLWCHAR*,SQLSMALLINT,SQLWCHAR*,SQLSMALLINT,SQLWCHAR*,SQLSMALLINT ,SQLWCHAR*,SQLSMALLINT );
    SQLRETURN (SQL_API*SQLDataSourcesWPtr)(SQLHENV,SQLUSMALLINT,SQLWCHAR*,SQLSMALLINT,SQLSMALLINT*,SQLWCHAR*,SQLSMALLINT,SQLSMALLINT*);
    SQLRETURN (SQL_API*SQLDescribeColWPtr)(SQLHSTMT,SQLUSMALLINT,SQLWCHAR*,SQLSMALLINT,SQLSMALLINT*,SQLSMALLINT*,SQLULEN*,SQLSMALLINT*,SQLSMALLINT*);
    SQLRETURN (SQL_API*SQLDescribeParamPtr)(SQLHSTMT,SQLUSMALLINT,SQLSMALLINT*,SQLULEN*,SQLSMALLINT*,SQLSMALLINT*);
    SQLRETURN (SQL_API*SQLDisconnectPtr)(SQLHDBC);
    SQLRETURN (SQL_API*SQLDriverConnectWPtr)(SQLHDBC,SQLHWND,SQLWCHAR*,SQLSMALLINT,SQLWCHAR*,SQLSMALLINT,SQLSMALLINT*,SQLUSMALLINT);
    SQLRETURN (SQL_API*SQLDriversWPtr)(SQLHENV,SQLUSMALLINT,SQLWCHAR*,SQLSMALLINT,SQLSMALLINT*,SQLWCHAR*,SQLSMALLINT,SQLSMALLINT*);
    SQLRETURN (SQL_API*SQLEndTranPtr)(SQLSMALLINT,SQLHANDLE,SQLSMALLINT);
    SQLRETURN (SQL_API*SQLExecutePtr)(SQLHSTMT);
    SQLRETURN (SQL_API*SQLFetchPtr)(SQLHSTMT);
    SQLRETURN (SQL_API*SQLForeignKeysWPtr)(SQLHSTMT,SQLWCHAR*,SQLSMALLINT,SQLWCHAR*,SQLSMALLINT,SQLWCHAR*,SQLSMALLINT,SQLWCHAR*,SQLSMALLINT,SQLWCHAR*,SQLSMALLINT,SQLWCHAR*,SQLSMALLINT);
    SQLRETURN (SQL_API*SQLFreeHandlePtr)(SQLSMALLINT,SQLHANDLE);
    SQLRETURN (SQL_API*SQLGetConnectAttrPtr)(SQLHDBC,SQLINTEGER,SQLPOINTER,SQLINTEGER,SQLINTEGER*);
    SQLRETURN (SQL_API*SQLGetDataPtr)(SQLHSTMT,SQLUSMALLINT,SQLSMALLINT,SQLPOINTER,SQLLEN,SQLLEN*);
    SQLRETURN (SQL_API*SQLGetDiagFieldAPtr)(SQLSMALLINT,SQLHANDLE,SQLSMALLINT,SQLSMALLINT,SQLPOINTER,SQLSMALLINT,SQLSMALLINT*);
    SQLRETURN (SQL_API*SQLGetDiagRecWPtr)(SQLSMALLINT,SQLHANDLE,SQLSMALLINT,SQLWCHAR*,SQLINTEGER*,SQLWCHAR*,SQLSMALLINT,SQLSMALLINT*);
    SQLRETURN (SQL_API*SQLGetTypeInfoPtr)(SQLHSTMT,SQLSMALLINT);
    SQLRETURN (SQL_API*SQLMoreResultsPtr)(SQLHSTMT);
    SQLRETURN (SQL_API*SQLNumParamsPtr)(SQLHSTMT,SQLSMALLINT*);
    SQLRETURN (SQL_API*SQLNumResultColsPtr)(SQLHSTMT,SQLSMALLINT*);
    SQLRETURN (SQL_API*SQLPrepareWPtr)(SQLHSTMT,SQLWCHAR*,SQLINTEGER);
    SQLRETURN (SQL_API*SQLPrimaryKeysWPtr)(SQLHSTMT,SQLWCHAR*,SQLSMALLINT,SQLWCHAR*,SQLSMALLINT,SQLWCHAR*,SQLSMALLINT);
    SQLRETURN (SQL_API*SQLRowCountPtr)(SQLHSTMT,SQLLEN*);
    SQLRETURN (SQL_API*SQLSetConnectAttrPtr)(SQLHDBC,SQLINTEGER,SQLPOINTER,SQLINTEGER);
    SQLRETURN (SQL_API*SQLSetConnectOptionPtr)(SQLHDBC,SQLUSMALLINT,SQLULEN);
    SQLRETURN (SQL_API*SQLSetEnvAttrPtr)(SQLHENV,SQLINTEGER,SQLPOINTER,SQLINTEGER);
    SQLRETURN (SQL_API*SQLTablesWPtr)(SQLHSTMT,SQLWCHAR*,SQLSMALLINT,SQLWCHAR*,SQLSMALLINT,SQLWCHAR*,SQLSMALLINT,SQLWCHAR*,SQLSMALLINT);
} odbcStubDefs;
#define SQLAllocHandle (odbcStubs->SQLAllocHandlePtr)
#define SQLBindParameter (odbcStubs->SQLBindParameterPtr)
#define SQLCloseCursor (odbcStubs->SQLCloseCursorPtr)
#define SQLColumnsW (odbcStubs->SQLColumnsWPtr)
#define SQLDataSourcesW (odbcStubs->SQLDataSourcesWPtr)
#define SQLDescribeColW (odbcStubs->SQLDescribeColWPtr)
#define SQLDescribeParam (odbcStubs->SQLDescribeParamPtr)
#define SQLDisconnect (odbcStubs->SQLDisconnectPtr)
#define SQLDriverConnectW (odbcStubs->SQLDriverConnectWPtr)
#define SQLDriversW (odbcStubs->SQLDriversWPtr)
#define SQLEndTran (odbcStubs->SQLEndTranPtr)
#define SQLExecute (odbcStubs->SQLExecutePtr)
#define SQLFetch (odbcStubs->SQLFetchPtr)
#define SQLForeignKeysW (odbcStubs->SQLForeignKeysWPtr)
#define SQLFreeHandle (odbcStubs->SQLFreeHandlePtr)
#define SQLGetConnectAttr (odbcStubs->SQLGetConnectAttrPtr)
#define SQLGetData (odbcStubs->SQLGetDataPtr)
#define SQLGetDiagFieldA (odbcStubs->SQLGetDiagFieldAPtr)
#define SQLGetDiagRecW (odbcStubs->SQLGetDiagRecWPtr)
#define SQLGetTypeInfo (odbcStubs->SQLGetTypeInfoPtr)
#define SQLMoreResults (odbcStubs->SQLMoreResultsPtr)
#define SQLNumParams (odbcStubs->SQLNumParamsPtr)
#define SQLNumResultCols (odbcStubs->SQLNumResultColsPtr)
#define SQLPrepareW (odbcStubs->SQLPrepareWPtr)
#define SQLPrimaryKeysW (odbcStubs->SQLPrimaryKeysWPtr)
#define SQLRowCount (odbcStubs->SQLRowCountPtr)
#define SQLSetConnectAttr (odbcStubs->SQLSetConnectAttrPtr)
#define SQLSetConnectOption (odbcStubs->SQLSetConnectOptionPtr)
#define SQLSetEnvAttr (odbcStubs->SQLSetEnvAttrPtr)
#define SQLTablesW (odbcStubs->SQLTablesWPtr)
MODULE_SCOPE const odbcStubDefs *odbcStubs;
