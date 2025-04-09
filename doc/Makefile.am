# Makefile.am for package : simpleLexicalAnalyser
# ==============================================================================
#
# GNU Automake automatically provides three '-I' options, and they are ;
#
#   -I.
#   -I${srcdir}
#   -I which points to the directory holding 'config.h'
#
# The last '-I' option will be provided if AC_CONFIG_HEADERS or 
# AM_CONFIG_HEADERS is called within the configure.ac file.
#
# You can disable the default '-I' options using the 'nostdinc' option. - Page
# 68 of Automake version 1.10 manual.
# ------------------------------------------------------------------------------

ACLOCAL_AMFLAGS = -I m4


vpath %.hpp   ${top_srcdir}/include
vpath %.cpp   ${srcdir}
vpath %.o     ${srcdir}


# Primaries
# ---------

bin_PROGRAMS = quaternionTest


all : quaternionTest


# ================================================================================
# Target 1) - quaternionTest
# ================================================================================
#
#   > make quaternionTest
#
# will make this target. Note that the target name is in lower camel case.
#
# ================================================================================

quaternionTest_SOURCES  = quaternionTest.cpp \
                          TestRoutines.cpp \
                          Utilities.cpp \
                          Quaternion.cpp

quaternionTest_INCLUDES = -I${top_srcdir}/include

quaternionTest_CPPFLAGS = -DHAVE_CONFIG_H \
                           ${quaternionTest_INCLUDES}

quaternionTest_LDFLAGS  = # -lfl


.c.o :
	@echo "@< ="
	${CXX} -g -Wall ${quaternionTest_CPPFLAGS} $<


SimpleScanner.c : SimpleScanner.l

	${LEX} ${simpleScannerC_LEXFLAGS} --outfile=${@} ${<}


dummy : quaternionTest

	echo "${@}"
	echo "${<}"
	echo "${#}"


# Executable target : help
# ------------------------

h    : help
help :
	@echo "                                                                                "
	@echo "This Makefile contains a number of targets and these targets can be divided up  "
	@echo "into two categories; 1) Build based targets, or 2) Ancilliary targets.          "
	@echo "                                                                                "
	@echo "  1) Build based targets                                                        "
	@echo "                                                                                "
	@echo "    - quaternionTest                                                            "
	@echo "                                                                                "
	@echo "  2) Ancilliary targets                                                         "
	@echo "                                                                                "
	@echo "    - clean | c                                                                 "
	@echo "    - archive | a                                                               "
	@echo "    - tar (defaults to tar, i.e. Tape ARchive)                                  "
	@echo "    - help | h                                                                  "
	@echo "    - reset | r                                                                 "
	@echo "    - test                                                                      "
	@echo "    - packageChecker | p                                                        "
	@echo "                                                                                "


# Miscellaneous executable targets
# --------------------------------

.PHONY : displaySettings
displaySettings :
	@echo "BASH           = ${SHELL}"
	@echo "SH             = ${SH}"
	@echo ""
	@echo "top_srcdir     = ${top_srcdir}"
	@echo "srcdir         = ${srcdir}"
	@echo ""
	@echo "builddir       = ${builddir}"
	@echo "abs_builddir   = ${abs_builddir}"
	@echo "top_builddir   = ${top_builddir}"
	@echo ""
	@echo "quaternionTest_INCLUDES = ${quaternionTest_INCLUDES}"
	@echo "quaternionTest_CPPFLAGS = ${quaternionTest_CPPFLAGS}"
