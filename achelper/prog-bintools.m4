AC_DEFUN([FSC_PROG_AR],
[
  AC_CHECK_TOOL(AR, [ar])
  AC_SUBST(AR)
])

AC_DEFUN([FSC_PROG_OBJDUMP],
[
  AC_CHECK_TOOL(OBJDUMP, [objdump])
  AC_SUBST(OBJDUMP)
])

