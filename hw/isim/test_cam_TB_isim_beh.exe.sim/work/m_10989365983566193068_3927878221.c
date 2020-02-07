/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/saav9/work03-simulacion-OV7670-Grupo3/hw/src/cam_read.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {7, 0};
static int ng5[] = {6, 0};
static int ng6[] = {5, 0};
static int ng7[] = {4, 0};
static int ng8[] = {3, 0};



static void Always_39_0(char *t0)
{
    char t9[8];
    char t18[8];
    char t33[8];
    char t41[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    int t65;
    int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;

LAB0:    t1 = (t0 + 3776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 4096);
    *((int *)t2) = 1;
    t3 = (t0 + 3808);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 2864);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 32);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 32);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 32);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 32);
    if (t8 == 1)
        goto LAB13;

LAB14:
LAB15:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);
    t2 = (t0 + 2704);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    goto LAB2;

LAB7:    xsi_set_current_line(42, ng0);

LAB16:    xsi_set_current_line(43, ng0);
    t10 = (t0 + 1504U);
    t11 = *((char **)t10);
    memset(t9, 0, 8);
    t10 = (t11 + 4);
    t12 = *((unsigned int *)t10);
    t13 = (~(t12));
    t14 = *((unsigned int *)t11);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t10) == 0)
        goto LAB17;

LAB19:    t17 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t17) = 1;

LAB20:    memset(t18, 0, 8);
    t19 = (t9 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (~(t20));
    t22 = *((unsigned int *)t9);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t19) != 0)
        goto LAB23;

LAB24:    t26 = (t18 + 4);
    t27 = *((unsigned int *)t18);
    t28 = *((unsigned int *)t26);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB25;

LAB26:    memcpy(t41, t18, 8);

LAB27:    t73 = (t41 + 4);
    t74 = *((unsigned int *)t73);
    t75 = (~(t74));
    t76 = *((unsigned int *)t41);
    t77 = (t76 & t75);
    t78 = (t77 != 0);
    if (t78 > 0)
        goto LAB35;

LAB36:
LAB37:    goto LAB15;

LAB9:    xsi_set_current_line(48, ng0);

LAB39:    xsi_set_current_line(49, ng0);
    t3 = (t0 + 1504U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t4 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t3) != 0)
        goto LAB42;

LAB43:    t7 = (t9 + 4);
    t20 = *((unsigned int *)t9);
    t21 = *((unsigned int *)t7);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB44;

LAB45:    memcpy(t41, t9, 8);

LAB46:    t46 = (t41 + 4);
    t74 = *((unsigned int *)t46);
    t75 = (~(t74));
    t76 = *((unsigned int *)t41);
    t77 = (t76 & t75);
    t78 = (t77 != 0);
    if (t78 > 0)
        goto LAB58;

LAB59:
LAB60:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1664U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t12 = *((unsigned int *)t2);
    t13 = (~(t12));
    t14 = *((unsigned int *)t3);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB61;

LAB62:
LAB63:    goto LAB15;

LAB11:    xsi_set_current_line(52, ng0);

LAB64:    xsi_set_current_line(53, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2544);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 7);
    t14 = (t13 & 1);
    *((unsigned int *)t9) = t14;
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 7);
    t20 = (t16 & 1);
    *((unsigned int *)t2) = t20;
    t5 = (t0 + 2384);
    t7 = (t0 + 2384);
    t10 = (t7 + 72U);
    t11 = *((char **)t10);
    t17 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t18, t11, 2, t17, 32, 1);
    t19 = (t18 + 4);
    t21 = *((unsigned int *)t19);
    t8 = (!(t21));
    if (t8 == 1)
        goto LAB65;

LAB66:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 6);
    t14 = (t13 & 1);
    *((unsigned int *)t9) = t14;
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 6);
    t20 = (t16 & 1);
    *((unsigned int *)t2) = t20;
    t5 = (t0 + 2384);
    t7 = (t0 + 2384);
    t10 = (t7 + 72U);
    t11 = *((char **)t10);
    t17 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t18, t11, 2, t17, 32, 1);
    t19 = (t18 + 4);
    t21 = *((unsigned int *)t19);
    t8 = (!(t21));
    if (t8 == 1)
        goto LAB67;

LAB68:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 5);
    t14 = (t13 & 1);
    *((unsigned int *)t9) = t14;
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 5);
    t20 = (t16 & 1);
    *((unsigned int *)t2) = t20;
    t5 = (t0 + 2384);
    t7 = (t0 + 2384);
    t10 = (t7 + 72U);
    t11 = *((char **)t10);
    t17 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t18, t11, 2, t17, 32, 1);
    t19 = (t18 + 4);
    t21 = *((unsigned int *)t19);
    t8 = (!(t21));
    if (t8 == 1)
        goto LAB69;

LAB70:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 2);
    t14 = (t13 & 1);
    *((unsigned int *)t9) = t14;
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 2);
    t20 = (t16 & 1);
    *((unsigned int *)t2) = t20;
    t5 = (t0 + 2384);
    t7 = (t0 + 2384);
    t10 = (t7 + 72U);
    t11 = *((char **)t10);
    t17 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t18, t11, 2, t17, 32, 1);
    t19 = (t18 + 4);
    t21 = *((unsigned int *)t19);
    t8 = (!(t21));
    if (t8 == 1)
        goto LAB71;

LAB72:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 1);
    t14 = (t13 & 1);
    *((unsigned int *)t9) = t14;
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 1);
    t20 = (t16 & 1);
    *((unsigned int *)t2) = t20;
    t5 = (t0 + 2384);
    t7 = (t0 + 2384);
    t10 = (t7 + 72U);
    t11 = *((char **)t10);
    t17 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t18, t11, 2, t17, 32, 1);
    t19 = (t18 + 4);
    t21 = *((unsigned int *)t19);
    t8 = (!(t21));
    if (t8 == 1)
        goto LAB73;

LAB74:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t9) = t14;
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 0);
    t20 = (t16 & 1);
    *((unsigned int *)t2) = t20;
    t5 = (t0 + 2384);
    t7 = (t0 + 2384);
    t10 = (t7 + 72U);
    t11 = *((char **)t10);
    t17 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t18, t11, 2, t17, 32, 1);
    t19 = (t18 + 4);
    t21 = *((unsigned int *)t19);
    t8 = (!(t21));
    if (t8 == 1)
        goto LAB75;

LAB76:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB15;

LAB13:    xsi_set_current_line(62, ng0);

LAB77:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 1824U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t9 + 4);
    t5 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 4);
    t14 = (t13 & 1);
    *((unsigned int *)t9) = t14;
    t15 = *((unsigned int *)t5);
    t16 = (t15 >> 4);
    t20 = (t16 & 1);
    *((unsigned int *)t3) = t20;
    t7 = (t0 + 2384);
    t10 = (t0 + 2384);
    t11 = (t10 + 72U);
    t17 = *((char **)t11);
    t19 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t18, t17, 2, t19, 32, 1);
    t25 = (t18 + 4);
    t21 = *((unsigned int *)t25);
    t65 = (!(t21));
    if (t65 == 1)
        goto LAB78;

LAB79:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 3);
    t14 = (t13 & 1);
    *((unsigned int *)t9) = t14;
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 3);
    t20 = (t16 & 1);
    *((unsigned int *)t2) = t20;
    t5 = (t0 + 2384);
    t7 = (t0 + 2384);
    t10 = (t7 + 72U);
    t11 = *((char **)t10);
    t17 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t18, t11, 2, t17, 32, 1);
    t19 = (t18 + 4);
    t21 = *((unsigned int *)t19);
    t8 = (!(t21));
    if (t8 == 1)
        goto LAB80;

LAB81:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t4, 15, t5, 32);
    t7 = (t0 + 2224);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 15);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1664U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t12 = *((unsigned int *)t2);
    t13 = (~(t12));
    t14 = *((unsigned int *)t3);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB82;

LAB83:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB84:    goto LAB15;

LAB17:    *((unsigned int *)t9) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t18) = 1;
    goto LAB24;

LAB23:    t25 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB24;

LAB25:    t30 = (t0 + 2704);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memset(t33, 0, 8);
    t34 = (t32 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t32);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t34) != 0)
        goto LAB30;

LAB31:    t42 = *((unsigned int *)t18);
    t43 = *((unsigned int *)t33);
    t44 = (t42 & t43);
    *((unsigned int *)t41) = t44;
    t45 = (t18 + 4);
    t46 = (t33 + 4);
    t47 = (t41 + 4);
    t48 = *((unsigned int *)t45);
    t49 = *((unsigned int *)t46);
    t50 = (t48 | t49);
    *((unsigned int *)t47) = t50;
    t51 = *((unsigned int *)t47);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB32;

LAB33:
LAB34:    goto LAB27;

LAB28:    *((unsigned int *)t33) = 1;
    goto LAB31;

LAB30:    t40 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB31;

LAB32:    t53 = *((unsigned int *)t41);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t41) = (t53 | t54);
    t55 = (t18 + 4);
    t56 = (t33 + 4);
    t57 = *((unsigned int *)t18);
    t58 = (~(t57));
    t59 = *((unsigned int *)t55);
    t60 = (~(t59));
    t61 = *((unsigned int *)t33);
    t62 = (~(t61));
    t63 = *((unsigned int *)t56);
    t64 = (~(t63));
    t65 = (t58 & t60);
    t66 = (t62 & t64);
    t67 = (~(t65));
    t68 = (~(t66));
    t69 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t69 & t67);
    t70 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t70 & t68);
    t71 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t71 & t67);
    t72 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t72 & t68);
    goto LAB34;

LAB35:    xsi_set_current_line(43, ng0);

LAB38:    xsi_set_current_line(44, ng0);
    t79 = ((char*)((ng2)));
    t80 = (t0 + 2864);
    xsi_vlogvar_assign_value(t80, t79, 0, 0, 3);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 15);
    goto LAB37;

LAB40:    *((unsigned int *)t9) = 1;
    goto LAB43;

LAB42:    t5 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB43;

LAB44:    t10 = (t0 + 2704);
    t11 = (t10 + 56U);
    t17 = *((char **)t11);
    memset(t18, 0, 8);
    t19 = (t17 + 4);
    t23 = *((unsigned int *)t19);
    t24 = (~(t23));
    t27 = *((unsigned int *)t17);
    t28 = (t27 & t24);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB50;

LAB48:    if (*((unsigned int *)t19) == 0)
        goto LAB47;

LAB49:    t25 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t25) = 1;

LAB50:    memset(t33, 0, 8);
    t26 = (t18 + 4);
    t35 = *((unsigned int *)t26);
    t36 = (~(t35));
    t37 = *((unsigned int *)t18);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t26) != 0)
        goto LAB53;

LAB54:    t42 = *((unsigned int *)t9);
    t43 = *((unsigned int *)t33);
    t44 = (t42 & t43);
    *((unsigned int *)t41) = t44;
    t31 = (t9 + 4);
    t32 = (t33 + 4);
    t34 = (t41 + 4);
    t48 = *((unsigned int *)t31);
    t49 = *((unsigned int *)t32);
    t50 = (t48 | t49);
    *((unsigned int *)t34) = t50;
    t51 = *((unsigned int *)t34);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB55;

LAB56:
LAB57:    goto LAB46;

LAB47:    *((unsigned int *)t18) = 1;
    goto LAB50;

LAB51:    *((unsigned int *)t33) = 1;
    goto LAB54;

LAB53:    t30 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB54;

LAB55:    t53 = *((unsigned int *)t41);
    t54 = *((unsigned int *)t34);
    *((unsigned int *)t41) = (t53 | t54);
    t40 = (t9 + 4);
    t45 = (t33 + 4);
    t57 = *((unsigned int *)t9);
    t58 = (~(t57));
    t59 = *((unsigned int *)t40);
    t60 = (~(t59));
    t61 = *((unsigned int *)t33);
    t62 = (~(t61));
    t63 = *((unsigned int *)t45);
    t64 = (~(t63));
    t65 = (t58 & t60);
    t66 = (t62 & t64);
    t67 = (~(t65));
    t68 = (~(t66));
    t69 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t69 & t67);
    t70 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t70 & t68);
    t71 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t71 & t67);
    t72 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t72 & t68);
    goto LAB57;

LAB58:    xsi_set_current_line(49, ng0);
    t47 = ((char*)((ng1)));
    t55 = (t0 + 2864);
    xsi_vlogvar_assign_value(t55, t47, 0, 0, 3);
    goto LAB60;

LAB61:    xsi_set_current_line(50, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 2864);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    goto LAB63;

LAB65:    xsi_vlogvar_assign_value(t5, t9, 0, *((unsigned int *)t18), 1);
    goto LAB66;

LAB67:    xsi_vlogvar_assign_value(t5, t9, 0, *((unsigned int *)t18), 1);
    goto LAB68;

LAB69:    xsi_vlogvar_assign_value(t5, t9, 0, *((unsigned int *)t18), 1);
    goto LAB70;

LAB71:    xsi_vlogvar_assign_value(t5, t9, 0, *((unsigned int *)t18), 1);
    goto LAB72;

LAB73:    xsi_vlogvar_assign_value(t5, t9, 0, *((unsigned int *)t18), 1);
    goto LAB74;

LAB75:    xsi_vlogvar_assign_value(t5, t9, 0, *((unsigned int *)t18), 1);
    goto LAB76;

LAB78:    xsi_vlogvar_assign_value(t7, t9, 0, *((unsigned int *)t18), 1);
    goto LAB79;

LAB80:    xsi_vlogvar_assign_value(t5, t9, 0, *((unsigned int *)t18), 1);
    goto LAB81;

LAB82:    xsi_set_current_line(67, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 2864);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    goto LAB84;

}


extern void work_m_10989365983566193068_3927878221_init()
{
	static char *pe[] = {(void *)Always_39_0};
	xsi_register_didat("work_m_10989365983566193068_3927878221", "isim/test_cam_TB_isim_beh.exe.sim/work/m_10989365983566193068_3927878221.didat");
	xsi_register_executes(pe);
}
