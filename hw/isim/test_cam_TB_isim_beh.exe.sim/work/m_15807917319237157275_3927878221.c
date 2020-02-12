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
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {32767U, 0U};
static int ng4[] = {7, 0};
static int ng5[] = {6, 0};
static int ng6[] = {5, 0};
static int ng7[] = {4, 0};
static int ng8[] = {3, 0};
static int ng9[] = {2, 0};



static void Always_42_0(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;

LAB0:    t1 = (t0 + 4416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 4984);
    *((int *)t2) = 1;
    t3 = (t0 + 4448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 3504);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t6, 1, t7, 32);
    t9 = (t0 + 3504);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 1);
    goto LAB2;

}

static void Always_49_1(char *t0)
{
    char t9[8];
    char t28[8];
    char t32[8];
    char t38[8];
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
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    int t75;
    char *t76;

LAB0:    t1 = (t0 + 4664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 5000);
    *((int *)t2) = 1;
    t3 = (t0 + 4696);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng0);

LAB5:    xsi_set_current_line(51, ng0);
    t4 = (t0 + 3344);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 32);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 32);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 32);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 32);
    if (t8 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(93, ng0);

LAB107:    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2704);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB17:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);
    t2 = (t0 + 3184);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    goto LAB2;

LAB7:    xsi_set_current_line(52, ng0);

LAB18:    xsi_set_current_line(53, ng0);
    t10 = (t0 + 3504);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memset(t9, 0, 8);
    t13 = (t12 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t12);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB22;

LAB20:    if (*((unsigned int *)t13) == 0)
        goto LAB19;

LAB21:    t19 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t19) = 1;

LAB22:    t20 = (t9 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t9);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB23;

LAB24:
LAB25:    goto LAB17;

LAB9:    xsi_set_current_line(59, ng0);

LAB48:    xsi_set_current_line(60, ng0);
    t3 = (t0 + 1504U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t4 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t3) != 0)
        goto LAB51;

LAB52:    t7 = (t9 + 4);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t7);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB53;

LAB54:    memcpy(t38, t9, 8);

LAB55:    t73 = (t38 + 4);
    t68 = *((unsigned int *)t73);
    t69 = (~(t68));
    t70 = *((unsigned int *)t38);
    t71 = (t70 & t69);
    t72 = (t71 != 0);
    if (t72 > 0)
        goto LAB67;

LAB68:
LAB69:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1664U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t14 = *((unsigned int *)t2);
    t15 = (~(t14));
    t16 = *((unsigned int *)t3);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB70;

LAB71:
LAB72:    goto LAB17;

LAB11:    xsi_set_current_line(74, ng0);

LAB86:    xsi_set_current_line(75, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2704);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 7);
    t16 = (t15 & 1);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t4);
    t18 = (t17 >> 7);
    t21 = (t18 & 1);
    *((unsigned int *)t2) = t21;
    t5 = (t0 + 2544);
    t7 = (t0 + 2544);
    t10 = (t7 + 72U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t28, t11, 2, t12, 32, 1);
    t13 = (t28 + 4);
    t22 = *((unsigned int *)t13);
    t8 = (!(t22));
    if (t8 == 1)
        goto LAB87;

LAB88:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 6);
    t16 = (t15 & 1);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t4);
    t18 = (t17 >> 6);
    t21 = (t18 & 1);
    *((unsigned int *)t2) = t21;
    t5 = (t0 + 2544);
    t7 = (t0 + 2544);
    t10 = (t7 + 72U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t28, t11, 2, t12, 32, 1);
    t13 = (t28 + 4);
    t22 = *((unsigned int *)t13);
    t8 = (!(t22));
    if (t8 == 1)
        goto LAB89;

LAB90:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 5);
    t16 = (t15 & 1);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t4);
    t18 = (t17 >> 5);
    t21 = (t18 & 1);
    *((unsigned int *)t2) = t21;
    t5 = (t0 + 2544);
    t7 = (t0 + 2544);
    t10 = (t7 + 72U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t28, t11, 2, t12, 32, 1);
    t13 = (t28 + 4);
    t22 = *((unsigned int *)t13);
    t8 = (!(t22));
    if (t8 == 1)
        goto LAB91;

LAB92:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 2);
    t16 = (t15 & 1);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t4);
    t18 = (t17 >> 2);
    t21 = (t18 & 1);
    *((unsigned int *)t2) = t21;
    t5 = (t0 + 2544);
    t7 = (t0 + 2544);
    t10 = (t7 + 72U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t28, t11, 2, t12, 32, 1);
    t13 = (t28 + 4);
    t22 = *((unsigned int *)t13);
    t8 = (!(t22));
    if (t8 == 1)
        goto LAB93;

LAB94:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 1);
    t16 = (t15 & 1);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t4);
    t18 = (t17 >> 1);
    t21 = (t18 & 1);
    *((unsigned int *)t2) = t21;
    t5 = (t0 + 2544);
    t7 = (t0 + 2544);
    t10 = (t7 + 72U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t28, t11, 2, t12, 32, 1);
    t13 = (t28 + 4);
    t22 = *((unsigned int *)t13);
    t8 = (!(t22));
    if (t8 == 1)
        goto LAB95;

LAB96:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 0);
    t16 = (t15 & 1);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t4);
    t18 = (t17 >> 0);
    t21 = (t18 & 1);
    *((unsigned int *)t2) = t21;
    t5 = (t0 + 2544);
    t7 = (t0 + 2544);
    t10 = (t7 + 72U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng9)));
    xsi_vlog_generic_convert_bit_index(t28, t11, 2, t12, 32, 1);
    t13 = (t28 + 4);
    t22 = *((unsigned int *)t13);
    t8 = (!(t22));
    if (t8 == 1)
        goto LAB97;

LAB98:    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3344);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB17;

LAB13:    xsi_set_current_line(84, ng0);

LAB99:    xsi_set_current_line(85, ng0);
    t3 = (t0 + 1824U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t9 + 4);
    t5 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 4);
    t16 = (t15 & 1);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t5);
    t18 = (t17 >> 4);
    t21 = (t18 & 1);
    *((unsigned int *)t3) = t21;
    t7 = (t0 + 2544);
    t10 = (t0 + 2544);
    t11 = (t10 + 72U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t28, t12, 2, t13, 32, 1);
    t19 = (t28 + 4);
    t22 = *((unsigned int *)t19);
    t60 = (!(t22));
    if (t60 == 1)
        goto LAB100;

LAB101:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 3);
    t16 = (t15 & 1);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t4);
    t18 = (t17 >> 3);
    t21 = (t18 & 1);
    *((unsigned int *)t2) = t21;
    t5 = (t0 + 2544);
    t7 = (t0 + 2544);
    t10 = (t7 + 72U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t28, t11, 2, t12, 32, 1);
    t13 = (t28 + 4);
    t22 = *((unsigned int *)t13);
    t8 = (!(t22));
    if (t8 == 1)
        goto LAB102;

LAB103:    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2704);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t4, 15, t5, 32);
    t7 = (t0 + 2384);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 15);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 3024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t4, 8, t5, 32);
    t7 = (t0 + 3024);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 8);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1664U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t14 = *((unsigned int *)t2);
    t15 = (~(t14));
    t16 = *((unsigned int *)t3);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB104;

LAB105:    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3344);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB106:    goto LAB17;

LAB19:    *((unsigned int *)t9) = 1;
    goto LAB22;

LAB23:    xsi_set_current_line(53, ng0);

LAB26:    xsi_set_current_line(54, ng0);
    t26 = ((char*)((ng3)));
    t27 = (t0 + 2384);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 15);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t3 + 4);
    t14 = *((unsigned int *)t2);
    t15 = (~(t14));
    t16 = *((unsigned int *)t3);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB30;

LAB28:    if (*((unsigned int *)t2) == 0)
        goto LAB27;

LAB29:    t4 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t4) = 1;

LAB30:    memset(t28, 0, 8);
    t5 = (t9 + 4);
    t21 = *((unsigned int *)t5);
    t22 = (~(t21));
    t23 = *((unsigned int *)t9);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t5) != 0)
        goto LAB33;

LAB34:    t10 = (t28 + 4);
    t29 = *((unsigned int *)t28);
    t30 = *((unsigned int *)t10);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB35;

LAB36:    memcpy(t38, t28, 8);

LAB37:    t67 = (t38 + 4);
    t68 = *((unsigned int *)t67);
    t69 = (~(t68));
    t70 = *((unsigned int *)t38);
    t71 = (t70 & t69);
    t72 = (t71 != 0);
    if (t72 > 0)
        goto LAB45;

LAB46:
LAB47:    goto LAB25;

LAB27:    *((unsigned int *)t9) = 1;
    goto LAB30;

LAB31:    *((unsigned int *)t28) = 1;
    goto LAB34;

LAB33:    t7 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB34;

LAB35:    t11 = (t0 + 3184);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memset(t32, 0, 8);
    t19 = (t13 + 4);
    t33 = *((unsigned int *)t19);
    t34 = (~(t33));
    t35 = *((unsigned int *)t13);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t19) != 0)
        goto LAB40;

LAB41:    t39 = *((unsigned int *)t28);
    t40 = *((unsigned int *)t32);
    t41 = (t39 & t40);
    *((unsigned int *)t38) = t41;
    t26 = (t28 + 4);
    t27 = (t32 + 4);
    t42 = (t38 + 4);
    t43 = *((unsigned int *)t26);
    t44 = *((unsigned int *)t27);
    t45 = (t43 | t44);
    *((unsigned int *)t42) = t45;
    t46 = *((unsigned int *)t42);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB42;

LAB43:
LAB44:    goto LAB37;

LAB38:    *((unsigned int *)t32) = 1;
    goto LAB41;

LAB40:    t20 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB41;

LAB42:    t48 = *((unsigned int *)t38);
    t49 = *((unsigned int *)t42);
    *((unsigned int *)t38) = (t48 | t49);
    t50 = (t28 + 4);
    t51 = (t32 + 4);
    t52 = *((unsigned int *)t28);
    t53 = (~(t52));
    t54 = *((unsigned int *)t50);
    t55 = (~(t54));
    t56 = *((unsigned int *)t32);
    t57 = (~(t56));
    t58 = *((unsigned int *)t51);
    t59 = (~(t58));
    t8 = (t53 & t55);
    t60 = (t57 & t59);
    t61 = (~(t8));
    t62 = (~(t60));
    t63 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t63 & t61);
    t64 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t64 & t62);
    t65 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t65 & t61);
    t66 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t66 & t62);
    goto LAB44;

LAB45:    xsi_set_current_line(56, ng0);
    t73 = ((char*)((ng1)));
    t74 = (t0 + 3344);
    xsi_vlogvar_assign_value(t74, t73, 0, 0, 3);
    goto LAB47;

LAB49:    *((unsigned int *)t9) = 1;
    goto LAB52;

LAB51:    t5 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB52;

LAB53:    t10 = (t0 + 3184);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memset(t28, 0, 8);
    t13 = (t12 + 4);
    t24 = *((unsigned int *)t13);
    t25 = (~(t24));
    t29 = *((unsigned int *)t12);
    t30 = (t29 & t25);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB59;

LAB57:    if (*((unsigned int *)t13) == 0)
        goto LAB56;

LAB58:    t19 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t19) = 1;

LAB59:    memset(t32, 0, 8);
    t20 = (t28 + 4);
    t33 = *((unsigned int *)t20);
    t34 = (~(t33));
    t35 = *((unsigned int *)t28);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t20) != 0)
        goto LAB62;

LAB63:    t39 = *((unsigned int *)t9);
    t40 = *((unsigned int *)t32);
    t41 = (t39 & t40);
    *((unsigned int *)t38) = t41;
    t27 = (t9 + 4);
    t42 = (t32 + 4);
    t50 = (t38 + 4);
    t43 = *((unsigned int *)t27);
    t44 = *((unsigned int *)t42);
    t45 = (t43 | t44);
    *((unsigned int *)t50) = t45;
    t46 = *((unsigned int *)t50);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB64;

LAB65:
LAB66:    goto LAB55;

LAB56:    *((unsigned int *)t28) = 1;
    goto LAB59;

LAB60:    *((unsigned int *)t32) = 1;
    goto LAB63;

LAB62:    t26 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB63;

LAB64:    t48 = *((unsigned int *)t38);
    t49 = *((unsigned int *)t50);
    *((unsigned int *)t38) = (t48 | t49);
    t51 = (t9 + 4);
    t67 = (t32 + 4);
    t52 = *((unsigned int *)t9);
    t53 = (~(t52));
    t54 = *((unsigned int *)t51);
    t55 = (~(t54));
    t56 = *((unsigned int *)t32);
    t57 = (~(t56));
    t58 = *((unsigned int *)t67);
    t59 = (~(t58));
    t60 = (t53 & t55);
    t75 = (t57 & t59);
    t61 = (~(t60));
    t62 = (~(t75));
    t63 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t63 & t61);
    t64 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t64 & t62);
    t65 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t65 & t61);
    t66 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t66 & t62);
    goto LAB66;

LAB67:    xsi_set_current_line(60, ng0);
    t74 = ((char*)((ng2)));
    t76 = (t0 + 3344);
    xsi_vlogvar_assign_value(t76, t74, 0, 0, 3);
    goto LAB69;

LAB70:    xsi_set_current_line(61, ng0);

LAB73:    xsi_set_current_line(62, ng0);
    t4 = (t0 + 2864);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t10 = ((char*)((ng1)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t7, 8, t10, 32);
    t11 = (t0 + 2864);
    xsi_vlogvar_assign_value(t11, t9, 0, 0, 8);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2704);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 7);
    t16 = (t15 & 1);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t4);
    t18 = (t17 >> 7);
    t21 = (t18 & 1);
    *((unsigned int *)t2) = t21;
    t5 = (t0 + 2544);
    t7 = (t0 + 2544);
    t10 = (t7 + 72U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t28, t11, 2, t12, 32, 1);
    t13 = (t28 + 4);
    t22 = *((unsigned int *)t13);
    t8 = (!(t22));
    if (t8 == 1)
        goto LAB74;

LAB75:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 6);
    t16 = (t15 & 1);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t4);
    t18 = (t17 >> 6);
    t21 = (t18 & 1);
    *((unsigned int *)t2) = t21;
    t5 = (t0 + 2544);
    t7 = (t0 + 2544);
    t10 = (t7 + 72U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t28, t11, 2, t12, 32, 1);
    t13 = (t28 + 4);
    t22 = *((unsigned int *)t13);
    t8 = (!(t22));
    if (t8 == 1)
        goto LAB76;

LAB77:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 5);
    t16 = (t15 & 1);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t4);
    t18 = (t17 >> 5);
    t21 = (t18 & 1);
    *((unsigned int *)t2) = t21;
    t5 = (t0 + 2544);
    t7 = (t0 + 2544);
    t10 = (t7 + 72U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t28, t11, 2, t12, 32, 1);
    t13 = (t28 + 4);
    t22 = *((unsigned int *)t13);
    t8 = (!(t22));
    if (t8 == 1)
        goto LAB78;

LAB79:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 2);
    t16 = (t15 & 1);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t4);
    t18 = (t17 >> 2);
    t21 = (t18 & 1);
    *((unsigned int *)t2) = t21;
    t5 = (t0 + 2544);
    t7 = (t0 + 2544);
    t10 = (t7 + 72U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t28, t11, 2, t12, 32, 1);
    t13 = (t28 + 4);
    t22 = *((unsigned int *)t13);
    t8 = (!(t22));
    if (t8 == 1)
        goto LAB80;

LAB81:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 1);
    t16 = (t15 & 1);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t4);
    t18 = (t17 >> 1);
    t21 = (t18 & 1);
    *((unsigned int *)t2) = t21;
    t5 = (t0 + 2544);
    t7 = (t0 + 2544);
    t10 = (t7 + 72U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t28, t11, 2, t12, 32, 1);
    t13 = (t28 + 4);
    t22 = *((unsigned int *)t13);
    t8 = (!(t22));
    if (t8 == 1)
        goto LAB82;

LAB83:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 0);
    t16 = (t15 & 1);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t4);
    t18 = (t17 >> 0);
    t21 = (t18 & 1);
    *((unsigned int *)t2) = t21;
    t5 = (t0 + 2544);
    t7 = (t0 + 2544);
    t10 = (t7 + 72U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng9)));
    xsi_vlog_generic_convert_bit_index(t28, t11, 2, t12, 32, 1);
    t13 = (t28 + 4);
    t22 = *((unsigned int *)t13);
    t8 = (!(t22));
    if (t8 == 1)
        goto LAB84;

LAB85:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3344);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB72;

LAB74:    xsi_vlogvar_assign_value(t5, t9, 0, *((unsigned int *)t28), 1);
    goto LAB75;

LAB76:    xsi_vlogvar_assign_value(t5, t9, 0, *((unsigned int *)t28), 1);
    goto LAB77;

LAB78:    xsi_vlogvar_assign_value(t5, t9, 0, *((unsigned int *)t28), 1);
    goto LAB79;

LAB80:    xsi_vlogvar_assign_value(t5, t9, 0, *((unsigned int *)t28), 1);
    goto LAB81;

LAB82:    xsi_vlogvar_assign_value(t5, t9, 0, *((unsigned int *)t28), 1);
    goto LAB83;

LAB84:    xsi_vlogvar_assign_value(t5, t9, 0, *((unsigned int *)t28), 1);
    goto LAB85;

LAB87:    xsi_vlogvar_assign_value(t5, t9, 0, *((unsigned int *)t28), 1);
    goto LAB88;

LAB89:    xsi_vlogvar_assign_value(t5, t9, 0, *((unsigned int *)t28), 1);
    goto LAB90;

LAB91:    xsi_vlogvar_assign_value(t5, t9, 0, *((unsigned int *)t28), 1);
    goto LAB92;

LAB93:    xsi_vlogvar_assign_value(t5, t9, 0, *((unsigned int *)t28), 1);
    goto LAB94;

LAB95:    xsi_vlogvar_assign_value(t5, t9, 0, *((unsigned int *)t28), 1);
    goto LAB96;

LAB97:    xsi_vlogvar_assign_value(t5, t9, 0, *((unsigned int *)t28), 1);
    goto LAB98;

LAB100:    xsi_vlogvar_assign_value(t7, t9, 0, *((unsigned int *)t28), 1);
    goto LAB101;

LAB102:    xsi_vlogvar_assign_value(t5, t9, 0, *((unsigned int *)t28), 1);
    goto LAB103;

LAB104:    xsi_set_current_line(90, ng0);
    t4 = ((char*)((ng9)));
    t5 = (t0 + 3344);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    goto LAB106;

}


extern void work_m_15807917319237157275_3927878221_init()
{
	static char *pe[] = {(void *)Always_42_0,(void *)Always_49_1};
	xsi_register_didat("work_m_15807917319237157275_3927878221", "isim/test_cam_TB_isim_beh.exe.sim/work/m_15807917319237157275_3927878221.didat");
	xsi_register_executes(pe);
}
