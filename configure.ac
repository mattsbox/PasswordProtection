#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([FULL-PACKAGE-NAME], [VERSION], [BUG-REPORT-ADDRESS])
AC_CONFIG_SRCDIR([databases.cpp])
AM_INIT_AUTOMAKE
# Checks for programs.
AC_PROG_CXX
AC_PROG_CC
AC_PROG_INSTALL
AC_PROG_LN_S
AC_PROG_RANLIB

PKG_CHECK_MODULES(QT, [QtCore >= 4.6, QtGui >= 4.6])
AC_SUBST(QT_CFLAGS)
AC_SUBST(QT_LIBS)
# Checks for libraries.
# FIXME: Replace `main' with a function in `-lQtCore':
#AC_CHECK_LIB([QtCore], [clear],[],[
#	echo "Missing QtCore"
#	exit -1])
# FIXME: Replace `main' with a function in `-lQtGui':
#AC_CHECK_LIB([QtGui], [activateWindow],[],[
#	echo "Missing QtGui"
#	exit -1])
# FIXME: Replace `main' with a function in `-lcryptopp':
AC_CHECK_LIB([cryptopp], main,[],[
	echo "Missing CryptoPP"
	exit -1])
# FIXME: Replace `main' with a function in `-lpthread':
AC_CHECK_LIB([pthread], [pthread_testcancel],[],[
	echo "Missing pthread"
	exit -1])
# FIXME: Replace `main' with a function in `-lsqlite3':
AC_CHECK_LIB([sqlite3], [sqlite3_close],[],[
	echo "Missing sqlite3"
	exit -1])

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.
AC_CHECK_HEADER_STDBOOL

# Checks for library functions.

AC_CONFIG_FILES([Makefile])
AC_OUTPUT
