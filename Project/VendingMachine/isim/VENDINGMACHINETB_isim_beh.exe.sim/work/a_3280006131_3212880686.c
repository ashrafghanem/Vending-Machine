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



static void work_a_3280006131_3212880686_p_0(char *t0)
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
    char *t13;
    char *t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    char *t23;
    char *t24;
    char *t25;

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
    t11 = *((unsigned char *)t6);
    t12 = (t11 == (unsigned char)1);
    if (t12 != 0)
        goto LAB10;

LAB12:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB18;

LAB19:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB33;

LAB34:
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
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t13 = (t8 + 56U);
    t14 = *((char **)t13);
    *((int *)t14) = 0;
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
    t13 = *((char **)t8);
    memcpy(t13, t1, 2U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(58, ng0);
    t1 = (t0 + 7334);
    t5 = (t0 + 4712);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t13 = *((char **)t8);
    memcpy(t13, t1, 3U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(59, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t15 = (1 - 2);
    t16 = (t15 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t3 = *((unsigned char *)t1);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB13;

LAB15:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t15 = (2 - 2);
    t16 = (t15 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t3 = *((unsigned char *)t1);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB16;

LAB17:
LAB14:    goto LAB11;

LAB13:    xsi_set_current_line(60, ng0);
    t5 = (t0 + 4584);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t13 = *((char **)t8);
    *((int *)t13) = 6;
    xsi_driver_first_trans_fast(t5);
    goto LAB14;

LAB16:    xsi_set_current_line(62, ng0);
    t5 = (t0 + 4584);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t13 = *((char **)t8);
    *((int *)t13) = 5;
    xsi_driver_first_trans_fast(t5);
    goto LAB14;

LAB18:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 2472U);
    t5 = *((char **)t1);
    t15 = *((int *)t5);
    t1 = (t0 + 2632U);
    t6 = *((char **)t1);
    t19 = *((int *)t6);
    t9 = (t15 < t19);
    if (t9 != 0)
        goto LAB20;

LAB22:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t15 = (2 - 2);
    t16 = (t15 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t3 = *((unsigned char *)t1);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB30;

LAB32:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 4648);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 1U, 1, 0LL);

LAB31:
LAB21:    goto LAB11;

LAB20:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 1512U);
    t7 = *((char **)t1);
    t20 = (0 - 2);
    t16 = (t20 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t1 = (t7 + t18);
    t10 = *((unsigned char *)t1);
    t11 = (t10 == (unsigned char)3);
    if (t11 != 0)
        goto LAB23;

LAB25:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t15 = (1 - 2);
    t16 = (t15 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t3 = *((unsigned char *)t1);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB26;

LAB27:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t15 = (2 - 2);
    t16 = (t15 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t3 = *((unsigned char *)t1);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB28;

LAB29:
LAB24:    goto LAB21;

LAB23:    xsi_set_current_line(67, ng0);
    t8 = (t0 + 2472U);
    t13 = *((char **)t8);
    t21 = *((int *)t13);
    t22 = (t21 + 1);
    t8 = (t0 + 4520);
    t14 = (t8 + 56U);
    t23 = *((char **)t14);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    *((int *)t25) = t22;
    xsi_driver_first_trans_fast(t8);
    goto LAB24;

LAB26:    xsi_set_current_line(68, ng0);
    t5 = (t0 + 2472U);
    t6 = *((char **)t5);
    t19 = *((int *)t6);
    t20 = (t19 + 2);
    t5 = (t0 + 4520);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t13 = (t8 + 56U);
    t14 = *((char **)t13);
    *((int *)t14) = t20;
    xsi_driver_first_trans_fast(t5);
    goto LAB24;

LAB28:    xsi_set_current_line(69, ng0);
    t5 = (t0 + 2472U);
    t6 = *((char **)t5);
    t19 = *((int *)t6);
    t20 = (t19 + 4);
    t5 = (t0 + 4520);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t13 = (t8 + 56U);
    t14 = *((char **)t13);
    *((int *)t14) = t20;
    xsi_driver_first_trans_fast(t5);
    goto LAB24;

LAB30:    xsi_set_current_line(72, ng0);
    t5 = (t0 + 4648);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t13 = *((char **)t8);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_delta(t5, 0U, 1, 0LL);
    goto LAB31;

LAB33:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 2472U);
    t5 = *((char **)t1);
    t15 = *((int *)t5);
    t1 = (t0 + 2632U);
    t6 = *((char **)t1);
    t19 = *((int *)t6);
    t20 = (t15 - t19);
    t9 = (t20 == 3);
    if (t9 != 0)
        goto LAB35;

LAB37:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t1 = (t0 + 2632U);
    t5 = *((char **)t1);
    t19 = *((int *)t5);
    t20 = (t15 - t19);
    t3 = (t20 == 2);
    if (t3 != 0)
        goto LAB38;

LAB39:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t1 = (t0 + 2632U);
    t5 = *((char **)t1);
    t19 = *((int *)t5);
    t20 = (t15 - t19);
    t3 = (t20 == 1);
    if (t3 != 0)
        goto LAB40;

LAB41:
LAB36:    goto LAB11;

LAB35:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 7337);
    t8 = (t0 + 4712);
    t13 = (t8 + 56U);
    t14 = *((char **)t13);
    t23 = (t14 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t1, 3U);
    xsi_driver_first_trans_fast_port(t8);
    goto LAB36;

LAB38:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 7340);
    t7 = (t0 + 4712);
    t8 = (t7 + 56U);
    t13 = *((char **)t8);
    t14 = (t13 + 56U);
    t23 = *((char **)t14);
    memcpy(t23, t1, 3U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB36;

LAB40:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 7343);
    t7 = (t0 + 4712);
    t8 = (t7 + 56U);
    t13 = *((char **)t8);
    t14 = (t13 + 56U);
    t23 = *((char **)t14);
    memcpy(t23, t1, 3U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB36;

}

static void work_a_3280006131_3212880686_p_1(char *t0)
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


extern void work_a_3280006131_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3280006131_3212880686_p_0,(void *)work_a_3280006131_3212880686_p_1};
	xsi_register_didat("work_a_3280006131_3212880686", "isim/VENDINGMACHINETB_isim_beh.exe.sim/work/a_3280006131_3212880686.didat");
	xsi_register_executes(pe);
}
