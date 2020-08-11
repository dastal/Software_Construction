/*
 * Generated by ISE 18.07.10.1981 GPL Edition - windows
 */

#include "eif_eiffel.h"
#include "eif_project.h"
#include "egc_include.h"

#ifdef __cplusplus
extern "C" {
#endif
extern void F1_23();
extern EIF_REFERENCE F1_14();
extern void F230_6501();
extern void F232_6675();
extern void F237_6744();
extern void F238_6883();
extern void F273_3801();
extern void F267_6382();
extern void F53_1215();
extern EIF_REFERENCE F53_1202();
extern EIF_BOOLEAN F53_1214();
extern EIF_BOOLEAN F53_1222();
extern void F53_1224();
extern void F53_1225();
extern void F53_1226();
extern void F46_1128();
extern EIF_TYPED_VALUE F46_1129();

long *eif_area_table = (long *)0;
long *eif_lower_table = (long *)0;


extern void egc_init_plug (void); 
void egc_init_plug (void)
{
	egc_prof_enabled = (EIF_INTEGER) 0;
	egc_correct_mismatch = (void (*)(EIF_REFERENCE)) F1_23;
	egc_twin = (EIF_TYPED_VALUE (*)(EIF_REFERENCE)) F1_14;
	egc_strmake = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F230_6501;
	egc_str32make = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F237_6744;
	egc_arrmake = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F273_3801;
	egc_strset = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F232_6675;
	egc_str32set = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F238_6883;
	egc_routdisp_wb = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F267_6382;
	egc_is_scoop_capable = 1;
	egc_set_exception_data = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F53_1215;
	egc_set_last_exception = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F53_1214;
	egc_last_exception = (EIF_TYPED_VALUE (*)(EIF_REFERENCE)) F53_1202;
	egc_is_code_ignored = (EIF_TYPED_VALUE (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F53_1222;
	egc_once_raise = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F53_1224;
	egc_init_exception_manager = (void (*)(EIF_REFERENCE)) F53_1225;
	egc_free_preallocated_trace = (void (*)(EIF_REFERENCE)) F53_1226;

	egc_str_dtype = 231;

	egc_str32_dtype = 237;
	egc_arr_dtype = 272;
	egc_tup_dtype = 185;
	egc_disp_rout_id = 3209;
	egc_copy_rout_id = 18;
	egc_is_equal_rout_id = 11;

	egc_sp_char = 0x0206;
	egc_sp_wchar = 0x037A;
	egc_sp_bool = 0x02A3;
	egc_sp_uint8 = 0x01F4;
	egc_sp_uint16 = 0x0168;
	egc_sp_uint32 = 0x025B;
	egc_sp_uint64 = 0x02FF;
	egc_sp_int8 = 0x038B;
	egc_sp_int16 = 0x02DB;
	egc_sp_int32 = 0x0121;
	egc_sp_int64 = 0x0323;
	egc_sp_real32 = 0x01D0;
	egc_sp_real64 = 0x02B7;
	egc_sp_pointer = 0x01A3;
	egc_sp_ref = 0x0115;

	egc_uint8_dtype = 208;
	egc_uint16_dtype = 214;
	egc_uint32_dtype = 211;
	egc_uint64_dtype = 223;
	egc_int8_dtype = 187;
	egc_int16_dtype = 220;
	egc_int32_dtype = 217;
	egc_int64_dtype = 199;
	egc_bool_dtype = 202;
	egc_real32_dtype = 190;
	egc_char_dtype = 196;
	egc_wchar_dtype = 193;
	egc_real64_dtype = 205;
	egc_point_dtype = 226;

	egc_exception_dtype = 64;
	egc_except_emnger_dtype = 52;

	egc_ce_type = egc_ce_type_init;

	egc_ce_exp_type = egc_ce_exp_type_init;
	egc_fsystem = egc_fsystem_init;
	egc_system_mod_init = egc_system_mod_init_init;
	egc_partab = egc_partab_init;
	egc_partab_size = egc_partab_size_init;
	egc_foption = egc_foption_init;
	egc_frozen = egc_frozen_init;
	egc_fpatidtab = egc_fpatidtab_init;
	egc_address_table = egc_address_table_init;
	egc_fpattern = egc_fpattern_init;

	egc_einit = egc_einit_init;
	egc_tabinit = egc_tabinit_init;
	egc_forg_table = egc_forg_table_init;

	egc_system_name = "filesystem";
	egc_system_location = "C:\\Users\\David\\Documents\\Eiffel User Files\\lab06\\Composite\\EIFGENs\\filesystem\\W_code";
	egc_compiler_tag = 38;
	egc_project_version = 1538403340;
	egc_has_old_special_semantic = 0;
	egc_has_ieee_semantic = 1;
	scount = 961;

	egc_rcount = 1;
	egc_ridx = 0;
	egc_rlist = (char**) eif_malloc (sizeof(char*)*egc_rcount);
	egc_rcdt = (int32 *) eif_malloc (sizeof(int32)*egc_rcount);
	egc_rcrid = (int32 *) eif_malloc (sizeof(int32)*egc_rcount);
	egc_rcarg = (int32 *) eif_malloc (sizeof(int32)*egc_rcount);
	egc_rlist[0] = "APPLICATION.make";
	egc_rcdt[0] = 0;
	egc_rcrid[0] = 4947;
	egc_rcarg[0] = 0;
	
	
	egc_platform_level = 0x00000D00;
	egc_rt_extension_dt = 45;
	egc_rt_extension_notify = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F46_1128;
	egc_rt_extension_notify_argument = (EIF_TYPED_VALUE (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F46_1129;
}

void egc_rcdt_init (void)
{
	if (egc_rcdt[0] == 0) {
		egc_rcdt[0] = 960; /* APPLICATION */
	}
}

#ifdef __cplusplus
}
#endif
