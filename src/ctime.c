/*
** 2010 February 23
**
** The author disclaims copyright to this source code.  In place of
** a legal notice, here is a blessing:
**
**    May you do good and not evil.
**    May you find forgiveness for yourself and forgive others.
**    May you share freely, never taking more than you give.
**
*************************************************************************
**
** This file implements routines used to report what compile-time options
** SQLite was built with.
*/
#ifndef SQLITE_OMIT_COMPILEOPTION_DIAGS /* IMP: R-16824-07538 */

/*
** Include the configuration header output by 'configure' if we're using the
** autoconf-based build
*/
#if defined(_HAVE_SQLITE_CONFIG_H) && !defined(SQLITECONFIG_H)
#include "config.h"
#define SQLITECONFIG_H 1
#endif

/* These macros are provided to "stringify" the value of the define
** for those options in which the value is meaningful. */
#define CTIMEOPT_VAL_(opt) #opt
#define CTIMEOPT_VAL(opt) CTIMEOPT_VAL_(opt)

/* Like CTIMEOPT_VAL, but especially for SQLITE_DEFAULT_LOOKASIDE. This
** option requires a separate macro because legal values contain a single
** comma. e.g. (-DSQLITE_DEFAULT_LOOKASIDE="100,100") */
#define CTIMEOPT_VAL2_(opt1,opt2) #opt1 "," #opt2
#define CTIMEOPT_VAL2(opt) CTIMEOPT_VAL2_(opt)
#include "sqliteInt.h"

/*
** An array of names of all compile-time options.  This array should 
** be sorted A-Z.
**
** This array looks large, but in a typical installation actually uses
** only a handful of compile-time options, so most times this array is usually
** rather short and uses little memory space.
*/
static const char * const sqlite3azCompileOpt[] = {

/* 
** BEGIN CODE GENERATED BY tool/mkctime.tcl 
*/
#ifdef SQLITE_32BIT_ROWID
  "32BIT_ROWID",
#endif
#ifdef SQLITE_4_BYTE_ALIGNED_MALLOC
  "4_BYTE_ALIGNED_MALLOC",
#endif
#ifdef SQLITE_64BIT_STATS
  "64BIT_STATS",
#endif
#ifdef SQLITE_ALLOW_COVERING_INDEX_SCAN
# if SQLITE_ALLOW_COVERING_INDEX_SCAN != 1
  "ALLOW_COVERING_INDEX_SCAN=" CTIMEOPT_VAL(SQLITE_ALLOW_COVERING_INDEX_SCAN),
# endif
#endif
#ifdef SQLITE_ALLOW_URI_AUTHORITY
  "ALLOW_URI_AUTHORITY",
#endif
#ifdef SQLITE_ATOMIC_INTRINSICS
  "ATOMIC_INTRINSICS=" CTIMEOPT_VAL(SQLITE_ATOMIC_INTRINSICS),
#endif
#ifdef SQLITE_BITMASK_TYPE
  "BITMASK_TYPE=" CTIMEOPT_VAL(SQLITE_BITMASK_TYPE),
#endif
#ifdef SQLITE_BUG_COMPATIBLE_20160819
  "BUG_COMPATIBLE_20160819",
#endif
#ifdef SQLITE_CASE_SENSITIVE_LIKE
  "CASE_SENSITIVE_LIKE",
#endif
#ifdef SQLITE_CHECK_PAGES
  "CHECK_PAGES",
#endif
#if defined(__clang__) && defined(__clang_major__)
  "COMPILER=clang-" CTIMEOPT_VAL(__clang_major__) "."
                    CTIMEOPT_VAL(__clang_minor__) "."
                    CTIMEOPT_VAL(__clang_patchlevel__),
#elif defined(_MSC_VER)
  "COMPILER=msvc-" CTIMEOPT_VAL(_MSC_VER),
#elif defined(__GNUC__) && defined(__VERSION__)
  "COMPILER=gcc-" __VERSION__,
#endif
#ifdef SQLITE_COVERAGE_TEST
  "COVERAGE_TEST",
#endif
#ifdef SQLITE_DEBUG
  "DEBUG",
#endif
#ifdef SQLITE_DEFAULT_AUTOMATIC_INDEX
  "DEFAULT_AUTOMATIC_INDEX",
#endif
#ifdef SQLITE_DEFAULT_AUTOVACUUM
  "DEFAULT_AUTOVACUUM",
#endif
#ifdef SQLITE_DEFAULT_CACHE_SIZE
  "DEFAULT_CACHE_SIZE=" CTIMEOPT_VAL(SQLITE_DEFAULT_CACHE_SIZE),
#endif
#ifdef SQLITE_DEFAULT_CKPTFULLFSYNC
  "DEFAULT_CKPTFULLFSYNC",
#endif
#ifdef SQLITE_DEFAULT_FILE_FORMAT
  "DEFAULT_FILE_FORMAT=" CTIMEOPT_VAL(SQLITE_DEFAULT_FILE_FORMAT),
#endif
#ifdef SQLITE_DEFAULT_FILE_PERMISSIONS
  "DEFAULT_FILE_PERMISSIONS=" CTIMEOPT_VAL(SQLITE_DEFAULT_FILE_PERMISSIONS),
#endif
#ifdef SQLITE_DEFAULT_FOREIGN_KEYS
  "DEFAULT_FOREIGN_KEYS",
#endif
#ifdef SQLITE_DEFAULT_JOURNAL_SIZE_LIMIT
  "DEFAULT_JOURNAL_SIZE_LIMIT=" CTIMEOPT_VAL(SQLITE_DEFAULT_JOURNAL_SIZE_LIMIT),
#endif
#ifdef SQLITE_DEFAULT_LOCKING_MODE
  "DEFAULT_LOCKING_MODE=" CTIMEOPT_VAL(SQLITE_DEFAULT_LOCKING_MODE),
#endif
#ifdef SQLITE_DEFAULT_LOOKASIDE
  "DEFAULT_LOOKASIDE=" CTIMEOPT_VAL2(SQLITE_DEFAULT_LOOKASIDE),
#endif
#ifdef SQLITE_DEFAULT_MEMSTATUS
# if SQLITE_DEFAULT_MEMSTATUS != 1
  "DEFAULT_MEMSTATUS=" CTIMEOPT_VAL(SQLITE_DEFAULT_MEMSTATUS),
# endif
#endif
#ifdef SQLITE_DEFAULT_MMAP_SIZE
  "DEFAULT_MMAP_SIZE=" CTIMEOPT_VAL(SQLITE_DEFAULT_MMAP_SIZE),
#endif
#ifdef SQLITE_DEFAULT_PAGE_SIZE
  "DEFAULT_PAGE_SIZE=" CTIMEOPT_VAL(SQLITE_DEFAULT_PAGE_SIZE),
#endif
#ifdef SQLITE_DEFAULT_PCACHE_INITSZ
  "DEFAULT_PCACHE_INITSZ=" CTIMEOPT_VAL(SQLITE_DEFAULT_PCACHE_INITSZ),
#endif
#ifdef SQLITE_DEFAULT_PROXYDIR_PERMISSIONS
  "DEFAULT_PROXYDIR_PERMISSIONS=" CTIMEOPT_VAL(SQLITE_DEFAULT_PROXYDIR_PERMISSIONS),
#endif
#ifdef SQLITE_DEFAULT_RECURSIVE_TRIGGERS
  "DEFAULT_RECURSIVE_TRIGGERS",
#endif
#ifdef SQLITE_DEFAULT_ROWEST
  "DEFAULT_ROWEST=" CTIMEOPT_VAL(SQLITE_DEFAULT_ROWEST),
#endif
#ifdef SQLITE_DEFAULT_SECTOR_SIZE
  "DEFAULT_SECTOR_SIZE=" CTIMEOPT_VAL(SQLITE_DEFAULT_SECTOR_SIZE),
#endif
#ifdef SQLITE_DEFAULT_SYNCHRONOUS
  "DEFAULT_SYNCHRONOUS=" CTIMEOPT_VAL(SQLITE_DEFAULT_SYNCHRONOUS),
#endif
#ifdef SQLITE_DEFAULT_WAL_AUTOCHECKPOINT
  "DEFAULT_WAL_AUTOCHECKPOINT=" CTIMEOPT_VAL(SQLITE_DEFAULT_WAL_AUTOCHECKPOINT),
#endif
#ifdef SQLITE_DEFAULT_WAL_SYNCHRONOUS
  "DEFAULT_WAL_SYNCHRONOUS=" CTIMEOPT_VAL(SQLITE_DEFAULT_WAL_SYNCHRONOUS),
#endif
#ifdef SQLITE_DEFAULT_WORKER_THREADS
  "DEFAULT_WORKER_THREADS=" CTIMEOPT_VAL(SQLITE_DEFAULT_WORKER_THREADS),
#endif
#ifdef SQLITE_DIRECT_OVERFLOW_READ
  "DIRECT_OVERFLOW_READ",
#endif
#ifdef SQLITE_DISABLE_DIRSYNC
  "DISABLE_DIRSYNC",
#endif
#ifdef SQLITE_DISABLE_FTS3_UNICODE
  "DISABLE_FTS3_UNICODE",
#endif
#ifdef SQLITE_DISABLE_FTS4_DEFERRED
  "DISABLE_FTS4_DEFERRED",
#endif
#ifdef SQLITE_DISABLE_INTRINSIC
  "DISABLE_INTRINSIC",
#endif
#ifdef SQLITE_DISABLE_LFS
  "DISABLE_LFS",
#endif
#ifdef SQLITE_DISABLE_PAGECACHE_OVERFLOW_STATS
  "DISABLE_PAGECACHE_OVERFLOW_STATS",
#endif
#ifdef SQLITE_DISABLE_SKIPAHEAD_DISTINCT
  "DISABLE_SKIPAHEAD_DISTINCT",
#endif
#ifdef SQLITE_ENABLE_8_3_NAMES
  "ENABLE_8_3_NAMES=" CTIMEOPT_VAL(SQLITE_ENABLE_8_3_NAMES),
#endif
#ifdef SQLITE_ENABLE_API_ARMOR
  "ENABLE_API_ARMOR",
#endif
#ifdef SQLITE_ENABLE_ATOMIC_WRITE
  "ENABLE_ATOMIC_WRITE",
#endif
#ifdef SQLITE_ENABLE_BATCH_ATOMIC_WRITE
  "ENABLE_BATCH_ATOMIC_WRITE",
#endif
#ifdef SQLITE_ENABLE_BYTECODE_VTAB
  "ENABLE_BYTECODE_VTAB",
#endif
#ifdef SQLITE_ENABLE_CEROD
  "ENABLE_CEROD=" CTIMEOPT_VAL(SQLITE_ENABLE_CEROD),
#endif
#ifdef SQLITE_ENABLE_COLUMN_METADATA
  "ENABLE_COLUMN_METADATA",
#endif
#ifdef SQLITE_ENABLE_COLUMN_USED_MASK
  "ENABLE_COLUMN_USED_MASK",
#endif
#ifdef SQLITE_ENABLE_COSTMULT
  "ENABLE_COSTMULT",
#endif
#ifdef SQLITE_ENABLE_CURSOR_HINTS
  "ENABLE_CURSOR_HINTS",
#endif
#ifdef SQLITE_ENABLE_DBPAGE_VTAB
  "ENABLE_DBPAGE_VTAB",
#endif
#ifdef SQLITE_ENABLE_DBSTAT_VTAB
  "ENABLE_DBSTAT_VTAB",
#endif
#ifdef SQLITE_ENABLE_EXPENSIVE_ASSERT
  "ENABLE_EXPENSIVE_ASSERT",
#endif
#ifdef SQLITE_ENABLE_EXPLAIN_COMMENTS
  "ENABLE_EXPLAIN_COMMENTS",
#endif
#ifdef SQLITE_ENABLE_FTS3
  "ENABLE_FTS3",
#endif
#ifdef SQLITE_ENABLE_FTS3_PARENTHESIS
  "ENABLE_FTS3_PARENTHESIS",
#endif
#ifdef SQLITE_ENABLE_FTS3_TOKENIZER
  "ENABLE_FTS3_TOKENIZER",
#endif
#ifdef SQLITE_ENABLE_FTS4
  "ENABLE_FTS4",
#endif
#ifdef SQLITE_ENABLE_FTS5
  "ENABLE_FTS5",
#endif
#ifdef SQLITE_ENABLE_GEOPOLY
  "ENABLE_GEOPOLY",
#endif
#ifdef SQLITE_ENABLE_HIDDEN_COLUMNS
  "ENABLE_HIDDEN_COLUMNS",
#endif
#ifdef SQLITE_ENABLE_ICU
  "ENABLE_ICU",
#endif
#ifdef SQLITE_ENABLE_IOTRACE
  "ENABLE_IOTRACE",
#endif
#ifdef SQLITE_ENABLE_JSON1
  "ENABLE_JSON1",
#endif
#ifdef SQLITE_ENABLE_LOAD_EXTENSION
  "ENABLE_LOAD_EXTENSION",
#endif
#ifdef SQLITE_ENABLE_LOCKING_STYLE
  "ENABLE_LOCKING_STYLE=" CTIMEOPT_VAL(SQLITE_ENABLE_LOCKING_STYLE),
#endif
#ifdef SQLITE_ENABLE_MATH_FUNCTIONS
  "ENABLE_MATH_FUNCTIONS",
#endif
#ifdef SQLITE_ENABLE_MEMORY_MANAGEMENT
  "ENABLE_MEMORY_MANAGEMENT",
#endif
#ifdef SQLITE_ENABLE_MEMSYS3
  "ENABLE_MEMSYS3",
#endif
#ifdef SQLITE_ENABLE_MEMSYS5
  "ENABLE_MEMSYS5",
#endif
#ifdef SQLITE_ENABLE_MULTIPLEX
  "ENABLE_MULTIPLEX",
#endif
#ifdef SQLITE_ENABLE_NORMALIZE
  "ENABLE_NORMALIZE",
#endif
#ifdef SQLITE_ENABLE_NULL_TRIM
  "ENABLE_NULL_TRIM",
#endif
#ifdef SQLITE_ENABLE_OFFSET_SQL_FUNC
  "ENABLE_OFFSET_SQL_FUNC",
#endif
#ifdef SQLITE_ENABLE_OVERSIZE_CELL_CHECK
  "ENABLE_OVERSIZE_CELL_CHECK",
#endif
#ifdef SQLITE_ENABLE_PREUPDATE_HOOK
  "ENABLE_PREUPDATE_HOOK",
#endif
#ifdef SQLITE_ENABLE_QPSG
  "ENABLE_QPSG",
#endif
#ifdef SQLITE_ENABLE_RBU
  "ENABLE_RBU",
#endif
#ifdef SQLITE_ENABLE_RTREE
  "ENABLE_RTREE",
#endif
#ifdef SQLITE_ENABLE_SELECTTRACE
  "ENABLE_SELECTTRACE",
#endif
#ifdef SQLITE_ENABLE_SESSION
  "ENABLE_SESSION",
#endif
#ifdef SQLITE_ENABLE_SNAPSHOT
  "ENABLE_SNAPSHOT",
#endif
#ifdef SQLITE_ENABLE_SORTER_REFERENCES
  "ENABLE_SORTER_REFERENCES",
#endif
#ifdef SQLITE_ENABLE_SQLLOG
  "ENABLE_SQLLOG",
#endif
#ifdef SQLITE_ENABLE_STAT4
  "ENABLE_STAT4",
#endif
#ifdef SQLITE_ENABLE_STMTVTAB
  "ENABLE_STMTVTAB",
#endif
#ifdef SQLITE_ENABLE_STMT_SCANSTATUS
  "ENABLE_STMT_SCANSTATUS",
#endif
#ifdef SQLITE_ENABLE_UNKNOWN_SQL_FUNCTION
  "ENABLE_UNKNOWN_SQL_FUNCTION",
#endif
#ifdef SQLITE_ENABLE_UNLOCK_NOTIFY
  "ENABLE_UNLOCK_NOTIFY",
#endif
#ifdef SQLITE_ENABLE_UPDATE_DELETE_LIMIT
  "ENABLE_UPDATE_DELETE_LIMIT",
#endif
#ifdef SQLITE_ENABLE_URI_00_ERROR
  "ENABLE_URI_00_ERROR",
#endif
#ifdef SQLITE_ENABLE_VFSTRACE
  "ENABLE_VFSTRACE",
#endif
#ifdef SQLITE_ENABLE_WHERETRACE
  "ENABLE_WHERETRACE",
#endif
#ifdef SQLITE_ENABLE_ZIPVFS
  "ENABLE_ZIPVFS",
#endif
#ifdef SQLITE_EXPLAIN_ESTIMATED_ROWS
  "EXPLAIN_ESTIMATED_ROWS",
#endif
#ifdef SQLITE_EXTRA_IFNULLROW
  "EXTRA_IFNULLROW",
#endif
#ifdef SQLITE_EXTRA_INIT
  "EXTRA_INIT=" CTIMEOPT_VAL(SQLITE_EXTRA_INIT),
#endif
#ifdef SQLITE_EXTRA_SHUTDOWN
  "EXTRA_SHUTDOWN=" CTIMEOPT_VAL(SQLITE_EXTRA_SHUTDOWN),
#endif
#ifdef SQLITE_FTS3_MAX_EXPR_DEPTH
  "FTS3_MAX_EXPR_DEPTH=" CTIMEOPT_VAL(SQLITE_FTS3_MAX_EXPR_DEPTH),
#endif
#ifdef SQLITE_FTS5_ENABLE_TEST_MI
  "FTS5_ENABLE_TEST_MI",
#endif
#ifdef SQLITE_FTS5_NO_WITHOUT_ROWID
  "FTS5_NO_WITHOUT_ROWID",
#endif
/* BEGIN SQLCIPHER */
#if SQLITE_HAS_CODEC
  "HAS_CODEC",
#endif
/* END SQLCIPHER */
#if HAVE_ISNAN || SQLITE_HAVE_ISNAN
  "HAVE_ISNAN",
#endif
#ifdef SQLITE_HOMEGROWN_RECURSIVE_MUTEX
# if SQLITE_HOMEGROWN_RECURSIVE_MUTEX != 1
  "HOMEGROWN_RECURSIVE_MUTEX=" CTIMEOPT_VAL(SQLITE_HOMEGROWN_RECURSIVE_MUTEX),
# endif
#endif
#ifdef SQLITE_IGNORE_AFP_LOCK_ERRORS
  "IGNORE_AFP_LOCK_ERRORS",
#endif
#ifdef SQLITE_IGNORE_FLOCK_LOCK_ERRORS
  "IGNORE_FLOCK_LOCK_ERRORS",
#endif
#ifdef SQLITE_INLINE_MEMCPY
  "INLINE_MEMCPY",
#endif
#ifdef SQLITE_INT64_TYPE
  "INT64_TYPE",
#endif
#ifdef SQLITE_INTEGRITY_CHECK_ERROR_MAX
  "INTEGRITY_CHECK_ERROR_MAX=" CTIMEOPT_VAL(SQLITE_INTEGRITY_CHECK_ERROR_MAX),
#endif
#ifdef SQLITE_LIKE_DOESNT_MATCH_BLOBS
  "LIKE_DOESNT_MATCH_BLOBS",
#endif
#ifdef SQLITE_LOCK_TRACE
  "LOCK_TRACE",
#endif
#ifdef SQLITE_LOG_CACHE_SPILL
  "LOG_CACHE_SPILL",
#endif
#ifdef SQLITE_MALLOC_SOFT_LIMIT
  "MALLOC_SOFT_LIMIT=" CTIMEOPT_VAL(SQLITE_MALLOC_SOFT_LIMIT),
#endif
#ifdef SQLITE_MAX_ATTACHED
  "MAX_ATTACHED=" CTIMEOPT_VAL(SQLITE_MAX_ATTACHED),
#endif
#ifdef SQLITE_MAX_COLUMN
  "MAX_COLUMN=" CTIMEOPT_VAL(SQLITE_MAX_COLUMN),
#endif
#ifdef SQLITE_MAX_COMPOUND_SELECT
  "MAX_COMPOUND_SELECT=" CTIMEOPT_VAL(SQLITE_MAX_COMPOUND_SELECT),
#endif
#ifdef SQLITE_MAX_DEFAULT_PAGE_SIZE
  "MAX_DEFAULT_PAGE_SIZE=" CTIMEOPT_VAL(SQLITE_MAX_DEFAULT_PAGE_SIZE),
#endif
#ifdef SQLITE_MAX_EXPR_DEPTH
  "MAX_EXPR_DEPTH=" CTIMEOPT_VAL(SQLITE_MAX_EXPR_DEPTH),
#endif
#ifdef SQLITE_MAX_FUNCTION_ARG
  "MAX_FUNCTION_ARG=" CTIMEOPT_VAL(SQLITE_MAX_FUNCTION_ARG),
#endif
#ifdef SQLITE_MAX_LENGTH
  "MAX_LENGTH=" CTIMEOPT_VAL(SQLITE_MAX_LENGTH),
#endif
#ifdef SQLITE_MAX_LIKE_PATTERN_LENGTH
  "MAX_LIKE_PATTERN_LENGTH=" CTIMEOPT_VAL(SQLITE_MAX_LIKE_PATTERN_LENGTH),
#endif
#ifdef SQLITE_MAX_MEMORY
  "MAX_MEMORY=" CTIMEOPT_VAL(SQLITE_MAX_MEMORY),
#endif
#ifdef SQLITE_MAX_MMAP_SIZE
  "MAX_MMAP_SIZE=" CTIMEOPT_VAL(SQLITE_MAX_MMAP_SIZE),
#endif
#ifdef SQLITE_MAX_MMAP_SIZE_
  "MAX_MMAP_SIZE_=" CTIMEOPT_VAL(SQLITE_MAX_MMAP_SIZE_),
#endif
#ifdef SQLITE_MAX_PAGE_COUNT
  "MAX_PAGE_COUNT=" CTIMEOPT_VAL(SQLITE_MAX_PAGE_COUNT),
#endif
#ifdef SQLITE_MAX_PAGE_SIZE
  "MAX_PAGE_SIZE=" CTIMEOPT_VAL(SQLITE_MAX_PAGE_SIZE),
#endif
#ifdef SQLITE_MAX_SCHEMA_RETRY
  "MAX_SCHEMA_RETRY=" CTIMEOPT_VAL(SQLITE_MAX_SCHEMA_RETRY),
#endif
#ifdef SQLITE_MAX_SQL_LENGTH
  "MAX_SQL_LENGTH=" CTIMEOPT_VAL(SQLITE_MAX_SQL_LENGTH),
#endif
#ifdef SQLITE_MAX_TRIGGER_DEPTH
  "MAX_TRIGGER_DEPTH=" CTIMEOPT_VAL(SQLITE_MAX_TRIGGER_DEPTH),
#endif
#ifdef SQLITE_MAX_VARIABLE_NUMBER
  "MAX_VARIABLE_NUMBER=" CTIMEOPT_VAL(SQLITE_MAX_VARIABLE_NUMBER),
#endif
#ifdef SQLITE_MAX_VDBE_OP
  "MAX_VDBE_OP=" CTIMEOPT_VAL(SQLITE_MAX_VDBE_OP),
#endif
#ifdef SQLITE_MAX_WORKER_THREADS
  "MAX_WORKER_THREADS=" CTIMEOPT_VAL(SQLITE_MAX_WORKER_THREADS),
#endif
#ifdef SQLITE_MEMDEBUG
  "MEMDEBUG",
#endif
#ifdef SQLITE_MIXED_ENDIAN_64BIT_FLOAT
  "MIXED_ENDIAN_64BIT_FLOAT",
#endif
#ifdef SQLITE_MMAP_READWRITE
  "MMAP_READWRITE",
#endif
#ifdef SQLITE_MUTEX_NOOP
  "MUTEX_NOOP",
#endif
#ifdef SQLITE_MUTEX_OMIT
  "MUTEX_OMIT",
#endif
#ifdef SQLITE_MUTEX_PTHREADS
  "MUTEX_PTHREADS",
#endif
#ifdef SQLITE_MUTEX_W32
  "MUTEX_W32",
#endif
#ifdef SQLITE_NEED_ERR_NAME
  "NEED_ERR_NAME",
#endif
#ifdef SQLITE_NO_SYNC
  "NO_SYNC",
#endif
#ifdef SQLITE_OMIT_ALTERTABLE
  "OMIT_ALTERTABLE",
#endif
#ifdef SQLITE_OMIT_ANALYZE
  "OMIT_ANALYZE",
#endif
#ifdef SQLITE_OMIT_ATTACH
  "OMIT_ATTACH",
#endif
#ifdef SQLITE_OMIT_AUTHORIZATION
  "OMIT_AUTHORIZATION",
#endif
#ifdef SQLITE_OMIT_AUTOINCREMENT
  "OMIT_AUTOINCREMENT",
#endif
#ifdef SQLITE_OMIT_AUTOINIT
  "OMIT_AUTOINIT",
#endif
#ifdef SQLITE_OMIT_AUTOMATIC_INDEX
  "OMIT_AUTOMATIC_INDEX",
#endif
#ifdef SQLITE_OMIT_AUTORESET
  "OMIT_AUTORESET",
#endif
#ifdef SQLITE_OMIT_AUTOVACUUM
  "OMIT_AUTOVACUUM",
#endif
#ifdef SQLITE_OMIT_BETWEEN_OPTIMIZATION
  "OMIT_BETWEEN_OPTIMIZATION",
#endif
#ifdef SQLITE_OMIT_BLOB_LITERAL
  "OMIT_BLOB_LITERAL",
#endif
#ifdef SQLITE_OMIT_CAST
  "OMIT_CAST",
#endif
#ifdef SQLITE_OMIT_CHECK
  "OMIT_CHECK",
#endif
#ifdef SQLITE_OMIT_COMPLETE
  "OMIT_COMPLETE",
#endif
#ifdef SQLITE_OMIT_COMPOUND_SELECT
  "OMIT_COMPOUND_SELECT",
#endif
#ifdef SQLITE_OMIT_CONFLICT_CLAUSE
  "OMIT_CONFLICT_CLAUSE",
#endif
#ifdef SQLITE_OMIT_CTE
  "OMIT_CTE",
#endif
#if defined(SQLITE_OMIT_DATETIME_FUNCS) || defined(SQLITE_OMIT_FLOATING_POINT)
  "OMIT_DATETIME_FUNCS",
#endif
#ifdef SQLITE_OMIT_DECLTYPE
  "OMIT_DECLTYPE",
#endif
#ifdef SQLITE_OMIT_DEPRECATED
  "OMIT_DEPRECATED",
#endif
#ifdef SQLITE_OMIT_DESERIALIZE
  "OMIT_DESERIALIZE",
#endif
#ifdef SQLITE_OMIT_DISKIO
  "OMIT_DISKIO",
#endif
#ifdef SQLITE_OMIT_EXPLAIN
  "OMIT_EXPLAIN",
#endif
#ifdef SQLITE_OMIT_FLAG_PRAGMAS
  "OMIT_FLAG_PRAGMAS",
#endif
#ifdef SQLITE_OMIT_FLOATING_POINT
  "OMIT_FLOATING_POINT",
#endif
#ifdef SQLITE_OMIT_FOREIGN_KEY
  "OMIT_FOREIGN_KEY",
#endif
#ifdef SQLITE_OMIT_GET_TABLE
  "OMIT_GET_TABLE",
#endif
#ifdef SQLITE_OMIT_HEX_INTEGER
  "OMIT_HEX_INTEGER",
#endif
#ifdef SQLITE_OMIT_INCRBLOB
  "OMIT_INCRBLOB",
#endif
#ifdef SQLITE_OMIT_INTEGRITY_CHECK
  "OMIT_INTEGRITY_CHECK",
#endif
#ifdef SQLITE_OMIT_INTROSPECTION_PRAGMAS
  "OMIT_INTROSPECTION_PRAGMAS",
#endif
#ifdef SQLITE_OMIT_LIKE_OPTIMIZATION
  "OMIT_LIKE_OPTIMIZATION",
#endif
#ifdef SQLITE_OMIT_LOAD_EXTENSION
  "OMIT_LOAD_EXTENSION",
#endif
#ifdef SQLITE_OMIT_LOCALTIME
  "OMIT_LOCALTIME",
#endif
#ifdef SQLITE_OMIT_LOOKASIDE
  "OMIT_LOOKASIDE",
#endif
#ifdef SQLITE_OMIT_MEMORYDB
  "OMIT_MEMORYDB",
#endif
#ifdef SQLITE_OMIT_OR_OPTIMIZATION
  "OMIT_OR_OPTIMIZATION",
#endif
#ifdef SQLITE_OMIT_PAGER_PRAGMAS
  "OMIT_PAGER_PRAGMAS",
#endif
#ifdef SQLITE_OMIT_PARSER_TRACE
  "OMIT_PARSER_TRACE",
#endif
#ifdef SQLITE_OMIT_POPEN
  "OMIT_POPEN",
#endif
#ifdef SQLITE_OMIT_PRAGMA
  "OMIT_PRAGMA",
#endif
#ifdef SQLITE_OMIT_PROGRESS_CALLBACK
  "OMIT_PROGRESS_CALLBACK",
#endif
#ifdef SQLITE_OMIT_QUICKBALANCE
  "OMIT_QUICKBALANCE",
#endif
#ifdef SQLITE_OMIT_REINDEX
  "OMIT_REINDEX",
#endif
#ifdef SQLITE_OMIT_SCHEMA_PRAGMAS
  "OMIT_SCHEMA_PRAGMAS",
#endif
#ifdef SQLITE_OMIT_SCHEMA_VERSION_PRAGMAS
  "OMIT_SCHEMA_VERSION_PRAGMAS",
#endif
#ifdef SQLITE_OMIT_SHARED_CACHE
  "OMIT_SHARED_CACHE",
#endif
#ifdef SQLITE_OMIT_SHUTDOWN_DIRECTORIES
  "OMIT_SHUTDOWN_DIRECTORIES",
#endif
#ifdef SQLITE_OMIT_SUBQUERY
  "OMIT_SUBQUERY",
#endif
#ifdef SQLITE_OMIT_TCL_VARIABLE
  "OMIT_TCL_VARIABLE",
#endif
#ifdef SQLITE_OMIT_TEMPDB
  "OMIT_TEMPDB",
#endif
#ifdef SQLITE_OMIT_TEST_CONTROL
  "OMIT_TEST_CONTROL",
#endif
#ifdef SQLITE_OMIT_TRACE
# if SQLITE_OMIT_TRACE != 1
  "OMIT_TRACE=" CTIMEOPT_VAL(SQLITE_OMIT_TRACE),
# endif
#endif
#ifdef SQLITE_OMIT_TRIGGER
  "OMIT_TRIGGER",
#endif
#ifdef SQLITE_OMIT_TRUNCATE_OPTIMIZATION
  "OMIT_TRUNCATE_OPTIMIZATION",
#endif
#ifdef SQLITE_OMIT_UTF16
  "OMIT_UTF16",
#endif
#ifdef SQLITE_OMIT_VACUUM
  "OMIT_VACUUM",
#endif
#ifdef SQLITE_OMIT_VIEW
  "OMIT_VIEW",
#endif
#ifdef SQLITE_OMIT_VIRTUALTABLE
  "OMIT_VIRTUALTABLE",
#endif
#ifdef SQLITE_OMIT_WAL
  "OMIT_WAL",
#endif
#ifdef SQLITE_OMIT_WSD
  "OMIT_WSD",
#endif
#ifdef SQLITE_OMIT_XFER_OPT
  "OMIT_XFER_OPT",
#endif
#ifdef SQLITE_PCACHE_SEPARATE_HEADER
  "PCACHE_SEPARATE_HEADER",
#endif
#ifdef SQLITE_PERFORMANCE_TRACE
  "PERFORMANCE_TRACE",
#endif
#ifdef SQLITE_POWERSAFE_OVERWRITE
# if SQLITE_POWERSAFE_OVERWRITE != 1
  "POWERSAFE_OVERWRITE=" CTIMEOPT_VAL(SQLITE_POWERSAFE_OVERWRITE),
# endif
#endif
#ifdef SQLITE_PREFER_PROXY_LOCKING
  "PREFER_PROXY_LOCKING",
#endif
#ifdef SQLITE_PROXY_DEBUG
  "PROXY_DEBUG",
#endif
#ifdef SQLITE_REVERSE_UNORDERED_SELECTS
  "REVERSE_UNORDERED_SELECTS",
#endif
#ifdef SQLITE_RTREE_INT_ONLY
  "RTREE_INT_ONLY",
#endif
#ifdef SQLITE_SECURE_DELETE
  "SECURE_DELETE",
#endif
#ifdef SQLITE_SMALL_STACK
  "SMALL_STACK",
#endif
#ifdef SQLITE_SORTER_PMASZ
  "SORTER_PMASZ=" CTIMEOPT_VAL(SQLITE_SORTER_PMASZ),
#endif
#ifdef SQLITE_SOUNDEX
  "SOUNDEX",
#endif
#ifdef SQLITE_STAT4_SAMPLES
  "STAT4_SAMPLES=" CTIMEOPT_VAL(SQLITE_STAT4_SAMPLES),
#endif
#ifdef SQLITE_STMTJRNL_SPILL
  "STMTJRNL_SPILL=" CTIMEOPT_VAL(SQLITE_STMTJRNL_SPILL),
#endif
#ifdef SQLITE_SUBSTR_COMPATIBILITY
  "SUBSTR_COMPATIBILITY",
#endif
#if (!defined(SQLITE_WIN32_MALLOC) \
     && !defined(SQLITE_ZERO_MALLOC) \
     && !defined(SQLITE_MEMDEBUG) \
    ) || defined(SQLITE_SYSTEM_MALLOC)
  "SYSTEM_MALLOC",
#endif
#ifdef SQLITE_TCL
  "TCL",
#endif
#ifdef SQLITE_TEMP_STORE
  "TEMP_STORE=" CTIMEOPT_VAL(SQLITE_TEMP_STORE),
#endif
#ifdef SQLITE_TEST
  "TEST",
#endif
#if defined(SQLITE_THREADSAFE)
  "THREADSAFE=" CTIMEOPT_VAL(SQLITE_THREADSAFE),
#elif defined(THREADSAFE)
  "THREADSAFE=" CTIMEOPT_VAL(THREADSAFE),
#else
  "THREADSAFE=1",
#endif
#ifdef SQLITE_UNLINK_AFTER_CLOSE
  "UNLINK_AFTER_CLOSE",
#endif
#ifdef SQLITE_UNTESTABLE
  "UNTESTABLE",
#endif
#ifdef SQLITE_USER_AUTHENTICATION
  "USER_AUTHENTICATION",
#endif
#ifdef SQLITE_USE_ALLOCA
  "USE_ALLOCA",
#endif
#ifdef SQLITE_USE_FCNTL_TRACE
  "USE_FCNTL_TRACE",
#endif
#ifdef SQLITE_USE_URI
  "USE_URI",
#endif
#ifdef SQLITE_VDBE_COVERAGE
  "VDBE_COVERAGE",
#endif
#ifdef SQLITE_WIN32_MALLOC
  "WIN32_MALLOC",
#endif
#ifdef SQLITE_ZERO_MALLOC
  "ZERO_MALLOC",
#endif
/* 
** END CODE GENERATED BY tool/mkctime.tcl 
*/
};

const char **sqlite3CompileOptions(int *pnOpt){
  *pnOpt = sizeof(sqlite3azCompileOpt) / sizeof(sqlite3azCompileOpt[0]);
  return (const char**)sqlite3azCompileOpt;
}

#endif /* SQLITE_OMIT_COMPILEOPTION_DIAGS */
