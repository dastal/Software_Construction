/*
 * Class TO_SPECIAL [NATURAL_16]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_387 [] = {0xFF01,231,0xFFFF};
static const EIF_TYPE_INDEX egt_1_387 [] = {0xFF01,246,386,214,0xFFFF};
static const EIF_TYPE_INDEX egt_2_387 [] = {0xFF01,386,214,0xFFFF};
static const EIF_TYPE_INDEX egt_3_387 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_387 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_387 [] = {0xFF01,386,214,0xFFFF};
static const EIF_TYPE_INDEX egt_6_387 [] = {0xFF01,386,214,0xFFFF};
static const EIF_TYPE_INDEX egt_7_387 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_387 [] = {0xFF01,14,0xFFFF};
static const EIF_TYPE_INDEX egt_9_387 [] = {0xFF01,231,0xFFFF};
static const EIF_TYPE_INDEX egt_10_387 [] = {0xFF01,231,0xFFFF};
static const EIF_TYPE_INDEX egt_11_387 [] = {0xFF01,15,0xFFFF};
static const EIF_TYPE_INDEX egt_12_387 [] = {386,214,0xFFFF};
static const EIF_TYPE_INDEX egt_13_387 [] = {0xFF01,386,214,0xFFFF};
static const EIF_TYPE_INDEX egt_14_387 [] = {0xFF01,360,0xFFF8,1,0xFFFF};
static const EIF_TYPE_INDEX egt_15_387 [] = {0xFFF8,1,0xFFFF};
static const EIF_TYPE_INDEX egt_16_387 [] = {0xFFF8,1,0xFFFF};
static const EIF_TYPE_INDEX egt_17_387 [] = {0xFFF8,1,0xFFFF};


static const struct desc_info desc_387[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_387), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_387), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_387), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_387), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_387), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_387), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_387), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_387), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_387), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_387), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_387), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_387), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_387), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01C5 /*226*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_13_387), 30, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 6399, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 6400, 0xFFFFFFFF},
	{EIF_GENERIC(egt_14_387), 6401, 0},
	{EIF_GENERIC(egt_15_387), 6402, 0xFFFFFFFF},
	{EIF_GENERIC(egt_16_387), 6403, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0195 /*202*/), 6404, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 6405, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 6406, 0xFFFFFFFF},
	{EIF_GENERIC(egt_17_387), 0x00, 0xFFFFFFFF},
};
void Init387(void)
{
	IDSC(desc_387, 0, 386);
	IDSC(desc_387 + 1, 1, 386);
	IDSC(desc_387 + 32, 83, 386);
}


#ifdef __cplusplus
}
#endif
