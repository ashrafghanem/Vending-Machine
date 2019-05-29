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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/ISE Projects/VendingMachine/VendingMachine.vhd";



static void work_a_0009454150_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    char *t27;
    char *t28;

LAB0:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1152U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 4360);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 4456);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2152U);
    t6 = *((char **)t2);
    t12 = *((unsigned char *)t6);
    t13 = (t12 == (unsigned char)0);
    if (t13 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 2152U);
    t7 = *((char **)t2);
    t14 = *((unsigned char *)t7);
    t15 = (t14 == (unsigned char)1);
    t11 = t15;

LAB15:    if (t11 != 0)
        goto LAB10;

LAB12:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB21;

LAB22:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB36;

LAB37:
LAB11:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 4456);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB7:    t2 = (t0 + 1192U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

LAB10:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 4520);
    t8 = (t2 + 56U);
    t16 = *((char **)t8);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((int *)t18) = 0;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(56, ng0);
    t1 = (t0 + 4584);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 7332);
    t5 = (t0 + 4648);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t16 = *((char **)t8);
    memcpy(t16, t1, 2U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(58, ng0);
    t1 = (t0 + 7334);
    t5 = (t0 + 4712);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t16 = *((char **)t8);
    memcpy(t16, t1, 3U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(59, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t19 = (1 - 2);
    t20 = (t19 * -1);
    t21 = (1U * t20);
    t22 = (0 + t21);
    t1 = (t2 + t22);
    t3 = *((unsigned char *)t1);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB16;

LAB18:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t19 = (2 - 2);
    t20 = (t19 * -1);
    t21 = (1U * t20);
    t22 = (0 + t21);
    t1 = (t2 + t22);
    t3 = *((unsigned char *)t1);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB19;

LAB20:
LAB17:    goto LAB11;

LAB13:    t11 = (unsigned char)1;
    goto LAB15;

LAB16:    xsi_set_current_line(60, ng0);
    t5 = (t0 + 4584);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t16 = *((char **)t8);
    *((int *)t16) = 6;
    xsi_driver_first_trans_fast(t5);
    goto LAB17;

LAB19:    xsi_set_current_line(62, ng0);
    t5 = (t0 + 4584);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t16 = *((char **)t8);
    *((int *)t16) = 5;
    xsi_driver_first_trans_fast(t5);
    goto LAB17;

LAB21:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 2472U);
    t5 = *((char **)t1);
    t19 = *((int *)t5);
    t1 = (t0 + 2632U);
    t6 = *((char **)t1);
    t23 = *((int *)t6);
    t9 = (t19 < t23);
    if (t9 != 0)
        goto LAB23;

LAB25:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t19 = (2 - 2);
    t20 = (t19 * -1);
    t21 = (1U * t20);
    t22 = (0 + t21);
    t1 = (t2 + t22);
    t3 = *((unsigned char *)t1);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB33;

LAB35:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 4648);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 1U, 1, 0LL);

LAB34:
LAB24:    goto LAB11;

LAB23:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 1512U);
    t7 = *((char **)t1);
    t24 = (0 - 2);
    t20 = (t24 * -1);
    t21 = (1U * t20);
    t22 = (0 + t21);
    t1 = (t7 + t22);
    t10 = *((unsigned char *)t1);
    t11 = (t10 == (unsigned char)3);
    if (t11 != 0)
        goto LAB26;

LAB28:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t19 = (1 - 2);
    t20 = (t19 * -1);
    t21 = (1U * t20);
    t22 = (0 + t21);
    t1 = (t2 + t22);
    t3 = *((unsigned char *)t1);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB29;

LAB30:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t19 = (2 - 2);
    t20 = (t19 * -1);
    t21 = (1U * t20);
    t22 = (0 + t21);
    t1 = (t2 + t22);
    t3 = *((unsigned char *)t1);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB31;

LAB32:
LAB27:    goto LAB24;

LAB26:    xsi_set_current_line(67, ng0);
    t8 = (t0 + 2472U);
    t16 = *((char **)t8);
    t25 = *((int *)t16);
    t26 = (t25 + 1);
    t8 = (t0 + 4520);
    t17 = (t8 + 56U);
    t18 = *((char **)t17);
    t27 = (t18 + 56U);
    t28 = *((char **)t27);
    *((int *)t28) = t26;
    xsi_driver_first_trans_fast(t8);
    goto LAB27;

LAB29:    xsi_set_current_line(68, ng0);
    t5 = (t0 + 2472U);
    t6 = *((char **)t5);
    t23 = *((int *)t6);
    t24 = (t23 + 2);
    t5 = (t0 + 4520);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t16 = (t8 + 56U);
    t17 = *((char **)t16);
    *((int *)t17) = t24;
    xsi_driver_first_trans_fast(t5);
    goto LAB27;

LAB31:    xsi_set_current_line(69, ng0);
    t5 = (t0 + 2472U);
    t6 = *((char **)t5);
    t23 = *((int *)t6);
    t24 = (t23 + 4);
    t5 = (t0 + 4520);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t16 = (t8 + 56U);
    t17 = *((char **)t16);
    *((int *)t17) = t24;
    xsi_driver_first_trans_fast(t5);
    goto LAB27;

LAB33:    xsi_set_current_line(72, ng0);
    t5 = (t0 + 4648);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t16 = *((char **)t8);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_delta(t5, 0U, 1, 0LL);
    goto LAB34;

LAB36:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 2472U);
    t5 = *((char **)t1);
    t19 = *((int *)t5);
    t1 = (t0 + 2632U);
    t6 = *((char **)t1);
    t23 = *((int *)t6);
    t24 = (t19 - t23);
    t9 = (t24 == 3);
    if (t9 != 0)
        goto LAB38;

LAB40:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t19 = *((int *)t2);
    t1 = (t0 + 2632U);
    t5 = *((char **)t1);
    t23 = *((int *)t5);
    t24 = (t19 - t23);
    t3 = (t24 == 2);
    if (t3 != 0)
        goto LAB41;

LAB42:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t19 = *((int *)t2);
    t1 = (t0 + 2632U);
    t5 = *((char **)t1);
    t23 = *((int *)t5);
    t24 = (t19 - t23);
    t3 = (t24 == 1);
    if (t3 != 0)
        goto LAB43;

LAB44:
LAB39:    goto LAB11;

LAB38:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 7337);
    t8 = (t0 + 4712);
    t16 = (t8 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t27 = *((char **)t18);
    memcpy(t27, t1, 3U);
    xsi_driver_first_trans_fast_port(t8);
    goto LAB39;

LAB41:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 7340);
    t7 = (t0 + 4712);
    t8 = (t7 + 56U);
    t16 = *((char **)t8);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t1, 3U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB39;

LAB43:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 7343);
    t7 = (t0 + 4712);
    t8 = (t7 + 56U);
    t16 = *((char **)t8);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t1, 3U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB39;

}

static void work_a_0009454150_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    int t16;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6};

LAB0:    xsi_set_current_line(89, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 4376);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(91, ng0);
    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 4776);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB9:    goto LAB2;

LAB4:    xsi_set_current_line(97, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t12 = (1 - 2);
    t13 = (t12 * -1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t1 = (t2 + t15);
    t3 = *((unsigned char *)t1);
    t6 = (t3 == (unsigned char)3);
    if (t6 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t12 = (2 - 2);
    t13 = (t12 * -1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t1 = (t2 + t15);
    t3 = *((unsigned char *)t1);
    t6 = (t3 == (unsigned char)3);
    if (t6 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(103, ng0);
    t1 = (t0 + 4776);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB15:
LAB12:    goto LAB2;

LAB5:    xsi_set_current_line(107, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    t1 = (t0 + 2632U);
    t4 = *((char **)t1);
    t16 = *((int *)t4);
    t3 = (t12 < t16);
    if (t3 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(110, ng0);
    t1 = (t0 + 4776);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB18:    goto LAB2;

LAB6:    xsi_set_current_line(113, ng0);
    t1 = (t0 + 4776);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB7:    xsi_set_current_line(115, ng0);
    t1 = (t0 + 4776);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB8:    xsi_set_current_line(92, ng0);
    t4 = (t0 + 4776);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)1;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(98, ng0);
    t4 = (t0 + 4776);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB12;

LAB14:    xsi_set_current_line(101, ng0);
    t4 = (t0 + 4776);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB15;

LAB17:    xsi_set_current_line(108, ng0);
    t1 = (t0 + 4776);
    t5 = (t1 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB18;

}


extern void work_a_0009454150_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0009454150_3212880686_p_0,(void *)work_a_0009454150_3212880686_p_1};
	xsi_register_didat("work_a_0009454150_3212880686", "isim/VENDINGMACHINE_isim_beh.exe.sim/work/a_0009454150_3212880686.didat");
	xsi_register_executes(pe);
}
